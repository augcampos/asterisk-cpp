/*
 * GetVarAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef GETVARACTION_H_
#define GETVARACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The GetVarAction queries for a global or local channel variable.<p>
     * Reading global variables is supported since Asterisk 1.2.<p>
     * You cannot read built-in channel variables such as <code>LANGUAGE</code> or
     * <code>CALLERIDNUM</code> using the Manager API. You can only
     * read channel variables that you have explicitly set using the
     * <code>Set</code> or <code>SetVar</code> (for Asterisk 1.0.x)
     * applications in the dialplan, in an AGI script or by using
     * the {@link org.asteriskjava.manager.action.SetVarAction} through
     * the Manager API itself.<p>
     * GetVarAction returns a {@link org.asteriskjava.manager.response.GetVarResponse}.
     * To get the actual value from the corresponding
     * {@link org.asteriskjava.manager.response.ManagerResponse} call
     * {@link org.asteriskjava.manager.response.ManagerResponse#getAttribute(String)}
     * with either the variable name as parameter (for Asterisk 1.0.x) or
     * with "Value" as parameter (for Asterisk since 1.2).<p>
     * Example (for Asterisk 1.2):<p>
     * <pre>
     * GetVarAction getVarAction = new GetVarAction(channel, "MY_VAR");
     * ManagerResponse response = c.sendAction(getVarAction);
     * String value = response.getAttribute("Value");
     * System.out.println("MY_VAR on " + channel + " is " + value);
     * </pre>
     * Where <code>c</code> is an instance of 
     * {@link org.asteriskjava.manager.ManagerConnection} and <code>channel</code>
     * contains the name of a channel instance, for example "SIP/1234-9cd".
     * <p>
     * Since Asterisk-Java 1.0.0 you can also call
     * {@link org.asteriskjava.manager.response.GetVarResponse#getValue()}
     * when using Asterisk 1.2 or later.
     * <p>
     * Since Asterisk 1.4 this action also supports built-in functions like
     * <code>DB()</code>, <code>CALLERID()</code> and <code>ENV()</code>.
     * 
     * @author augcampos
     * @version $Id$
     * 
     * @ExpectedResponse(GetVarResponse)
     */
    

    class GetVarAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty GetVarAction.
         */
        GetVarAction();

        /**
         * Creates a new GetVarAction that queries for the given global variable.
         * 
         * @param variable the name of the global variable to query.
         * @since 0.2
         */
        GetVarAction(const std::string& variable);

        /**
         * Creates a new GetVarAction that queries for the given local channel
         * variable.
         * 
         * @param channel the name of the channel, for example "SIP/1234-9cd".
         * @param variable the name of the variable to query.
         * @since 0.2
         */
        GetVarAction(const std::string& channel, const std::string& variable);

        virtual ~GetVarAction();

        virtual ManagerResponse* expectedResponce(const std::string& reponse);

        /**
         * Returns the name of the channel if you query for a local channel variable
         * or <code>null</code> if it is a global variable.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel if you query for a local channel variable.
         * Leave empty to query for a global variable.
         * 
         * @param channel the channel if you query for a local channel variable or
         *            <code>null</code> to query for a gloabl variable.
         */
        void setChannel(const std::string& channel);

        /**
         * Retruns the name of the variable to query.
         */
        const std::string& getVariable() const;


        void setVariable(const std::string& variable);
    };

} //NAMESPACE

#endif /*GETVARACTION_H_*/
