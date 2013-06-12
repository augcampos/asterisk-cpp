/************************************
 * Package: RGcpp					*
 * Authors: Rui Eduardo Gouveia Gil	*
 * Date: 2010						*
 ************************************/
#include "asteriskcpp/net/SSLSocket.h"

namespace asteriskcpp {

    SSLSocket::SSLSocket(SSLContext* sslContext, const int socketFD) :
    TCPSocket(socketFD) {
        boost::mutex::scoped_lock lock(SSLContext::mut);

        this->sslContext = sslContext;

        ERR_clear_error();
        this->ssl = SSL_new(sslContext->getContext());

        SSL_set_fd(ssl, socketFD);

        ERR_clear_error();
        if (SSL_accept(ssl) < 1) {
            if (ssl) {
                SSL_shutdown(ssl);
                SSL_free(ssl);
            }
            this->close();
            Throw(SocketException(std::string("Unable to set ssl protocol - ") + ERR_error_string(SSL_get_verify_result(ssl), NULL)));
        }

        this->certified = (SSL_get_verify_result(ssl) == X509_V_OK && SSL_get_peer_certificate(ssl) != NULL);
    }

    SSLSocket::SSLSocket(SSLContext* sslContext, const IPAddress& ipAddress) :
    TCPSocket(ipAddress) {
        boost::mutex::scoped_lock lock(SSLContext::mut);

        this->sslContext = sslContext;

        ERR_clear_error();
        this->ssl = SSL_new(sslContext->getContext());

        SSL_set_fd(ssl, socketFD);

        ERR_clear_error();
        if (SSL_connect(ssl) < 1) {
            if (ssl) {
                SSL_shutdown(ssl);
                SSL_free(ssl);
            }
            this->close();
            Throw(SocketException(std::string("Unable to set ssl protocol - ") + ERR_error_string(SSL_get_verify_result(ssl), NULL)));
        }

        this->certified = false;
    }

    SSLSocket::~SSLSocket() {
        boost::mutex::scoped_lock lockRead(mutRead);
        boost::mutex::scoped_lock lockWrite(mutWrite);

        if (ssl) {
            SSL_shutdown(ssl);
            SSL_free(ssl);
        }
    }

    int SSLSocket::readEncryptedData(char* buffer, const unsigned int length) {
        boost::mutex::scoped_lock lock(mutRead);

        if (!SSL_pending((SSL *) ssl)) {
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
                Throw(SocketException(std::string("Error reading from ssl socket - Timeout exception")));
            } else if (value == -1) {
                Throw(SocketException(std::string("Error reading from ssl socket - ") + strerror(errno)));
            }

            if (this->releaseForced)
                return (0);
        }

        int readSize = SSL_read((SSL *) ssl, buffer, length);

        if (readSize < 1) {
            Throw(SocketException("Error reading from ssl socket"));
        }

        return (readSize);
    }

    void SSLSocket::writeEncryptedData(const char* buffer, const unsigned int length) {
        if (!length)
            return;

        boost::mutex::scoped_lock lock(mutWrite);

        int writeSize = SSL_write((SSL *) ssl, buffer, length);

        if (writeSize < 1) {
            Throw(SocketException("Error while writing to ssl socket"));
        }

#ifndef _WIN32
        fsync(socketFD);
#endif
    }

    void SSLSocket::setTimeout(const unsigned long timeout) {
        TCPSocket::setTimeout(timeout);
    }

    unsigned long SSLSocket::getTimeout() {
        return (TCPSocket::getTimeout());
    }

    void SSLSocket::release() {
        TCPSocket::release();
    }

    bool SSLSocket::check4readData(unsigned long timeout) {
        boost::mutex::scoped_lock lock(mutRead);

        if (SSL_pending((SSL *) ssl))
            return (true);

        struct timeval time;
        fd_set fdList;

        time.tv_usec = (timeout % 1000) * 1000;
        time.tv_sec = timeout / 1000;

        FD_ZERO(&fdList);
        FD_SET(socketFD, &fdList);

        if (select(socketFD + 1, &fdList, NULL, NULL, &time) <= 0)
            return (false);
        else
            return (true);
    }

    IPAddress SSLSocket::getLocalAddress() {
        return (TCPSocket::getLocalAddress());
    }

    IPAddress SSLSocket::getPeerAddress() {
        return (TCPSocket::getPeerAddress());
    }

    bool SSLSocket::isCertifiedConnection() {
        return (this->certified);
    }

}
