/*
 * AgentLoginEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentLoginEvent.h"

namespace asteriskcpp {

    AgentLoginEvent::AgentLoginEvent(const std::string & values) :
    ManagerEvent(values) {
    }

    AgentLoginEvent::~AgentLoginEvent() {
    }

    const std::string& AgentLoginEvent::getAgent() const {
        return (getProperty("Agent"));
    }

    const std::string& AgentLoginEvent::getChannel() const {
        return (getProperty("Channel"));
    }

} //NS

