/*
 * LogHandler.cpp
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#include <log4cplus/configurator.h>
#include <log4cplus/logger.h>

#include "asteriskcpp/utils/LogHandler.h"

namespace asteriskcpp {

LogHandler::LogHandler() {
	log4cplus::BasicConfigurator::doConfigure();
	log4cplus::Logger::getRoot().setLogLevel(log4cplus::TRACE_LOG_LEVEL);
}

LogHandler::LogHandler(const std::string& confFile) :
		confFile(confFile) {
	if (confFile.empty()) {
		log4cplus::BasicConfigurator::doConfigure();
		log4cplus::Logger::getRoot().setLogLevel(log4cplus::TRACE_LOG_LEVEL);
	} else {
		log4cplus::PropertyConfigurator::doConfigure(confFile);
	}
}

LogHandler::~LogHandler() {

}

void LogHandler::setLevel(const LogLevel& level) {
	switch (level) {
	case LL_TRACE: {
		log4cplus::Logger::getRoot().setLogLevel(log4cplus::TRACE_LOG_LEVEL);
	}
		break;

	case LL_DEBUG: {
		log4cplus::Logger::getRoot().setLogLevel(log4cplus::DEBUG_LOG_LEVEL);
	}
		break;

	case LL_INFO: {
		log4cplus::Logger::getRoot().setLogLevel(log4cplus::INFO_LOG_LEVEL);
	}
		break;

	case LL_WARN: {
		log4cplus::Logger::getRoot().setLogLevel(log4cplus::WARN_LOG_LEVEL);
	}
		break;

	case LL_ERROR: {
		log4cplus::Logger::getRoot().setLogLevel(log4cplus::ERROR_LOG_LEVEL);
	}
		break;

	case LL_FATAL: {
		log4cplus::Logger::getRoot().setLogLevel(log4cplus::FATAL_LOG_LEVEL);
	}
		break;
	}
}

void LogHandler::log(const std::string& line, LogLevel level) {
	switch (level) {
	case LL_TRACE: {
		LOG4CPLUS_TRACE_STR(log4cplus::Logger::getRoot(), line);
	}
		break;

	case LL_DEBUG: {
		LOG4CPLUS_DEBUG_STR(log4cplus::Logger::getRoot(), line);
	}
		break;

	case LL_INFO: {
		LOG4CPLUS_INFO_STR(log4cplus::Logger::getRoot(), line);
	}
		break;

	case LL_WARN: {
		LOG4CPLUS_WARN_STR(log4cplus::Logger::getRoot(), line);
	}
		break;

	case LL_ERROR: {
		LOG4CPLUS_ERROR_STR(log4cplus::Logger::getRoot(), line);
	}
		break;

	case LL_FATAL: {
		LOG4CPLUS_FATAL_STR(log4cplus::Logger::getRoot(), line);
	}
		break;
	}
}

}
