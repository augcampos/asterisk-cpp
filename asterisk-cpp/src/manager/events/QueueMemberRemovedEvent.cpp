/*
 * QueueMemberRemovedEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueMemberRemovedEvent.h"

namespace asteriskcpp {

	QueueMemberRemovedEvent::QueueMemberRemovedEvent(const std::string & values) :
			AbstractQueueMemberEvent(values) {
	}

	QueueMemberRemovedEvent::~QueueMemberRemovedEvent()
	{

	}

} /* namespace asteriskcpp */
