/*
 * IOException.h
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#ifndef IOEXCEPTION_H_
#define IOEXCEPTION_H_

#include "Exception.h"

namespace asteriskcpp {

    class IOException : public Exception {
    public:
        IOException(const std::string& message);

    protected:
        IOException(const std::string& name, const std::string& message);
    };

    class CharacterCodingException : public IOException {
    public:
        CharacterCodingException(const std::string& message);
    };

    class EOFException : public IOException {
    public:
        EOFException(const std::string& message);
    };

    class FileLockInterruptionException : public IOException {
    public:
        FileLockInterruptionException(const std::string& message);
    };

    class FileNotFoundException : public IOException {
    public:
        FileNotFoundException(const std::string& message);
    };

    class DirectoryNotFoundException : public IOException {
    public:
        DirectoryNotFoundException(const std::string& message);
    };

    class MalformedURLException : public IOException {
    public:
        MalformedURLException(const std::string& message);
    };

    class ProtocolException : public IOException {
    public:
        ProtocolException(const std::string& message);
    };

    class SocketException : public IOException {
    public:
        SocketException(const std::string& message);
    };

    class SSLException : public IOException {
    public:
        SSLException(const std::string& message);
    };

    class UnknownHostException : public IOException {
    public:
        UnknownHostException(const std::string& message);
    };

    class UnknownServiceException : public IOException {
    public:
        UnknownServiceException(const std::string& message);
    };

    class UnsupportedEncodingException : public IOException {
    public:
        UnsupportedEncodingException(const std::string& message);
    };

    class ZipException : public IOException {
    public:
        ZipException(const std::string& message);
    };

}

#endif /* IOEXCEPTION_H_ */
