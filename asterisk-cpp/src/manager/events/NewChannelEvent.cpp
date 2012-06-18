/*
 * NewChannelEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: a-campos
 */

#include "asteriskcpp/manager/events/NewChannelEvent.h"

namespace asteriskcpp {

	NewChannelEvent::NewChannelEvent(const std::string & values) :
			AbstractChannelStateEvent(values) {
	}

	NewChannelEvent::~NewChannelEvent() {
	}

	const std::string& NewChannelEvent::getAccountCode() const {
		return (getProperty("Channel"));
	}

	const std::string& NewChannelEvent::getContext() const {
		return (getProperty("Channel"));
	}

	const std::string& NewChannelEvent::getExten() const {
		return (getProperty("Exten"));
	}

} /* namespace asteriskcpp */
