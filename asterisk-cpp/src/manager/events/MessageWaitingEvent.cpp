/*
 * MessageWaitingEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MessageWaitingEvent.h"

namespace asteriskcpp {

	MessageWaitingEvent::MessageWaitingEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	MessageWaitingEvent::~MessageWaitingEvent()
	{
	}

	std::string MessageWaitingEvent::getMailbox() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int MessageWaitingEvent::getWaiting() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int MessageWaitingEvent::getNew() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int MessageWaitingEvent::getOld() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
