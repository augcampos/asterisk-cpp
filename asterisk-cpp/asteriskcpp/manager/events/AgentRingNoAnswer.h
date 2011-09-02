/*
 * AgentRingNoAnswer.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTRINGNOANSWER_H_
#define AGENTRINGNOANSWER_H_

#include "AbstractAgentEvent.h"

namespace asteriskcpp {

/**
 * An AgentRingNoAnswerEvent is triggered when a call is routed to an agent but the agent
 * does not answer the call.<p>
 * It is implemented in <code>apps/app_queue.c</code>.<p>
 * Available since Asterisk 1.6
 *
 * @since 1.0.0
 */
class AgentRingNoAnswer: public AbstractAgentEvent {
public:
	inline static std::string getEventName() {
		return ("AgentRingNoAnswer");
	}
	AgentRingNoAnswer(const std::string & values) :
			AbstractAgentEvent(values) {
	}
	virtual ~AgentRingNoAnswer() {
	}

	/**
	 * Returns the amount of time the agent's channel was ringing.
	 *
	 * @return the amount of time the agent's channel was ringing in seconds.
	 */
	std::string getRingtime() const {
		return (getProperty("Ringtime"));
	}
};

}

#endif /* AGENTRINGNOANSWER_H_ */
