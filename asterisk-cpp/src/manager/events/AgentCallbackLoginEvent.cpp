/*
 * AgentCallbackLoginEvent.cpp
 *
 *  Created on: Sep 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentCallbackLoginEvent.h"

namespace asteriskcpp {

    AgentCallbackLoginEvent::AgentCallbackLoginEvent(const std::string& values) :
    ManagerEvent(values) {
    }

    AgentCallbackLoginEvent::~AgentCallbackLoginEvent() {
    }

    const std::string& AgentCallbackLoginEvent::getAgent() const {
        return (getProperty("Agent"));
    }

    const std::string& AgentCallbackLoginEvent::getLoginChan() const {
        return (getProperty("Loginchan"));
    }

}
