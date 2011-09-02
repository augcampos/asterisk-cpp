/*
 * AbstractChannelEvent.cpp
 *
 *  Created on: Aug 26, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractChannelEvent.h"

namespace asteriskcpp {

AbstractChannelEvent::AbstractChannelEvent(const std::string& values) :
		ManagerEvent(values) {
}
AbstractChannelEvent::~AbstractChannelEvent() {

}

std::string AbstractChannelEvent::getChannel() const {
	return (getProperty("Channel"));
}

std::string AbstractChannelEvent::getCallerId() const {
	return (getProperty("CallerId"));
}

std::string AbstractChannelEvent::getCallerIdNum() const {
	return (getProperty("CallerIdNum"));
}

std::string AbstractChannelEvent::getCallerIdName() const {
	return (getProperty("CallerIdName"));
}
}
