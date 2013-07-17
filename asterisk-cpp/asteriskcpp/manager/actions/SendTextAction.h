/*
 * SendTextAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SENDTEXTACTION_H_
#define SENDTEXTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Sends a text message to a given channel while in a call.
     * An active channel and a text message are required in order to success.<p>
     * It is defined in <code>main/manager.c</code>.<p>
     * Available since Asterisk 1.6.0
     *
     * @author Laureano
     * @version $Id$
     * @since 1.0.0
     */

    class SendTextAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty SendTextAction.
         */
        SendTextAction();

        /**
         * Creates a new SendTextAction that sends the given message to the given channel.
         *
         * @param channel the name of the channel to send the message to.
         * @param message the message to send.
         */
        SendTextAction(const std::string& channel, const std::string& message);

        virtual ~SendTextAction();


        /**
         * Returns the name of the channel to send the message to.
         *
         * @return the name of the channel to send the message to.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to send the message to.
         *
         * @param channel the name of the channel to send the message to.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the message to send.
         *
         * @return the message to send.
         */
        const std::string& getMessage() const;


        void setMessage(const std::string& message);
    };

} //NAMESPACE

#endif /*SENDTEXTACTION_H_*/
