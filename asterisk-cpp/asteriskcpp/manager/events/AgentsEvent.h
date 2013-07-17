/*
 * AgentsEvent.h
 *
 *  Created on: Feb 14, 2012
 *      Author: augcampos
 */

#ifndef AGENTSEVENT_H_
#define AGENTSEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * An AgentsEvent is triggered for each agent in response to an AgentsAction.
     * <p>
     * Available since Asterisk 1.2
     *
     * @see org.asteriskjava.manager.action.AgentsAction
     * @author augcampos
     * @version $Id$
     * @since 0.2
     */
    class AgentsEvent : public ResponseEvent {
    public:

        enum AgentStatus {
            LOGGEDOFF = 0, // Agent isn't logged in.
            IDLE = 1, // Agent is logged in and waiting for call.
            ONCALL = 2, // Agent is logged in and on a call.
            UNKNOWN = 3
            //Don't know anything about agent. Shouldn't ever get this.

        };
        AgentsEvent(const std::string & values);

        virtual ~AgentsEvent();

        /**
         * Returns the agentid.
         */
        const std::string& getAgent() const;

        /**
         * Returns the name of this agent.
         *
         * @return the name of this agent
         */
        const std::string& getName() const;

        /**
         * Returns the status of this agent.
         * <p>
         * This is one of
         * <dl>
         * <dt>"AGENT_LOGGEDOFF"</dt>
         * <dd>Agent isn't logged in</dd>
         * <dt>"AGENT_IDLE"</dt>
         * <dd>Agent is logged in and waiting for call</dd>
         * <dt>"AGENT_ONCALL"</dt>
         * <dd>Agent is logged in and on a call</dd>
         * <dt>"AGENT_UNKNOWN"</dt>
         * <dd>Don't know anything about agent. Shouldn't ever get this.</dd>
         * </dl>
         *
         * @return the status of this agent
         * @see #AGENT_STATUS_LOGGEDOFF
         * @see #AGENT_STATUS_IDLE
         * @see #AGENT_STATUS_ONCALL
         * @see #AGENT_STATUS_UNKNOWN
         */
        const std::string& getStatus() const;

        /**
         * Returns the name of channel this agent logged in from.
         *
         * @return the name of the channel this agent logged in from or "n/a" if the
         *         agent is not logged in.
         */
        const std::string& getLoggedInChan() const;

        /**
         * Returns the time (in seconds since 01/01/1970) when the agent logged in.
         *
         * @return the time when the agent logged in or 0 if the user is not logged
         *         in.
         */
        long getLoggedInTime() const;

        /**
         * Returns the numerical Caller*ID of the channel this agent is talking to.
         *
         * @return the numerical Caller*ID of the channel this agent is talking to
         *         or "n/a" if this agent is talking to nobody.
         */
        const std::string& getTalkingTo() const;

        /**
         * Returns the name of the channel this agent is talking to.<p>
         * Available since Asterisk 1.6.
         *
         * @return the name of the channel this agent is talking to.
         * @since 1.0.0
         */
        const std::string& getTalkingToChan() const;
    };

} /* namespace asteriskcpp */
#endif /* AGENTSEVENT_H_ */
