/*
 * RtpSenderStatEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RtpSenderStatEvent.h"

namespace asteriskcpp {

	RtpSenderStatEvent::RtpSenderStatEvent(const std::string & values) :
			AbstractRtpStatEvent(values) {

	}

	RtpSenderStatEvent::~RtpSenderStatEvent()
	{
	}

	long RtpSenderStatEvent::getSentPackets() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtpSenderStatEvent::getSrCount() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	double RtpSenderStatEvent::getRtt() const
	{
		return (getGetterValue<double>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
