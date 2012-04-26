/*
 * QueueMemberStatusEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueMemberStatusEvent.h"

namespace asteriskcpp {

	QueueMemberStatusEvent::QueueMemberStatusEvent(const std::string & values) :
			QueueMemberEvent(values) {
	}

	QueueMemberStatusEvent::~QueueMemberStatusEvent()
	{
	}

} /* namespace asteriskcpp */
