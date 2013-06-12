/*
 * AgentRingNoAnswer.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTRINGNOANSWER_H_
#define AGENTRINGNOANSWER_H_

#include "asteriskcpp/manager/events/AbstractAgentEvent.h"

namespace asteriskcpp {

    /**
     * An AgentRingNoAnswerEvent is triggered when a call is routed to an agent but the agent
     * does not answer the call.<p>
     * It is implemented in <code>apps/app_queue.c</code>.<p>
     * Available since Asterisk 1.6
     *
     * @since 1.0.0
     */
    class AgentRingNoAnswer : public AbstractAgentEvent {
    public:
        AgentRingNoAnswer(const std::string & values);
        virtual ~AgentRingNoAnswer();

        /**
         * Returns the amount of time the agent's channel was ringing.
         *
         * @return the amount of time the agent's channel was ringing in seconds.
         */
        const std::string& getRingtime() const;
    };

}

#endif /* AGENTRINGNOANSWER_H_ */
