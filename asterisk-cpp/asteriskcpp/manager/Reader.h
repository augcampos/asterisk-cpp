/*
 * Reader.h
 *
 *  Created on: Jul 5, 2011
 *      Author: augcampos
 */

#ifndef READER_H_
#define READER_H_

#include <iostream>

#include "../structs/Thread.h"
#include "../net/TCPSocket.h"
#include "Dispatcher.h"

namespace asteriskcpp {

	class Reader: public Thread {
	public:
		void start(TCPSocket* s, Dispatcher* d);
		void stop();
		void run();

	private:
		TCPSocket* connectionSocket;
		Dispatcher* dispatcher;
		std::string unprocessedStr;

		void processIncomming(const std::string& newStr);

	};

}

#endif /* READER_H_ */
