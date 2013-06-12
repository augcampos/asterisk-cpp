/*
 * MeetMeJoinEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef MEETMEJOINEVENT_H_
#define MEETMEJOINEVENT_H_

#include "asteriskcpp/manager/events/AbstractMeetMeEvent.h"

namespace asteriskcpp {

    /**
     * A MeetMeJoinEvent is triggered if a channel joins a MeetMe conference.<p>
     * Channel and unqiueId properties for this event are available since Asterisk 1.0.<p>
     * It is implemented in <code>apps/app_meetme.c</code>
     *
     */
    class MeetMeJoinEvent : public AbstractMeetMeEvent {
    public:
        MeetMeJoinEvent(const std::string & values);
        virtual ~MeetMeJoinEvent();

        /**
         * Returns the Caller Id number.
         *
         * @return the Caller Id number or "<unknown>" if not set.
         * @since 1.0.0
         */
        const std::string& getCallerIdNum() const;

        /**
         * Returns the Caller Id name.
         *
         * @return the Caller Id name or "<unknown>" if not set.
         * @since 1.0.0
         */
        const std::string& getCallerIdName() const;
    };

} /* namespace asterisk_cpp */
#endif /* MEETMEJOINEVENT_H_ */
