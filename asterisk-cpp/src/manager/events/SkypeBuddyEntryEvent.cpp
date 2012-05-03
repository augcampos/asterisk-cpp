/*
 * SkypeBuddyEntryEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/SkypeBuddyEntryEvent.h"

namespace asteriskcpp {

	SkypeBuddyEntryEvent::SkypeBuddyEntryEvent(const std::string & values) :
			ResponseEvent(values) {

	}

	SkypeBuddyEntryEvent::~SkypeBuddyEntryEvent()
	{
	}

	std::string SkypeBuddyEntryEvent::getBuddy() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SkypeBuddyEntryEvent::getStatus() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SkypeBuddyEntryEvent::getFullname() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
