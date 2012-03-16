/*
 * PriEventEvent.cpp
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/PriEventEvent.h"

namespace asteriskcpp {

	PriEventEvent::PriEventEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	PriEventEvent::~PriEventEvent()
	{
	}

	std::string PriEventEvent::getPriEvent() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int PriEventEvent::getPriEventCode() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	std::string PriEventEvent::getDChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int PriEventEvent::getSpan() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
