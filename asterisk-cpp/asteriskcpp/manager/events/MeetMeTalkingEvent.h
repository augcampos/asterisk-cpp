/*
 * MeetMeTalkingEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MEETMETALKINGEVENT_H_
#define MEETMETALKINGEVENT_H_

#include "AbstractMeetMeEvent.h"

namespace asteriskcpp {

    /**
     * A MeetMeTalkingEvent is triggered when a user starts talking in a meet me
     * conference.<p>
     * To enable talker detection you must pass the option 'T' to the MeetMe application.<p>
     * It is implemented in <code>apps/app_meetme.c</code><p>
     * Available since Asterisk 1.2
     *
     * @see org.asteriskjava.manager.event.MeetMeStopTalkingEvent
     * @author augcampos
     * @version $Id$
     * @since 0.2
     */
    class MeetMeTalkingEvent : public asteriskcpp::AbstractMeetMeEvent {
    public:
        MeetMeTalkingEvent(const std::string & values);
        virtual ~MeetMeTalkingEvent();
        /**
         * Returns whether the user has started or stopped talking.<p>
         * Until Asterisk 1.2 Asterisk used different events to indicate start
         * and stop: This MeetMeTalkingEvent when the user started talking and the
         * {@link MeetMeStopTalkingEvent} when he stopped. With Asterisk 1.2
         * only this MeetMeTalkingEvent is used with the status property indicating
         * start and stop. For backwards compatibility this property defaults to
         * <code>true</code> so when used with version 1.2 of Asterisk you get
         * <code>true</code>.
         *
         * @return <code>true</code> if ther user has started talking,
         *         <code>false</code> if the user has stopped talking.
         * @since 0.3
         */
        bool getStatus() const;
    };

} /* namespace asteriskcpp */
#endif /* MEETMETALKINGEVENT_H_ */
