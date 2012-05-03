/*
 * RtcpReceivedEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RtcpReceivedEvent.h"

namespace asteriskcpp {

	RtcpReceivedEvent::RtcpReceivedEvent(const std::string & values) :
			AbstractRtcpEvent(values) {

	}

	RtcpReceivedEvent::~RtcpReceivedEvent()
	{

	}

	std::string RtcpReceivedEvent::getFromAddress() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int RtcpReceivedEvent::getFromPort() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	long RtcpReceivedEvent::getPt() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpReceivedEvent::getReceptionReports() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpReceivedEvent::getSenderSsrc() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpReceivedEvent::getPacketsLost() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpReceivedEvent::getHighestSequence() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	long RtcpReceivedEvent::getSequenceNumberCycles() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	double RtcpReceivedEvent::getLastSr() const
	{
		return (getGetterValue<double>(__FUNCTION__));
	}

	long RtcpReceivedEvent::getRtt() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
