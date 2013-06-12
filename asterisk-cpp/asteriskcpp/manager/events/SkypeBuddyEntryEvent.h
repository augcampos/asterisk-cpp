/*
 * SkypeBuddyEntryEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef SKYPEBUDDYENTRYEVENT_H_
#define SKYPEBUDDYENTRYEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A SkypeBuddyEntryEvent is triggered in response to a SkypeBuddiesAction for each
     * buddy on the buddy list.<p>
     * It is implemented in <code>chan_skype.c</code>.<p>
     * Available with Skype for Asterisk.
     *
     * @see org.asteriskjava.manager.action.SkypeBuddiesAction
     * @since 1.0.0
     */
    class SkypeBuddyEntryEvent : public ResponseEvent {
    public:
        SkypeBuddyEntryEvent(const std::string & values);
        virtual ~SkypeBuddyEntryEvent();

        /**
         * Returns the Skype username of the buddy.
         *
         * @return the Skype username of the buddy.
         */
        const std::string& getBuddy() const;

        /**
         * Returns the status of the buddy.
         *
         * @return the status of the buddy.
         */
        const std::string& getStatus() const;

        /**
         * Returns the full name of the buddy.
         *
         * @return the full name of the buddy.
         */
        const std::string& getFullname() const;
    };

} /* namespace asteriskcpp */
#endif /* SKYPEBUDDYENTRYEVENT_H_ */
