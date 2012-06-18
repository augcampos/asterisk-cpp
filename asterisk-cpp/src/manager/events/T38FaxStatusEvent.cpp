/*
 * T38FaxStatusEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/T38FaxStatusEvent.h"

namespace asteriskcpp {

	T38FaxStatusEvent::T38FaxStatusEvent(const std::string & values) :
			AbstractFaxEvent(values) {

	}

	T38FaxStatusEvent::~T38FaxStatusEvent()
	{
	}

	const std::string& T38FaxStatusEvent::getMaxLag() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& T38FaxStatusEvent::getTotalLag() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& T38FaxStatusEvent::getAverageLag() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int T38FaxStatusEvent::getTotalEvents() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	const std::string& T38FaxStatusEvent::getT38SessionDuration() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int T38FaxStatusEvent::getT38PacketsSent() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getT38OctetsSent() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	const std::string& T38FaxStatusEvent::getAverageTxDataRate() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int T38FaxStatusEvent::getT38PacketsReceived() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getT38OctetsReceived() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	const std::string& T38FaxStatusEvent::getAverageRxDataRate() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int T38FaxStatusEvent::getJitterBufferOverflows() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getMinimumJitterSpace() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getUnrecoverablePackets() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getTotalLagInMilliSeconds() const
	{
		//todo: stripunit
		return (getGetterValue<int>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getMaxLagInMilliSeconds() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	double T38FaxStatusEvent::getT38SessionDurationInSeconds() const
	{
		return (getGetterValue<double>(__FUNCTION__));
	}

	double T38FaxStatusEvent::getAverageLagInMilliSeconds() const
	{
		return (getGetterValue<double>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getAverageTxDataRateInBps() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int T38FaxStatusEvent::getAverageRxDataRateInBps() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
