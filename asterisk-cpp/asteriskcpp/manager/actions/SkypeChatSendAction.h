/*
 * SkypeChatSendAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SKYPECHATSENDACTION_H_
#define SKYPECHATSENDACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SkypeChatSendAction sends a Skype Chat message to a buddy of a Skype for Asterisk user.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     */

    class SkypeChatSendAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new SkypeAddBuddyAction.
         */
        SkypeChatSendAction();

        /**
         * Creates a new SkypeChatSendAction with the given parameters.
         *
         * @param user the Skype username of the sender of this chat message.
         * @param skypename the Skype username of the recipient of this chat message.
         * @param message the message to send. Must not contain newlines but you can use "\r".
         */
        SkypeChatSendAction(const std::string& message);

        virtual ~SkypeChatSendAction();


        /**
         * Returns the Skype username of the recipient of this chat message.
         *
         * @return the Skype username of the recipient of this chat message.
         */
        const std::string& getSkypename() const;

        /**
         * Sets the Skype username of the recipient of this chat message.
         *
         * @param skypename the Skype username of the recipient of this chat message.
         */
        void setSkypename(const std::string& skypename);

        /**
         * Returns the Skype username of the sender of this chat message.
         *
         * @return the Skype username of the sender of this chat message.
         */
        const std::string& getUser() const;

        /**
         * Sets the Skype username of the sender of this chat message.
         *
         * @param user the Skype username of the sender of this chat message.
         */
        void setUser(const std::string& user);

        /**
         * Returns the message to send.
         *
         * @return the message to send.
         */
        const std::string& getMessage() const;

        /**
         * Sets the message to send. Must not contain newlines but you can use "\r".
         *
         * @param message the message to send.
         */
        void setMessage(const std::string& message);
    };

} //NAMESPACE

#endif /*SKYPECHATSENDACTION_H_*/
