/*
 * LeaveEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/LeaveEvent.h"

namespace asteriskcpp {

	LeaveEvent::LeaveEvent(const std::string & values) :
			QueueEvent(values) {
	}

	LeaveEvent::~LeaveEvent() {
	}

} /* namespace asterisk_cpp */
