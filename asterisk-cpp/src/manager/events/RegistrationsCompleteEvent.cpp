/*
 * RegistrationsCompleteEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RegistrationsCompleteEvent.h"

namespace asteriskcpp {

	RegistrationsCompleteEvent::RegistrationsCompleteEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	RegistrationsCompleteEvent::~RegistrationsCompleteEvent()
	{

	}

	int RegistrationsCompleteEvent::getListItems() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	const std::string& RegistrationsCompleteEvent::getEventList() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
