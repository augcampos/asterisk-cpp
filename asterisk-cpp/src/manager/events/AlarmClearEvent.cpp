/*
 * AlarmClearEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AlarmClearEvent.h"

namespace asteriskcpp {

	AlarmClearEvent::AlarmClearEvent(const std::string & values) :
			ManagerEvent(values) {
	}
	AlarmClearEvent::~AlarmClearEvent() {
	}

	std::string AlarmClearEvent::getChannel() const {
		return (getProperty("Channel"));
	}

} //NS

