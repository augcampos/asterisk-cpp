/*
 * AgentCallbackLoginEvent.h
 *
 *  Created on: Aug 1, 2011
 *      Author: a-campos
 */

#ifndef AGENTCALLBACKLOGINEVENT_H_
#define AGENTCALLBACKLOGINEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * An AgentCallbackLoginEvent is triggered when an agent is successfully logged in using
     * AgentCallbackLogin.<p>
     * It is implemented in <code>channels/chan_agent.c</code>
     *
     * @see org.asteriskjava.manager.event.AgentCallbackLogoffEvent
     */
    class AgentCallbackLoginEvent : public ManagerEvent {
    public:
        AgentCallbackLoginEvent(const std::string& values);

        virtual ~AgentCallbackLoginEvent();

        /**
         * Returns the name of the agent that logged in.
         */
        const std::string& getAgent() const;

        const std::string& getLoginChan() const;
    };

}

#endif /* AGENTCALLBACKLOGINEVENT_H_ */
