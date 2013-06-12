/*
 * AgentCompleteEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTCOMPLETEEVENT_H_
#define AGENTCOMPLETEEVENT_H_

#include "asteriskcpp/manager/events/AbstractAgentEvent.h"

namespace asteriskcpp {

    /**
     * An AgentCompleteEvent is triggered when at the end of a call if the caller
     * was connected to an agent.<p>
     * It is implemented in <code>apps/app_queue.c</code>.<p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class AgentCompleteEvent : public AbstractAgentEvent {
    public:
        AgentCompleteEvent(const std::string& values);
        virtual ~AgentCompleteEvent();

        /**
         * Returns the amount of time the caller was on hold.
         *
         * @return the amount of time the caller was on hold in seconds.
         */
        const std::string& getHoldTime() const;

        /**
         * Returns the amount of time the caller talked to the agent.
         *
         * @return the amount of time the caller talked to the agent in seconds.
         */
        const std::string& getTalkTime() const;

        /**
         * Returns if the agent or the caller terminated the call.
         *
         * @return "agent" if the agent terminated the call, "caller" if the caller
         *         terminated the call.
         */
        const std::string& getReason() const;

    };

}

#endif /* AGENTCOMPLETEEVENT_H_ */
