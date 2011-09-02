/*
 * AgentLogoffEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTLOGOFFEVENT_H_
#define AGENTLOGOFFEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

class AgentLogoffEvent: public ManagerEvent {
public:
	inline static std::string getEventName() {
		return ("AgentLogoffEvent");
	}
	AgentLogoffEvent(const std::string & values) :
			ManagerEvent(values) {
	}
	virtual ~AgentLogoffEvent() {
	}

	/**
	 * Gets the name of the agent that logged off.
	 */
	std::string getAgent() const {
		return (getProperty("Agent"));
	}

	std::string getLoginTime() const {
		return (getProperty("Logintime"));
	}

};

}

#endif /* AGENTLOGOFFEVENT_H_ */
