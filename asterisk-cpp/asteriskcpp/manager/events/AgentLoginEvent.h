/*
 * AgentLoginEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTLOGINEVENT_H_
#define AGENTLOGINEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * An AgentLoginEvent is triggered when an agent is successfully logged in using AgentLogin.<p>
     * It is implemented in <code>channels/chan_agent.c</code>
     *
     * @see org.asteriskjava.manager.event.AgentLogoffEvent
     */
    class AgentLoginEvent : public ManagerEvent {
    public:
        AgentLoginEvent(const std::string & values);
        virtual ~AgentLoginEvent();

        /**
         * Returns the name of the agent that logged in.
         */
        const std::string& getAgent() const;

        /**
         * Returns the name of the channel associated with the logged in agent.
         *
         * @return the name of the channel associated with the logged in agent.
         * @since 0.3
         */
        const std::string& getChannel() const;
    };

}

#endif /* AGENTLOGINEVENT_H_ */
