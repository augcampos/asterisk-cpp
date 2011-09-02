/*
 * IOException.cpp
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#include "asteriskcpp/exceptions/IOException.h"

namespace asteriskcpp {

IOException::IOException(const std::string& message) :
		Exception("IOException", message) {

}

IOException::IOException(const std::string& name, const std::string& message) :
		Exception(name, message) {

}

CharacterCodingException::CharacterCodingException(const std::string& message) :
		IOException("CharacterCodingException", message) {

}

EOFException::EOFException(const std::string& message) :
		IOException("EOFException", message) {

}

FileLockInterruptionException::FileLockInterruptionException(const std::string& message) :
		IOException("FileLockInterruptionException", message) {

}

FileNotFoundException::FileNotFoundException(const std::string& message) :
		IOException("FileNotFoundException", message) {

}

DirectoryNotFoundException::DirectoryNotFoundException(const std::string& message) :
		IOException("DirectoryNotFoundException", message) {

}

MalformedURLException::MalformedURLException(const std::string& message) :
		IOException("MalformedURLException", message) {

}

ProtocolException::ProtocolException(const std::string& message) :
		IOException("ProtocolException", message) {

}

SocketException::SocketException(const std::string& message) :
		IOException("SocketException", message) {

}

SSLException::SSLException(const std::string& message) :
		IOException("SSLException", message) {

}

UnknownHostException::UnknownHostException(const std::string& message) :
		IOException("UnknownHostException", message) {

}

UnknownServiceException::UnknownServiceException(const std::string& message) :
		IOException("UnknownServiceException", message) {

}

UnsupportedEncodingException::UnsupportedEncodingException(const std::string& message) :
		IOException("UnsupportedEncodingException", message) {

}

ZipException::ZipException(const std::string& message) :
		IOException("ZipException", message) {

}

}
