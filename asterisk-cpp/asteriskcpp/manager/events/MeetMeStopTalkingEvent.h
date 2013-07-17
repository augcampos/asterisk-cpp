/*
 * MeetMeStopTalkingEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MEETMESTOPTALKINGEVENT_H_
#define MEETMESTOPTALKINGEVENT_H_

#include "MeetMeTalkingEvent.h"

namespace asteriskcpp {

    /**
     * A MeetMeStopTalkingEvent is triggered when a user ends talking in a meet me
     * conference.<p>
     * To enable talker detection you must pass the option 'T' to the MeetMe application.<p>
     * It is implemented in <code>apps/app_meetme.c</code><p>
     * Available only in Asterisk 1.2. Asterisk 1.4 sends a
     * {@link org.asteriskjava.manager.event.MeetMeTalkingEvent} with status set to
     * <code>false</code> instead.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.event.MeetMeTalkingEvent
     * @since 0.2
     * @deprecated as of 1.0.0, use {@link org.asteriskjava.manager.event.MeetMeTalkingEvent} instead and check for
     *             {@link MeetMeTalkingEvent#getStatus()}.
     */
    class MeetMeStopTalkingEvent : public MeetMeTalkingEvent {
    public:
        MeetMeStopTalkingEvent(const std::string & values);
        virtual ~MeetMeStopTalkingEvent();
    };

} /* namespace asteriskcpp */
#endif /* MEETMESTOPTALKINGEVENT_H_ */
