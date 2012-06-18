/*
 * QueueEvent.cpp
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

	QueueEvent::QueueEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	QueueEvent::~QueueEvent() {
	}

	const std::string& QueueEvent::getUniqueId() const {
		return (getProperty("UniqueId"));
	}

	const std::string& QueueEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	int QueueEvent::getCount() const {
		return (convertFromString<int>(getProperty("Count")));
	}

	const std::string& QueueEvent::getQueue() const {
		return (getProperty("Queue"));
	}

}/* namespace asterisk_cpp */
