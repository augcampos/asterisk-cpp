/*
 * SkypeBuddyListCompleteEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef SKYPEBUDDYLISTCOMPLETEEVENT_H_
#define SKYPEBUDDYLISTCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A SkypeBuddyListCompleteEvent is triggered in response to a SkypeBuddiesAction when
     * all buddies have been reported.<p>
     * It is implemented in <code>chan_skype.c</code>.<p>
     * Available with Skype for Asterisk.
     *
     * @see org.asteriskjava.manager.action.SkypeBuddiesAction
     * @since 1.0.0
     */
    class SkypeBuddyListCompleteEvent : public ResponseEvent {
    public:
        SkypeBuddyListCompleteEvent(const std::string & values);
        virtual ~SkypeBuddyListCompleteEvent();

        /**
         * Returns the number of buddies that have been reported.
         *
         * @return the number of buddies that have been reported.
         */
        int getListItems() const;
    };

} /* namespace asteriskcpp */
#endif /* SKYPEBUDDYLISTCOMPLETEEVENT_H_ */
