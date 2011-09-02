/*
 * JoinEvent.cpp
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/JoinEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

JoinEvent::JoinEvent(const std::string & values) :
		QueueEvent(values) {
}

JoinEvent::~JoinEvent() {
}

std::string JoinEvent::getCallerId() const {
	return (getProperty("CallerId"));
}

std::string JoinEvent::getCallerIdNum() const {
	return (getProperty("CallerIdNum"));
}

std::string JoinEvent::getCallerIdName() const {
	return (getProperty("CallerIdName"));
}

int JoinEvent::getPosition() const {
	return (convertFromString<int>(getProperty("Position")));
}

} /* namespace asterisk_cpp */
