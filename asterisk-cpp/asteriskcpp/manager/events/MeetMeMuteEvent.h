/*
 * MeetMeMuteEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MEETMEMUTEEVENT_H_
#define MEETMEMUTEEVENT_H_

#include "AbstractMeetMeEvent.h"

namespace asteriskcpp {

    /**
     * A MeetMeMuteEvent is triggered when a user in a MeetMe room is muted or
     * unmuted.<p>
     * It is implemented in <code>apps/app_meetme.c</code><p>
     * Available since Asterisk 1.4.
     *
     * @author augcampos
     * @version $Id$
     */
    class MeetMeMuteEvent : public asteriskcpp::AbstractMeetMeEvent {
    public:
        MeetMeMuteEvent(const std::string & values);
        virtual ~MeetMeMuteEvent();

        /**
         * Returns whether the user was muted or unmuted.
         *
         * @return <code>true</code> if ther user was muted,
         *         <code>false</code> if the user was unmuted.
         */
        bool getStatus() const;
    };

} /* namespace asteriskcpp */
#endif /* MEETMEMUTEEVENT_H_ */
