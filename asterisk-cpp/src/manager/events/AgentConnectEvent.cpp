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

    const std::string& AgentConnectEvent::getHoldTime() const {
        return (getProperty("HoldTime"));
    }

    const std::string& AgentConnectEvent::getBridgedChannel() const {
        return (getProperty("BridgedChannel"));
    }

    const std::string& AgentConnectEvent::getRingtime() const {
        return (getProperty("Ringtime"));
    }

}
