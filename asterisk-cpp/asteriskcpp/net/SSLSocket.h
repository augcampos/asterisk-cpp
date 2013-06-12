/************************************
 * Package: RGcpp					*
 * Authors: Rui Eduardo Gouveia Gil	*
 * Date: 2010						*
 ************************************/
#ifndef __RGCPP_SSLSOCKET_H__
#define __RGCPP_SSLSOCKET_H__

#ifdef _WIN32
#include <winsock2.h>
#endif
#include <openssl/ssl.h>
#include <openssl/err.h>

#include "SSLContext.h"
#include "TCPSocket.h"
#include "../exceptions/IOException.h"

namespace asteriskcpp {

    class SSLSocket : private TCPSocket {
    private:
        SSL *ssl;
        bool certified;
        SSLContext* sslContext;

    public:
        SSLSocket(SSLContext* sslContext, const int socketFD);
        SSLSocket(SSLContext* sslContext, const IPAddress& ipAddress);

        ~SSLSocket();

        int readEncryptedData(char* buffer, const unsigned int size);
        void writeEncryptedData(const char* buffer, const unsigned int size);

        void setTimeout(const unsigned long timeout);
        unsigned long getTimeout();

        void release();

        bool check4readData(const unsigned long timeout);

        IPAddress getLocalAddress();
        IPAddress getPeerAddress();

        bool isCertifiedConnection();
    };

}

#endif
