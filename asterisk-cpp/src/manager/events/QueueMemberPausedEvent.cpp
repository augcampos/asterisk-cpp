/*
 * QueueMemberPausedEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueMemberPausedEvent.h"

namespace asteriskcpp {

	QueueMemberPausedEvent::QueueMemberPausedEvent(const std::string & values) :
			AbstractQueueMemberEvent(values) {
	}

	QueueMemberPausedEvent::~QueueMemberPausedEvent()
	{

	}

	bool QueueMemberPausedEvent::getPaused() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	const std::string& QueueMemberPausedEvent::getReason() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
