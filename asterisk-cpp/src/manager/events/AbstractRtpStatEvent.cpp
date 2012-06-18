/*
 * AbstractRtpStatEvent.cpp
 *
 *  Created on: Feb 10, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractRtpStatEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

	AbstractRtpStatEvent::AbstractRtpStatEvent(const std::string& values) :
			ManagerEvent(values) {

	}

	AbstractRtpStatEvent::~AbstractRtpStatEvent() {
	}

	long AbstractRtpStatEvent::getSsrc() const {
		return (convertFromString<long>(getProperty("Ssrc")));
	}

	long AbstractRtpStatEvent::getLostPackets() const {
		return (convertFromString<long>(getProperty("LostPackets")));
	}

	double AbstractRtpStatEvent::getJitter() const {
		return (convertFromString<double>(getProperty("LostPackets")));
	}

} /* namespace asteriskcpp */
