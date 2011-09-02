/*
 * AgentCompleteEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTCOMPLETEEVENT_H_
#define AGENTCOMPLETEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"
#include "AbstractAgentEvent.h"

namespace asteriskcpp {

/**
 * An AgentCompleteEvent is triggered when at the end of a call if the caller
 * was connected to an agent.<p>
 * It is implemented in <code>apps/app_queue.c</code>.<p>
 * Available since Asterisk 1.2
 *
 * @since 0.2
 */
class AgentCompleteEvent: public AbstractAgentEvent {
public:
	inline static std::string getEventName() {
		return ("AgentCompleteEvent");
	}
	AgentCompleteEvent(const std::string & values) :
			AbstractAgentEvent(values) {
	}
	virtual ~AgentCompleteEvent() {
	}

	/**
	 * Returns the amount of time the caller was on hold.
	 *
	 * @return the amount of time the caller was on hold in seconds.
	 */
	std::string getHoldTime() const {
		return (getProperty("HoldTime"));
	}

	/**
	 * Returns the amount of time the caller talked to the agent.
	 *
	 * @return the amount of time the caller talked to the agent in seconds.
	 */
	std::string getTalkTime() const {
		return (getProperty("TalkTime"));
	}

	/**
	 * Returns if the agent or the caller terminated the call.
	 *
	 * @return "agent" if the agent terminated the call, "caller" if the caller
	 *         terminated the call.
	 */
	std::string getReason() const {
		return (getProperty("Reason"));
	}

};

}

#endif /* AGENTCOMPLETEEVENT_H_ */
