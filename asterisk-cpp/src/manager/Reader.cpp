/*
 * Reader.cpp
 *
 *  Created on: Jul 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/Reader.h"
#include <stdlib.h>
#include <boost/algorithm/string/predicate.hpp>
#include "asteriskcpp/exceptions/Exception.h"
#include "asteriskcpp/exceptions/IOException.h"
#include "asteriskcpp/utils/LogHandler.h"
#include "asteriskcpp/utils/StringUtils.h"
#include "asteriskcpp/manager/AsteriskVersion.h"
#include "asteriskcpp/manager/responses/ManagerResponse.h"
#include "asteriskcpp/manager/events/ManagerEvent.h"

#define SOCKET_WAIT 0

const std::string SEP("\r\n\r\n");
const std::string SEPLN("\r\n");
const unsigned int RCVBUFSIZE = 65536;

namespace asteriskcpp {

void Reader::start(TCPSocket* s, Dispatcher* d) {
	connectionSocket = s;
	dispatcher = d;
	Thread::start();
}

void Reader::stop() {
	connectionSocket = NULL;
	dispatcher = NULL;
	Thread::stop();
}

void Reader::run() {
	try {
		char buffer[(RCVBUFSIZE + 1)]="\0";

if		( connectionSocket != NULL &&
				connectionSocket->check4readData(SOCKET_WAIT)) {
			int bytesRead = connectionSocket->readData(buffer, RCVBUFSIZE);
			if (bytesRead > 0) {
				std::string rsv;
				rsv.assign(buffer,bytesRead);
				processIncomming(rsv);
				rsv.clear();
			}
		}
	} catch (SocketException& e) {
		std::cout << "___CATCH SocketException"<<std::endl;
		LOG_ERROR_STR(e.getMessage());
		stop();
	} catch (Exception& e) {
		std::cout << "___CATCH Exception"<<std::endl;
		LOG_ERROR_STR(e.getMessage());
	}
}

void Reader::processIncomming(const std::string& newStr) {
	int cutAt, endAt;

	LOG_TRACE_STR(str2Log(newStr));

	std::string str;
	str.append(unprocessedStr);
	str.append(newStr);
	unprocessedStr.clear();

	while ((cutAt = str.find(SEPLN)) != str.npos) {
		if (cutAt > 0) {
			int type(0);
			std::string endDelim;

			if (boost::istarts_with(str, "Asterisk")) {
				type = 1;
				endDelim = SEPLN;
			} else if (boost::istarts_with(str, "Response:")) {
				if (boost::istarts_with(str, "Response: Follows")) {
					type = 2;
					endDelim = "\n--END COMMAND--\r\n\r\n";
				} else {
					type = 3;
					endDelim = SEP;
				}
			} else if (boost::istarts_with(str, "Event:")) {
				type = 4;
				endDelim = SEP;
			}

			if ((endAt = str.find(endDelim)) == str.npos) {
				break;
			}

			std::string nstr = str.substr(0, endAt);

			//LOG_TRACE_DATA("[DISPATCH: " << type << "::::" << str2Log(nstr) << ":DISPATCH]");

			switch (type) {
			case 1: {
				AsteriskVersion ver;
				ver.setManagerValues(nstr);
				dispatcher->dispatchAsteriskVersion(&ver);
			}
				break;
			case 2:
			case 3: {
				dispatcher->dispatchResponse(nstr);
			}
				break;
			case 4: {
				dispatcher->dispatchEvent(nstr);
			}
				break;
			default: {
				LOG_WARN_STR("INVALID Type Received"+ nstr);
			}
				break;
			}

			str = str.substr(endAt + endDelim.length());
		} else
			str = str.substr(SEPLN.length());
	}
	if (str.length() > 0) {
		unprocessedStr.append(str); // saves data not processed
	}
}
}

