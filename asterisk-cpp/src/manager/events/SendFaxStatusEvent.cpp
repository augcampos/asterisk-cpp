/*
 * SendFaxStatusEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/SendFaxStatusEvent.h"

namespace asteriskcpp {

	SendFaxStatusEvent::SendFaxStatusEvent(const std::string & values) :
			AbstractFaxEvent(values) {

	}

	SendFaxStatusEvent::~SendFaxStatusEvent()
	{
	}

	std::string SendFaxStatusEvent::getContext() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SendFaxStatusEvent::getExten() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SendFaxStatusEvent::getStatus() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SendFaxStatusEvent::getCallerId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SendFaxStatusEvent::getLocalStationId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SendFaxStatusEvent::getFileName() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
