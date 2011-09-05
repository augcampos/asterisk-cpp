/*
 * AgiExecEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgiExecEvent.h"

namespace asteriskcpp {

AgiExecEvent::AgiExecEvent(const std::string & values) :
		ManagerEvent(values) {
}
AgiExecEvent::~AgiExecEvent() {
}

std::string AgiExecEvent::getChannel() const {
	return (getProperty("Channel"));
}

std::string AgiExecEvent::getSubEvent() const {
	return (getProperty("SubEvent"));
}

std::string AgiExecEvent::getCommandId() const {
	return (getProperty("CommandId"));
}

std::string AgiExecEvent::getCommand() const {
	return (getProperty("Command"));
}

std::string AgiExecEvent::getResultCode() const {
	return (getProperty("ResultCode"));
}

std::string AgiExecEvent::getResult() const {
	return (getProperty("Result"));
}

} //NS

