/* 
 * File:   AgentCallbackLoginAction.h
 * Author: augcampos
 *
 * Created on February 6, 2013, 4:02 AM
 */

#ifndef AGENTCALLBACKLOGINACTION_H
#define	AGENTCALLBACKLOGINACTION_H

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The AgentCallbackLoginAction sets an agent as logged in with callback.<p>
     * You can pass an extentsion (and optionally a context) to specify the
     * destination of the callback.<p>
     * In contrast to the AgentCallbackLogin application that you can use within
     * Asterisk's dialplan, you don't need to know the agent's password when logging
     * in an agent.<p>
     * Available since Asterisk 1.2, deprecated in Asterisk 1.4 and removed in Asterisk 1.6.
     *
     * @author augcampos
     * @version $Id$
     * @since 0.2
     * @deprecated use {@link org.asteriskjava.manager.action.QueueAddAction} instead.
     */
    class AgentCallbackLoginAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty AgentCallbackLoginAction.
         */
        AgentCallbackLoginAction();

        /**
         * Creates a new AgentCallbackLoginAction, that logs in the given agent at
         * the given callback extension.
         *
         * @param agent the name of the agent to log in
         * @param exten the extension that is called to connect a queue member with
         *              this agent
         */
        AgentCallbackLoginAction(const std::string& agent, const std::string& exten);

        /**
         * Creates a new AgentCallbackLoginAction, that logs in the given agent at
         * the given callback extension in the given context.
         *
         * @param agent      the name of the agent to log in
         * @param exten      the extension that is called to connect a queue member with
         *                   this agent
         * @param context    the context of the extension to use for callback
         * @param ackCall    <code>bool.TRUE</code> to require an acknowledgement by
         *                   '#' when agent is called back, <code>bool.FALSE</code> otherwise.
         *                   <code>null</code> if default should be used.
         * @param wrapupTime the minimum amount of time (in seconds) after disconnecting before
         *                   the caller can receive a new call.
         *                   <code>null</code> if default should be used.
         * @since 1.0.0
         */
        AgentCallbackLoginAction(const std::string& agent, const std::string& exten, const std::string& context, bool ackCall, long wrapupTime);

        virtual ~AgentCallbackLoginAction();

        /**
         * Sets the name of the agent to log in, for example "1002".<p>
         * This is property is mandatory.
         *
         * @param agent the name of the agent to log in
         */
        void setAgent(const std::string& agent);


        /**
         * Returns the extension to use for callback.
         *
         * @return the extension to use for callback.
         */
        const std::string& getExten()const;


        /**
         * Sets the extension to use for callback.<p>
         * This is property is mandatory.
         *
         * @param exten the extension to use for callback.
         */
        void setExten(const std::string& exten);


        /**
         * Returns the context of the extension to use for callback.
         *
         * @return the context of the extension to use for callback.
         */
        const std::string& getContext()const;


        /**
         * Sets the context of the extension to use for callback.
         *
         * @param context the context of the extension to use for callback.
         */
        void setContext(const std::string& context);


        /**
         * Returns if an acknowledgement is needed when agent is called back.
         *
         * @return <code>bool.TRUE</code> if acknowledgement by '#' is required when agent is
         *         called back, <code>bool.FALSE</code> otherwise. <code>null</code> if
         *         default should be used.
         */
        bool getAckCall() const;


        /**
         * Sets if an acknowledgement is needed when agent is called back.<p>
         * This property is optional, it allows you to override the defaults defined
         * in Asterisk's configuration.
         *
         * @param ackCall <code>bool.TRUE</code> to require an acknowledgement by
         *                '#' when agent is called back, <code>bool.FALSE</code> otherwise.
         *                <code>null</code> if default should be used.
         */
        void setAckCall(bool ackCall);


        /**
         * Returns the minimum amount of time after disconnecting before the caller
         * can receive a new call.
         *
         * @return the minimum amount of time after disconnecting before the caller
         *         can receive a new call in seconds.
         */
        long getWrapupTime() const;


        /**
         * Sets the minimum amount of time after disconnecting before the caller can
         * receive a new call.<p>
         * This property is optional, it allows you to override the defaults defined
         * in Asterisk's configuration.
         *
         * @param wrapupTime the minimum amount of time (in seconds) after disconnecting before
         *                   the caller can receive a new call.
         *                   <code>null</code> if default should be used.
         */
        void setWrapupTime(long wrapupTime);

    private:

    };

}

#endif	/* AGENTCALLBACKLOGINACTION_H */

