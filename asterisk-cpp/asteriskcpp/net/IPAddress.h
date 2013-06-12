/*
 * IPAddress.h
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#ifndef IPADDRESS_H_
#define IPADDRESS_H_

#include <string>
#include <sstream>
#include <errno.h>
#include <assert.h>
#include <string.h>
#include <iostream>
#include <boost/thread.hpp>
#ifdef _WIN32
#include <winsock2.h>
#else
#include <netdb.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#endif

namespace asteriskcpp {

    class IPAddress {
    private:
        int ip;
        std::string host;
        unsigned short port;
        static boost::mutex mut;

    public:
        IPAddress();
        IPAddress(unsigned short port);
        IPAddress(int ip, unsigned short port);
        IPAddress(const std::string& host, unsigned short port);
        IPAddress(const IPAddress& ipAddress);
        ~IPAddress();

        void setHost(const std::string& host);
        void setIP(int ip);
        void setPort(unsigned short port);

        std::string getHost() const;
        int getIP() const;
        unsigned short getPort() const;

        operator const bool() {
            return (ip != 0);
        }

        //not a full comparison (args ignored)

        friend inline bool operator !=(const IPAddress& a, const IPAddress& b) {
            return (a.ip != b.ip || a.port != b.port);
        }

        friend inline bool operator ==(const IPAddress& a, const IPAddress& b) {
            return (a.ip == b.ip && a.port == b.port);
        }

        friend std::ostream& operator<<(std::ostream& os, IPAddress& o) {
            os << o.host << ":" << o.port;
            return (os);
        }

        friend std::ostream& operator<<(std::ostream& os, const IPAddress& o) {
            os << o.host << ":" << o.port;
            return (os);
        }

    private:
        void resolveAddr();
        void toStringAddr();
        void getLocalIP();
    };

#ifdef _WIN32

    class InitWSA {
    public:
        InitWSA();
        ~InitWSA();
    };
#endif

}

#endif /* IPADDRESS_H_ */
