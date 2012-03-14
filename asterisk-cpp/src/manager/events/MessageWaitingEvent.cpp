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
		return (getProperty("Mailbox"));
	}

	int MessageWaitingEvent::getWaiting() const
	{
		return (getProperty<int>("Waiting"));
	}

	int MessageWaitingEvent::getNew() const
	{
		return (getProperty<int>("New"));
	}

	int MessageWaitingEvent::getOld() const
	{
		return (getProperty<int>("Old"));
	}
} /* namespace asteriskcpp */
