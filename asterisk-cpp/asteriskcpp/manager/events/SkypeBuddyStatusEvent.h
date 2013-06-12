/*
 * SkypeBuddyStatusEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef SKYPEBUDDYSTATUSEVENT_H_
#define SKYPEBUDDYSTATUSEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A SkypeBuddyStatusEvent indicates a status change for a contact in a Skype for Asterisk user's
     * contact list.<p>
     * It is implemented in <code>chan_skye.c</code>.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     */
    class SkypeBuddyStatusEvent : public ManagerEvent {
    public:
        SkypeBuddyStatusEvent(const std::string & values);
        virtual ~SkypeBuddyStatusEvent();

        /**
         * Returns the address of the buddy. The format is "Skype/user@buddy" where user is the Skype username of
         * the Skype for Asterisk user and buddy is the Skype username of the buddy who changed his status.<p>
         * For ease of use consider using {@link #getUser()} and {@link #getBuddySkypename()} which already do
         * the parsing.
         *
         * @return the address of the buddy.
         * @see #getUser()
         * @see #getBuddySkypename()
         */
        const std::string& getBuddy() const;

        /**
         * Returns the Skype username of the Skype for Asterisk user whose buddy changed his status.
         *
         * @return the Skype username of the Skype for Asterisk user.
         */
        std::string getUser() const;

        /**
         * Returns the Skype username of the buddy who changed his status.
         *
         * @return the Skype username of the buddy who changed his status.
         */
        std::string getBuddySkypename() const;

        /**
         * Returns the status of the buddy.
         *
         * @return the status of the buddy.
         */
        const std::string& getBuddyStatus() const;

    private:
        std::string buddyGroup(const int group) const;
    };

} /* namespace asteriskcpp */
#endif /* SKYPEBUDDYSTATUSEVENT_H_ */
