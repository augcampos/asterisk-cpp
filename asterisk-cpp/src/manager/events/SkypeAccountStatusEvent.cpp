/*
 * SkypeAccountStatusEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/SkypeAccountStatusEvent.h"

namespace asteriskcpp {

	SkypeAccountStatusEvent::SkypeAccountStatusEvent(const std::string & values) :
			ManagerEvent(values) {

	}

	SkypeAccountStatusEvent::~SkypeAccountStatusEvent()
	{
	}

	const std::string& SkypeAccountStatusEvent::getUsername() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& SkypeAccountStatusEvent::getStatus() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
