/*
 * SkypeChatMessageEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef SKYPECHATMESSAGEEVENT_H_
#define SKYPECHATMESSAGEEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A SkypeChatMessageEvent is triggered when a Skype Chat message is sent or received.<p>
     * It is implemented in <code>chan_skye.c</code>.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     */
    class SkypeChatMessageEvent : public ManagerEvent {
    public:
        SkypeChatMessageEvent(const std::string & values);
        virtual ~SkypeChatMessageEvent();

        /**
         * Returns the Skype username of the recipient of this chat message.
         *
         * @return the Skype username of the recipient of this chat message.
         */
        const std::string& getTo() const;

        /**
         * Returns the Skype username of the sender of this chat message.
         *
         * @return the Skype username of the sender of this chat message.
         */
        const std::string& getFrom() const;

        /**
         * Returns the Base64 encoded message.
         *
         * @return the Base64 encoded message.
         */
        const std::string& getMessage() const;

        /**
         * Returns the decoded message.
         *
         * @return the decoded message.
         */
        std::string getDecodedMessage();
    };

} /* namespace asteriskcpp */
#endif /* SKYPECHATMESSAGEEVENT_H_ */
