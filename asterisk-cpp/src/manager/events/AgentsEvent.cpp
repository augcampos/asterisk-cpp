/*
 * AgentsEvent.cpp
 *
 *  Created on: Feb 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentsEvent.h"

namespace asteriskcpp {

	const std::string STATUS[] {
			"AGENT_LOGGEDOFF", "AGENT_IDLE", "AGENT_ONCALL", "AGENT_UNKNOWN"
	};

	AgentsEvent::AgentsEvent(const std::string& values) :
			ResponseEvent(values) {
	}

	AgentsEvent::~AgentsEvent() {
	}

    std::string AgentsEvent::getAgent() const
    {
    	return (getProperty("Agent"));
    }

    std::string AgentsEvent::getName() const
    {
    	return (getProperty("Name"));
    }

    std::string AgentsEvent::getStatus() const
    {
    	return (getProperty("Status"));
    }

    std::string AgentsEvent::getLoggedInChan() const
    {
    	return (getProperty("LoggedInChan"));
    }

    long AgentsEvent::getLoggedInTime() const
    {
    	return (getProperty<long>("LoggedInTime"));
    }

    std::string AgentsEvent::getTalkingTo() const
    {
    	return (getProperty("TalkingTo"));
    }

    std::string AgentsEvent::getTalkingToChan() const
    {
    	return (getProperty("TalkingToChan"));
    }

} /* namespace asteriskcpp */
