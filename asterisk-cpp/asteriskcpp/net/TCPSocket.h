/*
 * TCPSocket.h
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#ifndef TCPSOCKET_H_
#define TCPSOCKET_H_

#include <errno.h>
#include <string.h>
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#include <winsock2.h>
#else
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#endif
#include <boost/thread/mutex.hpp>

#include "IPAddress.h"

#define NO_TIMEOUT 0

namespace asteriskcpp {

class TCPSocket {
protected:
	int socketFD;
	bool releaseForced;
	IPAddress ipAddress;
	boost::mutex mutRead;
	boost::mutex mutWrite;
	IPAddress peerAddress;
	struct timeval timeout;

public:
	TCPSocket();
	TCPSocket(const int socketFD);
	TCPSocket(const IPAddress& ipAddress);
	~TCPSocket();

	int readData(char* buf, const unsigned int size);
	void writeData(const char* buf, const unsigned int size);

	void setTimeout(const unsigned long timeout);
	unsigned long getTimeout();

	void release();

	bool check4readData(const unsigned long timeout);

	IPAddress getLocalAddress();
	IPAddress getPeerAddress();

	int getSocketFD();

private:
	void resolvePeerAddr();
	void resolveLocalAddr();
};

}

#endif /* TCPSOCKET_H_ */
