/*
 * RtcpSentEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RtcpSentEvent.h"

namespace asteriskcpp {

	RtcpSentEvent::RtcpSentEvent(const std::string & values) :
			AbstractRtcpEvent(values) {

	}

	RtcpSentEvent::~RtcpSentEvent()
	{
	}

	const std::string& RtcpSentEvent::getToAddress() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int RtcpSentEvent::getToPort() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	long RtcpSentEvent::getOurSsrc() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	double RtcpSentEvent::getSentNtp() const
	{
		return (getGetterValue<double>(__FUNCTION__));
	}

	long RtcpSentEvent::getSentRtp() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpSentEvent::getSentPackets() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpSentEvent::getSentOctets() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpSentEvent::getCumulativeLoss() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpSentEvent::getTheirLastSr() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
