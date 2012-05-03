/*
 * ShowDialplanCompleteEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ShowDialplanCompleteEvent.h"

namespace asteriskcpp {

	ShowDialplanCompleteEvent::ShowDialplanCompleteEvent(const std::string & values) :
			ResponseEvent(values) {

	}

	ShowDialplanCompleteEvent::~ShowDialplanCompleteEvent()
	{
	}

	int ShowDialplanCompleteEvent::getListItems() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int ShowDialplanCompleteEvent::getListExtensions() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int ShowDialplanCompleteEvent::getListPriorities() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int ShowDialplanCompleteEvent::getListContexts() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
