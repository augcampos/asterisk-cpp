/*
 * LogChannelEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/LogChannelEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

	LogChannelEvent::LogChannelEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	LogChannelEvent::~LogChannelEvent() {
	}

	const std::string& LogChannelEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	bool LogChannelEvent::getEnabled() const {
		return (getProperty<bool>("Enabled"));
	}

	int LogChannelEvent::getReason() const {
		return (convertFromString<int>(getProperty("Reason")));
	}

	const std::string& LogChannelEvent::getReasonTxt() const {
		return (getProperty("ReasonTxt"));
	}

} /* namespace asterisk_cpp */
