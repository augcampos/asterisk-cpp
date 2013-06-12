/************************************
 * Package: RGcpp					*
 * Authors: Rui Eduardo Gouveia Gil	*
 * Date: 2010						*
 ************************************/
#ifndef __RGCPP_SSLCONTEXT_H__
#define __RGCPP_SSLCONTEXT_H__

#ifdef _WIN32
#include <winsock2.h>
#endif
#include <vector>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <boost/thread.hpp>

#include "../exceptions/RuntimeException.h"

#define SSL_VERIFY_DEPTH 5

namespace asteriskcpp {

    class SSLContext {
    private:
        SSL_CTX* ctx;

        static bool sslInit;
        static std::string password2check;
        static std::vector<boost::mutex*> mutexVector;

    public:
        static boost::mutex mut;

    public:
        SSLContext(const std::string& certFileList);
        SSLContext(const std::string& keyFile, const std::string& certFile, const std::string& pass);
        SSLContext(const std::string& keyFile, const std::string& certFile, const std::string& certFileList, const std::string& pass,
                bool requireCertification = false);
        ~SSLContext();

        SSL_CTX* getContext();

    private:
        void createCTX();
        void loadKeys(const std::string& keyFile, const std::string& certFile, const std::string& pass);
        void loadCerts(const std::string& certFileList, bool requireCertification);

        static int passwordCheck(char *buffer, int num, int rwflag, void *userdata);
        static void lock(int mode, int n, const char *file, int line);
        static unsigned long getID();
    };

}

#endif
