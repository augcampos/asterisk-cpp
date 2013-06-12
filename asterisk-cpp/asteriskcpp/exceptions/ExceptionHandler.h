/*
 * ExceptionHandler.h
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#ifndef EXCEPTIONHANDLER_H_
#define EXCEPTIONHANDLER_H_

#include <string>
#include <sstream>
#include <iostream>

#ifdef _WIN32
#else
#include <signal.h>
#include <stdlib.h>
#include <cxxabi.h>
#include <execinfo.h>
#endif

#define MAX_STACKTRACE_NAME 256
#define MAX_STACKTRACE_FRAMES 128

namespace asteriskcpp {

    class ExceptionHandler {
    private:
        static ExceptionHandler* exceptionHandlerPtr;

    public:
        ~ExceptionHandler();

        static void createExceptionHandler();
        static std::string getStackTraceString();
        static void destroyExceptionHandler();

    private:
        ExceptionHandler();

        static void signalHandler(int signal);
    };

}

#endif /* EXCEPTIONHANDLER_H_ */
