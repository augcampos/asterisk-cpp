/*
 * MeetMeEndEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MeetMeEndEvent.h"

namespace asteriskcpp {

    MeetMeEndEvent::MeetMeEndEvent(const std::string & values) :
    ManagerEvent(values) {
    }

    MeetMeEndEvent::~MeetMeEndEvent() {
    }

    const std::string& MeetMeEndEvent::getMeetMe() const {
        return (getProperty("MeetMe"));
    }

}/* namespace asterisk_cpp */
