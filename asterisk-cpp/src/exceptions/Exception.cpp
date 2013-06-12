/*
 * Exception.cpp
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#include "asteriskcpp/exceptions/ExceptionHandler.h"
#include "asteriskcpp/exceptions/Exception.h"
#include "asteriskcpp//utils/LogHandler.h"
namespace asteriskcpp {

    Exception::Exception(const std::string& message) {
        this->name = "Exception";
        this->message = message;
        this->stackTrace = ExceptionHandler::getStackTraceString();
    }

    Exception::~Exception() throw () {

    }

    void Exception::printStackTrace() {
        const std::string& stackTrace = this->getStackTrace();
        LOG_ERROR_STR(stackTrace);
    }

    std::string Exception::getStackTrace() {
        std::string result;
        std::stringstream stream;

        stream << this->stackTrace;
        stream << this->information << std::endl;
        stream << this->name << ": " << this->message;

        result = stream.str();
        return (result);
    }

    void Exception::setExceptionInformation(const char* file, const char* function, const int line) {
        std::stringstream stream;

        stream << file << ": line " << line << " on " << function;

        this->information = stream.str();
    }

    std::string Exception::getMessage() {
        std::string result;
        std::stringstream stream;

        stream << this->name << ": " << this->message;

        result = stream.str();
        return (result);
    }

    std::string Exception::getInformation() {
        std::string result;
        std::stringstream stream;

        stream << this->information << std::endl;
        stream << this->name << ": " << this->message;

        result = stream.str();
        return (result);
    }

    Exception::Exception(const std::string& name, const std::string& message) {
        this->name = name;
        this->message = message;
        this->stackTrace = ExceptionHandler::getStackTraceString();
    }

}
