/*
 * AgentConnectEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTCONNECTEVENT_H_
#define AGENTCONNECTEVENT_H_

#include "asteriskcpp/manager/events/AbstractAgentEvent.h"

namespace asteriskcpp {

    /**
     * An AgentConnectEvent is triggered when a caller is connected to an agent.<p>
     * It is implemented in <code>apps/app_queue.c</code>.<p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class AgentConnectEvent : public AbstractAgentEvent {
    public:
        AgentConnectEvent(const std::string& values);
        virtual ~AgentConnectEvent();

        /**
         * Returns the amount of time the caller was on hold.
         *
         * @return the amount of time the caller was on hold in seconds.
         */
        const std::string& getHoldTime() const;

        /**
         * Returns the unique ID of the queue member channel that is taking the
         * call. This is useful when trying to link recording filenames back to a
         * particular call from the queue.<p>
         * Available since Asterisk 1.4.
         *
         * @return the unique ID of the queue member channel that is taking the call.
         */
        const std::string& getBridgedChannel() const;

        /**
         * Returns the amount of time the agent's channel was ringing before answered.<p>
         * Available since Asterisk 1.6.
         *
         * @return the amount of time the agent's channel was ringing before answered in seconds.
         * @since 1.0.0
         */
        const std::string& getRingtime() const;

    };

}

#endif /* AGENTCONNECTEVENT_H_ */
