/*
 * MeetMeTalkingRequestEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MEETMETALKINGREQUESTEVENT_H_
#define MEETMETALKINGREQUESTEVENT_H_

#include "AbstractMeetMeEvent.h"

namespace asteriskcpp {

    /**
     * A MeetMeTalkingEvent is triggered when a muted user requests talking in a meet me
     * conference.<p>
     * To enable talker detection you must pass the option 'T' to the MeetMe application.<p>
     * It is implemented in <code>apps/app_meetme.c</code><p>
     * Available since Asterisk 1.6
     *
     * @since 1.0.0
     */
    class MeetMeTalkingRequestEvent : public AbstractMeetMeEvent {
    public:
        MeetMeTalkingRequestEvent(const std::string & values);
        virtual ~MeetMeTalkingRequestEvent();

        // see http://bugs.digium.com/view.php?id=9418

        /**
         * Returns whether the user has started or stopped requesting talking.
         *
         * @return <code>true</code> if ther user has started requesting talking,
         *         <code>false</code> if the user has stopped requesting talking.
         */
        bool getStatus() const;
    };

} /* namespace asteriskcpp */
#endif /* MEETMETALKINGREQUESTEVENT_H_ */
