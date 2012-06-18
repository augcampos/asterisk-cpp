/*
 * QueueMemberPenaltyEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueMemberPenaltyEvent.h"

namespace asteriskcpp {

	QueueMemberPenaltyEvent::QueueMemberPenaltyEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	QueueMemberPenaltyEvent::~QueueMemberPenaltyEvent()
	{

	}

	const std::string& QueueMemberPenaltyEvent::getQueue() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& QueueMemberPenaltyEvent::getLocation() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int QueueMemberPenaltyEvent::getPenalty() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
