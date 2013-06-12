/*
 * MessageWaitingEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MESSAGEWAITINGEVENT_H_
#define MESSAGEWAITINGEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A MessageWaitingEvent is triggered when someone leaves voicemail.<p>
     * It is implemented in <code>apps/app_voicemail.c</code>
     *
     */
    class MessageWaitingEvent : public ManagerEvent {
    public:
        MessageWaitingEvent(const std::string & values);
        virtual ~MessageWaitingEvent();

        /**
         * Returns the name of the mailbox that has waiting messages.<p>
         * The name of the mailbox is of the form numberOfMailbox@context, e.g.
         * 1234@default.
         *
         * @return the name of the mailbox that has waiting messages
         */
        const std::string& getMailbox() const;

        /**
         * Returns the number of new messages in the mailbox.
         * @return the number of new messages in the mailbox
         */
        int getWaiting() const;

        /**
         * Returns the number of new messages in this mailbox.
         * @return the number of new messages in this mailbox.
         * @since 0.2
         */
        int getNew() const;

        /**
         * Returns the number of old messages in this mailbox.
         * @return the number of old messages in this mailbox.
         * @since 0.2
         */
        int getOld() const;
    };

} /* namespace asteriskcpp */
#endif /* MESSAGEWAITINGEVENT_H_ */
