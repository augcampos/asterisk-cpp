/*
 * AgentCalledEvent.cpp
 *
 *  Created on: Sep 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentCalledEvent.h"

namespace asteriskcpp {

	AgentCalledEvent::AgentCalledEvent(const std::string & values) :
			ManagerEvent(values) {
	}
	AgentCalledEvent::~AgentCalledEvent() {
	}

	std::string AgentCalledEvent::getQueue() const {
		return (getProperty("Queue"));
	}

	std::string AgentCalledEvent::getAgentCalled() const {
		return (getProperty("AgentCalled"));
	}

	std::string AgentCalledEvent::getAgentName() const {
		return (getProperty("AgentName"));
	}

	std::string AgentCalledEvent::getChannelCalling() const {
		return (getProperty("ChannelCalling"));
	}

	std::string AgentCalledEvent::getDestinationChannel() const {
		return (getProperty("DestinationChannel"));
	}

	std::string AgentCalledEvent::getCallerIdNum() const {
		return (getProperty("CallerIdNum"));
	}

	std::string AgentCalledEvent::getCallerId() const {
		return (getProperty("CallerID"));

	}

	std::string AgentCalledEvent::getCallerIdName() const {
		return (getProperty("CallerIdName"));
	}

	std::string AgentCalledEvent::getContext() const {
		return (getProperty("Context"));
	}

	std::string AgentCalledEvent::getExtension() const {
		return (getProperty("Extension"));
	}

	std::string AgentCalledEvent::getPriority() const {
		return (getProperty("Priority"));
	}

	std::map<std::string, std::string> AgentCalledEvent::getVariables() const {
		//TODO implement
		std::map<std::string, std::string> rt;
		return (rt);
	}

}
