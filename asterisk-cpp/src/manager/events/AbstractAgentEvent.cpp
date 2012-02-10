/*
 * AbstractAgentEvent.cpp
 *
 *  Created on: Aug 26, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractAgentEvent.h"

namespace asteriskcpp {

	AbstractAgentEvent::AbstractAgentEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	AbstractAgentEvent::~AbstractAgentEvent() {
	}

	std::string AbstractAgentEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	std::string AbstractAgentEvent::getQueue() const {
		return (getProperty("Queue"));
	}
	std::string AbstractAgentEvent::getMember() const {
		return (getProperty("Member"));
	}
	std::string AbstractAgentEvent::getMemberName() const {
		return (getProperty("MemberName"));
	}

	std::map<std::string, std::string> AbstractAgentEvent::getVariables() const {
		//TODO implement
		std::map<std::string, std::string> rt;
		return (rt);
	}

}
