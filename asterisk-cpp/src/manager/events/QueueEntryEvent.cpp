/*
 * QueueEntryEvent.cpp
 *
 *  Created on: Mar 27, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueEntryEvent.h"

namespace asteriskcpp {

	QueueEntryEvent::QueueEntryEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	QueueEntryEvent::~QueueEntryEvent()
	{
	}

	std::string QueueEntryEvent::getQueue() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int QueueEntryEvent::getPosition() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	std::string QueueEntryEvent::getChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string QueueEntryEvent::getUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string QueueEntryEvent::getCallerId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string QueueEntryEvent::getCallerIdName() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string QueueEntryEvent::getCallerIdNum() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	long QueueEntryEvent::getWait() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
