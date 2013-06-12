/*
 * AgentsEvent.cpp
 *
 *  Created on: Feb 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentsEvent.h"

namespace asteriskcpp {

    const std::string STATUS[] = {
        "AGENT_LOGGEDOFF", "AGENT_IDLE", "AGENT_ONCALL", "AGENT_UNKNOWN"
    };

    AgentsEvent::AgentsEvent(const std::string& values) :
    ResponseEvent(values) {
    }

    AgentsEvent::~AgentsEvent() {
    }

    const std::string& AgentsEvent::getAgent() const {
        return (getProperty("Agent"));
    }

    const std::string& AgentsEvent::getName() const {
        return (getProperty("Name"));
    }

    const std::string& AgentsEvent::getStatus() const {
        return (getProperty("Status"));
    }

    const std::string& AgentsEvent::getLoggedInChan() const {
        return (getProperty("LoggedInChan"));
    }

    long AgentsEvent::getLoggedInTime() const {
        return (getProperty<long>("LoggedInTime"));
    }

    const std::string& AgentsEvent::getTalkingTo() const {
        return (getProperty("TalkingTo"));
    }

    const std::string& AgentsEvent::getTalkingToChan() const {
        return (getProperty("TalkingToChan"));
    }

} /* namespace asteriskcpp */
