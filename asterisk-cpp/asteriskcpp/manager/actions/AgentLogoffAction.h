/* 
 * File:   AgentLogoffAction.h
 * Author: augcampos
 *
 * Created on June 20, 2013, 1:54 AM
 */

#ifndef AGENTLOGOFFACTION_H
#define	AGENTLOGOFFACTION_H

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The AgentLogoffAction sets an agent as no longer logged in.<p>
     * Available since Asterisk 1.2
     * 
     * @version $Id$
     * @since 0.2
     */
    class AgentLogoffAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty AgentLogoffAction.
         */
        AgentLogoffAction();

        /**
         * Creates a new AgentLogoffAction that logs off the given agent
         * 
         * @param agent the name of the agent to log off.
         */
        AgentLogoffAction(const std::string& agent);

        /**
         * Creates a new AgentLogoffAction that logs off the given agent
         * 
         * @param agent the name of the agent to log off.
         * @param soft bool.TRUE if exisiting calls should not be hung up on
         *            logout.
         */
        AgentLogoffAction(const std::string& agent, bool soft);

        virtual ~AgentLogoffAction();

        /**
         * Returns the name of the agent to log off, for example "1002".
         * 
         * @return the name of the agent to log off
         */
        const std::string& getAgent() const;

        /**
         * Sets the name of the agent to log off, for example "1002".<p>
         * This is property is mandatory.
         * 
         * @param agent the name of the agent to log off
         */
        void setAgent(const std::string& agent);

        /**
         * Returns whether to hangup existing calls or not.<p>
         * Default is to hangup existing calls on logoff.
         * 
         * @return bool.TRUE if existing calls should not be hung up,
         *         bool.FALSE otherwise. <code>null</code> if default should be
         *         used.
         */
        bool getSoft() const;

        /**
         * Sets whether existing calls should be hung up or not.<p>
         * Default is to hangup existing calls on logoff.
         * 
         * @param soft bool.TRUE if existing calls should not be hung up,
         *            bool.FALSE otherwise. <code>null</code> if default should
         *            be used.
         */
        void setSoft(bool channel);
    private:

    };
}
#endif	/* AGENTLOGOFFACTION_H */

