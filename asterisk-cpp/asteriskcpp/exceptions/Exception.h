/*
 * Exception.h
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <string>
#include <exception>

namespace asteriskcpp {

    class Exception : std::exception {
    private:
        std::string name;
        std::string message;
        std::string stackTrace;
        std::string information;

    public:
        Exception(const std::string& message);
        virtual ~Exception() throw ();

        void printStackTrace();
        std::string getMessage();
        std::string getInformation();
        std::string getStackTrace();
        void setExceptionInformation(const char* file, const char* function, const int line);

    protected:
        Exception(const std::string& name, const std::string& message);
    };

#if !defined(__PRETTY_FUNCTION__)
#define __PRETTY_FUNCTION__ __FUNCTION__
#endif

#if !defined(DISABLE_EXCEPTION_PRINT)
#define Throw(x) {Exception exc = x; exc.setExceptionInformation(__FILE__,__PRETTY_FUNCTION__,__LINE__); exc.printStackTrace(); throw exc;}
#else
#define Throw(x) {Exception exc = x; exc.setExceptionInformation(__FILE__,__PRETTY_FUNCTION__,__LINE__); throw exc;}
#endif

}

#endif /* EXCEPTION_H_ */
