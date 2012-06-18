/*
 * QueueMemberAddedEvent.cpp
 *
 *  Created on: Mar 27, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueMemberAddedEvent.h"

namespace asteriskcpp {

	QueueMemberAddedEvent::QueueMemberAddedEvent(const std::string & values) :
			AbstractQueueMemberEvent(values) {
	}

	QueueMemberAddedEvent::~QueueMemberAddedEvent()
	{
	}

	const std::string& QueueMemberAddedEvent::getMembership() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int QueueMemberAddedEvent::getPenalty() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueMemberAddedEvent::getCallsTaken() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	long QueueMemberAddedEvent::getLastCall() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	int QueueMemberAddedEvent::getStatus() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	bool QueueMemberAddedEvent::getPaused() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
