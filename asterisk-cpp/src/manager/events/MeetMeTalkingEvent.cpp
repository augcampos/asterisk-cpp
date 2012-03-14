/*
 * MeetMeTalkingEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MeetMeTalkingEvent.h"

namespace asteriskcpp {

	MeetMeTalkingEvent::MeetMeTalkingEvent(const std::string& values) :
			AbstractMeetMeEvent(values) {
	}

	MeetMeTalkingEvent::~MeetMeTalkingEvent()
	{
	}

	bool MeetMeTalkingEvent::getStatus() const
	{
		return (getProperty<bool>("Status"));
	}

} /* namespace asteriskcpp */
