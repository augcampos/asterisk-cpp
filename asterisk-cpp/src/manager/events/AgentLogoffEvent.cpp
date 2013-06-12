/*
 * AgentLogoffEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentLogoffEvent.h"

namespace asteriskcpp {

    AgentLogoffEvent::AgentLogoffEvent(const std::string & values) :
    ManagerEvent(values) {
    }

    AgentLogoffEvent::~AgentLogoffEvent() {
    }

    const std::string& AgentLogoffEvent::getAgent() const {
        return (getProperty("Agent"));
    }

    const std::string& AgentLogoffEvent::getLoginTime() const {
        return (getProperty("Logintime"));
    }

} //NS

