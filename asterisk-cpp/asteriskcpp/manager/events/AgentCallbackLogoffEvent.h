/*
 * AgentCallbackLogoffEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTCALLBACKLOGOFFEVENT_H_
#define AGENTCALLBACKLOGOFFEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * An AgentCallbackLogoffEvent is triggered when an agent that previously logged in using
     * AgentCallbackLogin is logged of.
     * <p>
     * It is implemented in <code>channels/chan_agent.c</code>
     *
     * @see org.asteriskjava.manager.event.AgentCallbackLoginEvent
     */
    class AgentCallbackLogoffEvent : public ManagerEvent {
    public:
        AgentCallbackLogoffEvent(const std::string& values);
        virtual ~AgentCallbackLogoffEvent();

        /**
         * Returns the name of the agent that logged off.
         */
        const std::string& getAgent() const;

        const std::string& getLoginChan() const;

        const std::string& getLoginTime() const;

        /**
         * Returns the reason for the logoff.
         * The reason is set to Autologoff if the agent has been logged off due to not answering the phone in time.
         * Autologoff is configured by setting <code>autologoff</code> to the appropriate number of seconds in <code>agents.conf</code>.
         */
        const std::string& getReason() const;

    };

}

#endif /* AGENTCALLBACKLOGOFFEVENT_H_ */
