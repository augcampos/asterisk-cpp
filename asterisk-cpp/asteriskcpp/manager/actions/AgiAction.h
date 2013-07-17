/* 
 * File:   AgiAction.h
 * Author: augcampos
 *
 * Created on June 20, 2013, 2:52 AM
 */

#ifndef AGIACTION_H
#define	AGIACTION_H

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Add a new AGI command to execute by the Async AGI application.<p>
     * It will append the application to the specified channel's queue.
     * If the channel is not inside Async AGI application it will return an error.<p>
     * It is implemented in <code>res/res_agi.c</code>
     * <p/>
     * Available since Asterisk 1.6
     *
     * @see org.asteriskjava.manager.event.AsyncAgiEvent
     * @version $Id$
     * @since 1.0.0
     */
    class AgiAction : public AbstractManagerAction {
    public:
        /**
         * Creates a new empty AgentLogoffAction.
         */
        AgiAction();

        /**
         * Creates a new AgiAction with channel and command.
         *
         * @param channel the name of the channel to execute the AGI command on.
         * @param command the AGI command to execute.
         */
        AgiAction(const std::string& channel, const std::string& command);

        /**
         * Creates a new AgiAction with channel, command and commandId.
         *
         * @param channel   the name of the channel to execute the AGI command on.
         * @param command   the AGI command to execute.
         * @param commandId the command id to track execution progress.
         */
        AgiAction(const std::string& channel, const std::string& command, const std::string& commandId);
        virtual ~AgiAction();

        /**
         * Returns the name of the channel to execute the AGI command on.
         *
         * @return the name of the channel to execute the AGI command on.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to execute the AGI command on.<p>
         * The channel must be running the Async AGI application "AGI(agi:async)".<p>
         * This property is required.
         *
         * @param channel the name of the channel to execute the AGI command on.
         */
        void setChannel(const std::string& channel);


        /**
         * Returns the AGI command to execute.
         *
         * @return the AGI command to execute.
         */
        const std::string& getCommand() const;

        /**
         * Sets the AGI command to execute.<p>
         * This property is required.
         *
         * @param command the AGI command to execute.
         */
        void setCommand(const std::string& command);


        /**
         * Returns the command id to track execution progress.
         *
         * @return the command id to track execution progress.
         */
        const std::string& getCommandId() const;

        /**
         * Sets the command id to track execution progress.<p>
         * This value will be sent back in the CommandID header of AsyncAGI exec event notifications.
         *
         * @param commandId the command id to track execution progress.
         */
        void setCommandId(const std::string& commandId);
    private:

    };
}
#endif	/* AGIACTION_H */

