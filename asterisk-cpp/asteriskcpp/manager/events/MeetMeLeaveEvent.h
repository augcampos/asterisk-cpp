/*
 * MeetMeLeaveEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MEETMELEAVEEVENT_H_
#define MEETMELEAVEEVENT_H_

#include "AbstractMeetMeEvent.h"

namespace asteriskcpp {

    /**
     * A MeetMeLeaveEvent is triggered if a channel leaves a MeetMe conference.<p>
     * Channel and unqiueId properties for this event are available since Asterisk 1.0.<p>
     * It is implemented in <code>apps/app_meetme.c</code>
     *
     * @author augcampos
     * @version $Id$
     */
    class MeetMeLeaveEvent : public asteriskcpp::AbstractMeetMeEvent {
    public:
        MeetMeLeaveEvent(const std::string & values);
        virtual ~MeetMeLeaveEvent();

        /**
         * Returns the Caller*ID Name of the channel that left the conference.<p>
         * This property is available since Asterisk 1.4.
         *
         * @return the Caller*ID Name of the channel that left the conference.
         */
        const std::string& getCallerIdName() const;

        /**
         * Returns the Caller*ID Number of the channel that left the conference.<p>
         * This property is available since Asterisk 1.4.
         *
         * @return the Caller*ID Number of the channel that left the conference.
         */
        const std::string& getCallerIdNum() const;

        /**
         * Returns how long the user spent in the conference.<p>
         * This property is available since Asterisk 1.4.
         *
         * @return the duration in seconds the user spent in the conference.
         */
        long getDuration() const;
    };

} /* namespace asteriskcpp */
#endif /* MEETMELEAVEEVENT_H_ */
