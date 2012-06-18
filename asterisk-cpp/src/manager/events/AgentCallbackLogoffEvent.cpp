/*
 * AgentCallbackLogoffEvent.cpp
 *
 *  Created on: Sep 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentCallbackLogoffEvent.h"

namespace asteriskcpp {

	AgentCallbackLogoffEvent::AgentCallbackLogoffEvent(const std::string& values) :
			ManagerEvent(values) {
	}
	AgentCallbackLogoffEvent::~AgentCallbackLogoffEvent() {
	}

	const std::string& AgentCallbackLogoffEvent::getAgent() const {
		return (getProperty("Agent"));
	}

	const std::string& AgentCallbackLogoffEvent::getLoginChan() const {
		return (getProperty("Loginchan"));
	}

	const std::string& AgentCallbackLogoffEvent::getLoginTime() const {
		return (getProperty("Logintime"));
	}

	const std::string& AgentCallbackLogoffEvent::getReason() const {
		return (getProperty("Reason"));
	}
}
