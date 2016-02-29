/*
 * LogHandler.h
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#ifndef LOGHANDLER_H_
#define LOGHANDLER_H_

#include <string>
#include <sstream>
#include <iostream>
#include <log4cplus/logger.h>

#include "asteriskcpp/structs/Singleton.h"

enum LogLevel {
    LL_TRACE, LL_DEBUG, LL_INFO, LL_WARN, LL_ERROR, LL_FATAL
};

#if !defined(DISABLE_LOG_HANDLER) && !defined(DISABLE_LOG_TOTAL)

#define LOG_TRACE_DATA(stream) {std::stringstream sstream; sstream << stream; LOG_TRACE_STR(sstream.str());}
#define LOG_DEBUG_DATA(stream) {std::stringstream sstream; sstream << stream; LOG_DEBUG_STR(sstream.str());}
#define LOG_INFO_DATA(stream) {std::stringstream sstream; sstream << stream; LOG_INFO_STR(sstream.str());}
#define LOG_WARN_DATA(stream) {std::stringstream sstream; sstream << stream; LOG_WARN_STR(sstream.str());}
#define LOG_ERROR_DATA(stream) {std::stringstream sstream; sstream << stream; LOG_ERROR_STR(sstream.str());}
#define LOG_FATA_DATA(stream) {std::stringstream sstream; sstream << stream; LOG_FATAL_STR(sstream.str());}

#define LOG_TRACE_STR(line) {LogHandler::getInstance()->log(std::string(__PRETTY_FUNCTION__)+std::string(": ")+line,LL_TRACE);}
#define LOG_DEBUG_STR(line) {LogHandler::getInstance()->log(std::string(__PRETTY_FUNCTION__)+std::string(": ")+line,LL_DEBUG);}
#define LOG_INFO_STR(line) {LogHandler::getInstance()->log(std::string(__PRETTY_FUNCTION__)+std::string(": ")+line,LL_INFO);}
#define LOG_WARN_STR(line) {LogHandler::getInstance()->log(std::string(__PRETTY_FUNCTION__)+std::string(": ")+line,LL_WARN);}
#define LOG_ERROR_STR(line) {LogHandler::getInstance()->log(std::string(__PRETTY_FUNCTION__)+std::string(": ")+line,LL_ERROR);}
#define LOG_FATAL_STR(line) {LogHandler::getInstance()->log(std::string(__PRETTY_FUNCTION__)+std::string(": ")+line,LL_FATAL);}

#elif defined(DISABLE_LOG_HANDLER) &&  !defined(DISABLE_LOG_TOTAL)

#define LOG_TRACE_DATA(stream) {std::cout << stream << std::endl;}
#define LOG_DEBUG_DATA(stream) {std::cout << stream << std::endl;}
#define LOG_INFO_DATA(stream) {std::cout << stream << std::endl;}
#define LOG_WARN_DATA(stream) {std::cout << stream << std::endl;}
#define LOG_ERROR_DATA(stream) {std::cerr << stream << std::endl;}
#define LOG_FATA_DATA(stream) {std::cerr << stream << std::endl;}

#define LOG_TRACE_STR(line) {std::cout << line << std::endl;}
#define LOG_DEBUG_STR(line) {std::cout << line << std::endl;}
#define LOG_INFO_STR(line) {std::cout << line << std::endl;}
#define LOG_WARN_STR(line) {std::cout << line << std::endl;}
#define LOG_ERROR_STR(line) {std::cerr << line << std::endl;}
#define LOG_FATAL_STR(line) {std::cerr << line << std::endl;}

#else

#define LOG_TRACE(stream)
#define LOG_DEBUG(stream)
#define LOG_INFO(stream)
#define LOG_WARN(stream)
#define LOG_ERROR(stream)
#define LOG_FATA(stream)

#define LOG_TRACE_STR(line)
#define LOG_DEBUG_STR(line)
#define LOG_INFO_STR(line)
#define LOG_WARN_STR(line)
#define LOG_ERROR_STR(line)
#define LOG_FATAL_STR(line)

#endif

namespace asteriskcpp {

    class LogHandler : public Singleton<LogHandler> {
        friend class Singleton<LogHandler>;

    private:
        std::string confFile;

    public:
        ~LogHandler();

        void setLevel(const LogLevel& level);

        void log(const std::string& line, LogLevel level);

        void reopenFile();

    private:
        LogHandler();
        LogHandler(const std::string& confFile);
        void setup();
    };

}

#endif /* LOGHANDLER_H_ */
