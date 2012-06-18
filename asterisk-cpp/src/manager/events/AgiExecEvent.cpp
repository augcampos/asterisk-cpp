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

	const std::string& AgiExecEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	const std::string& AgiExecEvent::getSubEvent() const {
		return (getProperty("SubEvent"));
	}

	const std::string& AgiExecEvent::getCommandId() const {
		return (getProperty("CommandId"));
	}

	const std::string& AgiExecEvent::getCommand() const {
		return (getProperty("Command"));
	}

	const std::string& AgiExecEvent::getResultCode() const {
		return (getProperty("ResultCode"));
	}

	const std::string& AgiExecEvent::getResult() const {
		return (getProperty("Result"));
	}

} //NS

