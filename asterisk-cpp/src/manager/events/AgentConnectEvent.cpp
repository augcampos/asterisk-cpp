/*
 * AgentConnectEvent.cpp
 *
 *  Created on: Sep 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentConnectEvent.h"

namespace asteriskcpp {

AgentConnectEvent::AgentConnectEvent(const std::string & values) :
		AbstractAgentEvent(values) {
}
AgentConnectEvent::~AgentConnectEvent() {
}

std::string AgentConnectEvent::getHoldTime() const {
	return (getProperty("HoldTime"));
}

std::string AgentConnectEvent::getBridgedChannel() const {
	return (getProperty("BridgedChannel"));
}

std::string AgentConnectEvent::getRingtime() const {
	return (getProperty("Ringtime"));
}

}
