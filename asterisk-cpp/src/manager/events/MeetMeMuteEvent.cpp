/*
 * MeetMeMuteEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MeetMeMuteEvent.h"

namespace asteriskcpp {

    MeetMeMuteEvent::MeetMeMuteEvent(const std::string & values) :
    AbstractMeetMeEvent(values) {
    }

    MeetMeMuteEvent::~MeetMeMuteEvent() {
    }

    bool MeetMeMuteEvent::getStatus() const {
        return (getProperty<bool>("Status"));
    }

}/* namespace asteriskcpp */
