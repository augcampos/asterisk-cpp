/*
 * IPAddress.cpp
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#include "asteriskcpp/utils/LogHandler.h"
#include "asteriskcpp/net/IPAddress.h"

#define inaddrr(x) (*(struct in_addr *) &ifr->x[sizeof sa.sin_port])
#define IFRSIZE   ((int)(size * sizeof (struct ifreq)))

const std::string localhost = "127.0.0.1";

namespace asteriskcpp {

	boost::mutex IPAddress::mut;

	IPAddress::IPAddress() {
		this->host = localhost;
		this->ip = 0;
		this->port = 0;
		this->getLocalIP();
		this->resolveAddr();
	}

	IPAddress::IPAddress(unsigned short port) {
		this->host = localhost;
		this->ip = 0;
		this->port = port;
		this->getLocalIP();
		this->resolveAddr();
	}

	IPAddress::IPAddress(int ip, unsigned short port) {
		this->ip = ip;
		this->port = port;
		this->toStringAddr();
	}

	IPAddress::IPAddress(const std::string& host, unsigned short port) {
		this->host = host;
		this->port = port;
		this->resolveAddr();
	}

	IPAddress::IPAddress(const IPAddress& ipAddress) {
		this->host = ipAddress.host;
		this->ip = ipAddress.ip;
		this->port = ipAddress.port;
	}

	IPAddress::~IPAddress() {

	}

	void IPAddress::setHost(const std::string& host) {
		this->host = host;
		this->resolveAddr();
	}

	void IPAddress::setIP(int ip) {
		this->ip = ip;
		this->toStringAddr();
	}

	void IPAddress::setPort(unsigned short port) {
		this->port = port;
	}

	std::string IPAddress::getHost() const {
		return (this->host);
	}

	int IPAddress::getIP() const {
		return (this->ip);
	}

	unsigned short IPAddress::getPort() const {
		return (this->port);
	}

	void IPAddress::resolveAddr() {
		boost::mutex::scoped_lock lock(mut);
		in_addr sin_addr;

		char* host = (char*) this->host.c_str();
		struct hostent* h;

#ifdef WIN32
		assert( strlen(host) >= 1);
		if (isdigit(host[0])) {
			// assume it is a ip address
			unsigned long a = inet_addr(host);
			ip = ntohl(a);
		} else {
			// assume it is a host name
			h = gethostbyname(host);

			if (!h) {

				std::cerr << "IPAddress error was " << host << " : " << strerror(errno) << std::endl;
				assert( errno != WSANOTINITIALISED);

				ip = ntohl(0x7F000001L);
			} else {
				sin_addr = *(struct in_addr*) h->h_addr;
				ip = ntohl(sin_addr.s_addr);
			}
		}
#else
		h = gethostbyname(host);
		if (!h) {
			std::cerr << "IPAddress error was " << host << " : " << strerror(errno) << std::endl;
			ip = ntohl(0x7F000001L);
		} else {
			sin_addr = *(struct in_addr*) h->h_addr;
			ip = ntohl(sin_addr.s_addr);
		}
#endif
	}

	void IPAddress::toStringAddr() {
		std::ostringstream strm;

		strm << ((int) (ip >> 24) & 0xFF) << ".";
		strm << ((int) (ip >> 16) & 0xFF) << ".";
		strm << ((int) (ip >> 8) & 0xFF) << ".";
		strm << ((int) (ip >> 0) & 0xFF);

		this->host = strm.str();
	}

	void IPAddress::getLocalIP() {
#ifdef WIN32
		char ac[128];
		if (gethostname(ac, sizeof(ac)) == SOCKET_ERROR)
		{
			std::cerr << "Error " << WSAGetLastError() << " when getting local host name." << std::endl;
			return;
		}

		struct hostent *phe = gethostbyname(ac);
		if (phe == 0) {
			std::cerr << "Yow! Bad host lookup." << std::endl;
			return;
		}

		if (phe->h_addr_list[0]) {
			struct in_addr addr;
			memcpy(&addr, phe->h_addr_list[0], sizeof(struct in_addr));
			host = inet_ntoa(addr);
		}
#else
		std::string host;
		int sockfd, size = 1;
		struct ifreq* ifr = NULL;
		struct ifconf ifc;
		struct sockaddr_in sa;

		if (0 > (sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_IP))) {
			std::cerr << "IPAddress error was " << this->host << " : " << strerror(errno) << std::endl;
			return;
		}

		ifc.ifc_len = IFRSIZE;
		ifc.ifc_req = NULL;

		do {
			++size;
			/* realloc buffer size until no overflow occurs  */
			if (NULL == (ifc.ifc_req = (ifreq*) realloc(ifc.ifc_req, IFRSIZE))) {
				std::cerr << "IPAddress error was Out of memory." << std::endl;
				return;
			}

			ifc.ifc_len = IFRSIZE;

			if (ioctl(sockfd, SIOCGIFCONF, &ifc)) {
				std::cerr << "IPAddress error was ioctl SIOCFIFCONF." << std::endl;
				return;
			}
		} while (IFRSIZE <= ifc.ifc_len);

		ifr = ifc.ifc_req;
		for (; (char *) ifr < (char *) ifc.ifc_req + ifc.ifc_len; ++ifr) {

			if (ifr->ifr_addr.sa_data == (ifr + 1)->ifr_addr.sa_data) {
				continue; /* duplicate, skip it */
			}

			if (ioctl(sockfd, SIOCGIFFLAGS, ifr)) {
				continue; /* failed to get flags, skip it */
			}

			host = inet_ntoa(inaddrr(ifr_addr.sa_data));

			if (host != "127.0.0.1")
				this->host = host;
		}

		if (ifc.ifc_req)
			free(ifc.ifc_req);

		close(sockfd);
#endif
	}

}
