/*
 * AbstractMonitorEvent.cpp
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractMonitorEvent.h"

namespace asteriskcpp {

	AbstractMonitorEvent::AbstractMonitorEvent(const std::string& values) :
			ManagerEvent(values) {
	}

	AbstractMonitorEvent::~AbstractMonitorEvent() {

	}

	const std::string& AbstractMonitorEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	const std::string& AbstractMonitorEvent::getUniqueId() const {
		return (getProperty("UniqueId"));
	}

} /* namespace asteriskcpp */
