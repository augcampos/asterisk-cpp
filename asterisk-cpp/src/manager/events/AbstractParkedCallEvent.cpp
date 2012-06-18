/*
 * AbstractParkedCallEvent.cpp
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractParkedCallEvent.h"

namespace asteriskcpp {

	AbstractParkedCallEvent::AbstractParkedCallEvent(const std::string& values) :
			AbstractChannelEvent(values) {
	}

	AbstractParkedCallEvent::~AbstractParkedCallEvent() {
	}

	const std::string& AbstractParkedCallEvent::getExten() const {
		return (getProperty("Exten"));
	}

	const std::string& AbstractParkedCallEvent::getParkingLot() const {
		return (getProperty("ParkingLot"));
	}

} /* namespace asteriskcpp */
