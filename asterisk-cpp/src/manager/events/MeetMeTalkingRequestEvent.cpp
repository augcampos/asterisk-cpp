/*
 * MeetMeTalkingRequestEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MeetMeTalkingRequestEvent.h"

namespace asteriskcpp {

    MeetMeTalkingRequestEvent::MeetMeTalkingRequestEvent(const std::string & values) :
    AbstractMeetMeEvent(values) {
    }

    MeetMeTalkingRequestEvent::~MeetMeTalkingRequestEvent() {
    }

    bool MeetMeTalkingRequestEvent::getStatus() const {
        return (getProperty<bool>("Status"));
    }
} /* namespace asteriskcpp */
