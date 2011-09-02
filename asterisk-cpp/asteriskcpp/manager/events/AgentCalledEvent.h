/*
 * AgentCalledEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTCALLEDEVENT_H_
#define AGENTCALLEDEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

/**
 * An AgentCalledEvent is triggered when an agent is rung.
 * <p/>
 * To enable AgentCalledEvents you have to set
 * <code>eventwhencalled = yes</code> in <code>queues.conf</code>.
 * <p/>
 * This event is implemented in <code>apps/app_queue.c</code>
 */
class AgentCalledEvent: public ManagerEvent {
public:
	inline static std::string getEventName() {
		return ("AgentCalledEvent");
	}
	AgentCalledEvent(const std::string & values) :
			ManagerEvent(values) {
	}
	virtual ~AgentCalledEvent() {
	}

	/**
	 * Returns the name of the queue.<p>
	 * Available since Asterisk 1.6.
	 *
	 * @return the name of the queue.
	 * @since 1.0.0
	 */
	std::string getQueue() const {
		return (getProperty("Queue"));
	}

	/**
	 * Returns the member interface of the agent that has been called.
	 *
	 * @return the member interface of the agent that has been called.
	 * @see QueueMemberEvent#getLocation()
	 */
	std::string getAgentCalled() const {
		return (getProperty("AgentCalled"));
	}

	/**
	 * Returns the name of the agent that has been called.<p>
	 * Available since Asterisk 1.6.
	 *
	 * @return the name of the agent that has been called.
	 * @since 1.0.0
	 */
	std::string getAgentName() const {
		return (getProperty("AgentName"));
	}

	/**
	 * Returns the name of the caller's channel that is about to be handled by
	 * the agent.
	 *
	 * @return the name of the caller's channel.
	 */
	std::string getChannelCalling() const {
		return (getProperty("ChannelCalling"));
	}

	/**
	 * Returns the name of the channel calling the agent.<p>
	 * Available since Asterisk 1.6
	 *
	 * @return the name of the channel calling the agent.
	 * @since 1.0.0
	 */
	std::string getDestinationChannel() const {
		return (getProperty("DestinationChannel"));
	}

	/**
	 * Returns the Caller ID number of the caller's channel.
	 *
	 * @return the Caller ID number of the caller's channel or "unknown" of none has been set.
	 * @since 1.0.0
	 */
	std::string getCallerIdNum() const {
		return (getProperty("CallerIdNum"));
	}

	/**
	 * Returns the Caller ID number of the caller's channel.
	 *
	 * @return the Caller ID number of the caller's channel.
	 * @deprecated as of 1.0.0, use {@link #getCallerIdNum()} instead.
	 */
	std::string getCallerId() const {
		return (getProperty("CallerID"));

	}

	/**
	 * Returns the Caller ID name of the caller's channel.
	 *
	 * @return the Caller ID name of the caller's channel or "unknown" if none has been set.
	 * @since 0.2
	 */
	std::string getCallerIdName() const {
		return (getProperty("CallerIdName"));
	}

	std::string getContext() const {
		return (getProperty("Context"));
	}

	std::string getExtension() const {
		return (getProperty("Extension"));
	}

	std::string getPriority() const {
		return (getProperty("Priority"));
	}

	/**
	 * Returns the channel variables if <code>eventwhencalled</code> is set to <code>vars</code>
	 * in <code>queues.conf</code>.<p>
	 * Available since Asterisk 1.6
	 *
	 * @return the channel variables.
	 * @since 1.0.0
	 */
	std::map<std::string, std::string> getVariables() const {
		//TODO implement
		std::map<std::string, std::string> rt;
		return (rt);
	}
};

}

#endif /* AGENTCALLEDEVENT_H_ */
