/*
 * ExceptionHandler.cpp
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#include "asteriskcpp/exceptions/ExceptionHandler.h"
#include "asteriskcpp/utils/LogHandler.h"

namespace asteriskcpp {

    ExceptionHandler* ExceptionHandler::exceptionHandlerPtr = NULL;

    ExceptionHandler::~ExceptionHandler() {
    }

    void ExceptionHandler::createExceptionHandler() {
        if (!ExceptionHandler::exceptionHandlerPtr)
            ExceptionHandler::exceptionHandlerPtr = new ExceptionHandler();
    }

    std::string ExceptionHandler::getStackTraceString() {
        if (!ExceptionHandler::exceptionHandlerPtr)
            ExceptionHandler::createExceptionHandler();

        std::stringstream stream;
#ifdef _WIN32
#else
        void* addrList[MAX_STACKTRACE_FRAMES + 1];
        int addrLen = backtrace(addrList, sizeof (addrList) / sizeof (void*));

        if (addrLen == 0) {
            stream << "Stack empty: Possibly corrupted..." << std::endl;
        } else {
            int status;
            char* endOffset;
            char* beginName;
            char* beginOffset;
            size_t funcNameSize = MAX_STACKTRACE_NAME;
            char* funcName = (char*) malloc(MAX_STACKTRACE_NAME);
            char** symbolList = backtrace_symbols(addrList, addrLen);

            for (int i = addrLen - 3; i > 1; i--) {
                beginName = NULL;
                beginOffset = NULL;
                endOffset = NULL;

                for (char *p = symbolList[i]; *p; ++p) {
                    if (*p == '(')
                        beginName = p;
                    else if (*p == '+')
                        beginOffset = p;
                    else if (*p == ')' && beginOffset) {
                        endOffset = p;
                        break;
                    }
                }

                if (beginName && beginOffset && endOffset && beginName < beginOffset) {
                    *beginName++ = '\0';
                    *beginOffset++ = '\0';
                    *endOffset = '\0';

                    char* newFuncName = abi::__cxa_demangle(beginName, funcName, &funcNameSize, &status);

                    if (status == 0) {
                        funcName = newFuncName;
                        stream << "[" << ((addrLen - i) - 3) << "] " << symbolList[i] << " : " << funcName << "+" << beginOffset << std::endl;
                    } else {
                        stream << "[" << ((addrLen - i) - 3) << "] " << symbolList[i] << " : " << beginName << "()+" << beginOffset << std::endl;
                    }
                } else {
                    stream << "[" << ((addrLen - i) - 3) << "] " << symbolList[i] << std::endl;
                }
            }

            free(funcName);
            free(symbolList);
        }
#endif
        std::string result = stream.str();
        return (result);
    }

    void ExceptionHandler::destroyExceptionHandler() {
        if (ExceptionHandler::exceptionHandlerPtr)
            delete ExceptionHandler::exceptionHandlerPtr;

        ExceptionHandler::exceptionHandlerPtr = NULL;
    }

    ExceptionHandler::ExceptionHandler() {
#ifdef _WIN32
#else
        struct sigaction newh, oldh;
        sigset_t sMask;
        sigemptyset(&sMask);

        newh.sa_mask = sMask;
        newh.sa_flags = SA_RESTART | SA_NOMASK;
        newh.sa_handler = &ExceptionHandler::signalHandler;

        if (sigaction(SIGSEGV, &newh, &oldh) < 0) {
            LOG_ERROR_STR("Failed to install signal handler for SIGSEGV");
            exit(0);
        }
#endif
    }

    void ExceptionHandler::signalHandler(int signal) {
#ifdef _WIN32
#else
        switch (signal) {
            case SIGSEGV:
            {
                LOG_ERROR_STR(ExceptionHandler::getStackTraceString());
                LOG_ERROR_STR("Segmentation fault");
                exit(0);
            }
                break;

            default:
            {
                LOG_ERROR_DATA("Expected: " << SIGSEGV << ", got: " << signal << ", returning");
            }
                break;
        }
#endif
    }

}
