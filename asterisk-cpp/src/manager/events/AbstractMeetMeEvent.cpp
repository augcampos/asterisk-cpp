/*
 * AbstractMeetMeEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractMeetMeEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

	AbstractMeetMeEvent::AbstractMeetMeEvent(const std::string& values) :
			ManagerEvent(values) {
	}

	AbstractMeetMeEvent::~AbstractMeetMeEvent() {
	}

	const std::string& AbstractMeetMeEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	const std::string& AbstractMeetMeEvent::getUniqueId() const {
		return (getProperty("UniqueId"));
	}

	const std::string& AbstractMeetMeEvent::getMeetMe() const {
		return (getProperty("MeetMe"));
	}

	int AbstractMeetMeEvent::getUserNum() const {
		return (convertFromString<int>(getProperty("UserNum")));
	}

} /* namespace asterisk_cpp */
