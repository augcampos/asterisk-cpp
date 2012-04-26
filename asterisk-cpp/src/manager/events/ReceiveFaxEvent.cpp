/*
 * ReceiveFaxEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ReceiveFaxEvent.h"

namespace asteriskcpp {

	ReceiveFaxEvent::ReceiveFaxEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	ReceiveFaxEvent::~ReceiveFaxEvent()
	{

	}

	std::string ReceiveFaxEvent::getChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string ReceiveFaxEvent::getContext() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string ReceiveFaxEvent::getExten() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string ReceiveFaxEvent::getCallerId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string ReceiveFaxEvent::getRemoteStationId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string ReceiveFaxEvent::getLocalStationId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int ReceiveFaxEvent::getPagesTransferred() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	std::string ReceiveFaxEvent::getResolution() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int ReceiveFaxEvent::getTransferRate() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	std::string ReceiveFaxEvent::getFileName() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
