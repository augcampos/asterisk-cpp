/*
 * MeetMeLeaveEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MeetMeLeaveEvent.h"

namespace asteriskcpp {

    MeetMeLeaveEvent::MeetMeLeaveEvent(const std::string & values) :
    AbstractMeetMeEvent(values) {
    }

    MeetMeLeaveEvent::~MeetMeLeaveEvent() {
    }

    const std::string& MeetMeLeaveEvent::getCallerIdName() const {
        return (getProperty("CallerIdName"));
    }

    const std::string& MeetMeLeaveEvent::getCallerIdNum() const {
        return (getProperty("CallerIdNum"));
    }

    long MeetMeLeaveEvent::getDuration() const {
        return (getProperty<long>("Duration"));
    }
} /* namespace asteriskcpp */
