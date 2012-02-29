/*
 * TCPSocket.cpp
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

//http://tldp.org/LDP/LG/issue74/tougher.html
#include "asteriskcpp/net/TCPSocket.h"
#include "asteriskcpp/exceptions/IOException.h"

namespace asteriskcpp {

	TCPSocket::TCPSocket(const int fd) :
			socketFD(fd), releaseForced(false) {
		timeout.tv_usec = NO_TIMEOUT;
		timeout.tv_sec = NO_TIMEOUT;

		this->resolvePeerAddr();
		this->resolveLocalAddr();
	}

	TCPSocket::TCPSocket(const IPAddress& ipAddress) :
			releaseForced(false), peerAddress(ipAddress) {
		struct sockaddr_in addr;

		if ((socketFD = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) == -1) {
			Throw(SocketException(std::string("Error creating the socket - ").append(strerror(errno))));
		}

		memset(&addr, 0, sizeof(addr));

		addr.sin_family = AF_INET;
		addr.sin_port = htons(peerAddress.getPort());
		addr.sin_addr.s_addr = htonl(peerAddress.getIP());

		//Open the socket
		if (::connect(this->socketFD, (struct sockaddr *) &addr, sizeof(addr)) != 0) {
			Throw(SocketException(std::string("Error creating the socket - ").append(strerror(errno))));
		}

		timeout.tv_usec = NO_TIMEOUT;
		timeout.tv_sec = NO_TIMEOUT;

		this->resolveLocalAddr();
	}

	TCPSocket::~TCPSocket() {
		boost::mutex::scoped_lock lockRead(this->mutRead);
		boost::mutex::scoped_lock lockWrite(this->mutWrite);
		this->release();
		this->close();
	}

	int TCPSocket::readData(char* buf, const unsigned int length) {
		boost::mutex::scoped_lock lock(this->mutRead);

		fd_set fdList;

		FD_ZERO(&fdList);
		FD_SET(socketFD, &fdList);

		int value;
		struct timeval timeout = this->timeout;
		do {
			if (!timeout.tv_usec && !timeout.tv_sec)
				value = ::select(socketFD + 1, &fdList, NULL, NULL, NULL);
			else
				value = ::select(socketFD + 1, &fdList, NULL, NULL, &timeout);
		} while (value == -1 && errno == EINTR);

		if (value == 0) {
			Throw(SocketException(std::string("Error reading from socket - Timeout exception")));
		} else if (value == -1) {
			Throw(SocketException(std::string("Error reading from socket - ").append(strerror(errno))));
		}

		if (this->releaseForced)
			return (0);

#ifndef _WIN32
		int readSize = ::recv(socketFD, buf, length, MSG_NOSIGNAL);
#else
		int readSize = ::recv(socketFD, buf, length, 0);
#endif

		if (readSize == 0) {
			Throw(SocketException(std::string("Error reading from socket - Disconnected")));
		} else if (readSize == -1) {
			Throw(SocketException(std::string("Error reading from socket - ").append(strerror(errno))));
		}

		return (readSize);
	}

	void TCPSocket::writeData(const char* buf, const unsigned int length) {
		if (!length){
			return;
		}

		boost::mutex::scoped_lock lock(this->mutWrite);

#ifndef _WIN32
		int writeSize = ::send(socketFD, buf, length, MSG_NOSIGNAL);
#else
		int writeSize = ::send(socketFD, buf, length, 0);
#endif

		if (writeSize <= 0) {
			Throw(SocketException(std::string("Error writing to socket - ").append(strerror(errno))));
		}
	}

	void TCPSocket::setTimeout(const unsigned long timeout) {
		this->timeout.tv_usec = (timeout % 1000) * 1000;
		this->timeout.tv_sec = timeout / 1000;
	}

	unsigned long TCPSocket::getTimeout() {
		unsigned long timeout;

		timeout = this->timeout.tv_sec * 1000;
		timeout += this->timeout.tv_usec / 1000;

		return (timeout);
	}

	void TCPSocket::release() {
		this->releaseForced = true;
#ifdef _WIN32
		shutdown(socketFD, SD_BOTH);
#else
		::shutdown(this->socketFD, SHUT_RDWR);
#endif
	}

	void TCPSocket::close() {
#ifdef _WIN32
		closesocket(socketFD);
#else
		::close(this->socketFD);
#endif
	}

	bool TCPSocket::check4readData(const unsigned long timeout) {
		boost::mutex::scoped_lock lock(this->mutRead);

		struct timeval time;
		fd_set fdList;

		time.tv_usec = (timeout % 1000) * 1000;
		time.tv_sec = timeout / 1000;

		FD_ZERO(&fdList);
		FD_SET(socketFD, &fdList);

		if (select(this->socketFD + 1, &fdList, NULL, NULL, &time) <= 0)
			return (false);
		else
			return (true);
	}

	IPAddress TCPSocket::getLocalAddress() {
		return (this->ipAddress);
	}

	IPAddress TCPSocket::getPeerAddress() {
		return (this->peerAddress);
	}

	void TCPSocket::resolvePeerAddr() {
		struct sockaddr_in client_addr;
#ifdef _WIN32
		int size = sizeof(client_addr);
#else
		socklen_t size = sizeof(client_addr);
#endif

		if (::getpeername(this->socketFD, (struct sockaddr *) &client_addr, &size) == -1) {
			Throw(SocketException(std::string("Error getting socket addr - ").append(strerror(errno))));
		}

		this->peerAddress.setIP(ntohl(client_addr.sin_addr.s_addr));
		this->peerAddress.setPort(ntohs(client_addr.sin_port));
	}

	int TCPSocket::getSocketFD() {
		return (this->socketFD);
	}

	void TCPSocket::resolveLocalAddr() {
		struct sockaddr_in local_addr;
#ifdef _WIN32
		int size = sizeof(local_addr);
#else
		socklen_t size = sizeof(local_addr);
#endif

		if (::getsockname(this->socketFD, (struct sockaddr *) &local_addr, &size) == -1) {
			Throw(SocketException(std::string("Error getting socket addr - ").append(strerror(errno))));
		}

		this->ipAddress.setPort(ntohs(local_addr.sin_port));
	}
}
