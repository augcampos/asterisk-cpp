/*
 * AbstractMeetMeEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractMeetMeEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

AbstractMeetMeEvent::AbstractMeetMeEvent(const std::string & values) :
		ManagerEvent(values) {
}

AbstractMeetMeEvent::~AbstractMeetMeEvent() {
}

std::string AbstractMeetMeEvent::getChannel() const {
	return (getProperty("Channel"));
}

std::string AbstractMeetMeEvent::getUniqueId() const {
	return (getProperty("UniqueId"));
}

std::string AbstractMeetMeEvent::getMeetMe() const {
	return (getProperty("MeetMe"));
}

int AbstractMeetMeEvent::getUserNum() const {
	return (convertFromString<int>(getProperty("tUserNum")));
}

} /* namespace asterisk_cpp */
