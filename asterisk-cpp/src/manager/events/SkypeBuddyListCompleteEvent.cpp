/*
 * SkypeBuddyListCompleteEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/SkypeBuddyListCompleteEvent.h"

namespace asteriskcpp {

	SkypeBuddyListCompleteEvent::SkypeBuddyListCompleteEvent(const std::string & values) :
			ResponseEvent(values) {

	}

	SkypeBuddyListCompleteEvent::~SkypeBuddyListCompleteEvent()
	{
	}

	int SkypeBuddyListCompleteEvent::getListItems() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
