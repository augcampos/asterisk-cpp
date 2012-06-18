/*
 * AlarmEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AlarmEvent.h"

namespace asteriskcpp {
	AlarmEvent::AlarmEvent(const std::string & values) :
			ManagerEvent(values) {
	}
	AlarmEvent::~AlarmEvent() {
	}

	const std::string& AlarmEvent::getAlarm() const {
		return (getProperty("Alarm"));
	}

	const std::string& AlarmEvent::getChannel() const {
		return (getProperty("Channel"));
	}

} //NS

