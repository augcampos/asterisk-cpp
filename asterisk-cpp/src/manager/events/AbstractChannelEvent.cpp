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

	const std::string& AbstractChannelEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	const std::string& AbstractChannelEvent::getCallerId() const {
		return (getProperty("CallerId"));
	}

	const std::string& AbstractChannelEvent::getCallerIdNum() const {
		return (getProperty("CallerIdNum"));
	}

	const std::string& AbstractChannelEvent::getCallerIdName() const {
		return (getProperty("CallerIdName"));
	}
}
