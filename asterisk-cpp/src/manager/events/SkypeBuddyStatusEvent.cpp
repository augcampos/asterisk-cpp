/*
 * SkypeBuddyStatusEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include <boost/regex.hpp>
#include "asteriskcpp/manager/events/SkypeBuddyStatusEvent.h"

namespace asteriskcpp {

	const static boost::regex BUDDY_PATTERN("Skype/(.*)@(.*)");

	SkypeBuddyStatusEvent::SkypeBuddyStatusEvent(const std::string & values) :
			ManagerEvent(values) {

	}

	SkypeBuddyStatusEvent::~SkypeBuddyStatusEvent()
	{
	}

	const std::string& SkypeBuddyStatusEvent::getBuddy() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& SkypeBuddyStatusEvent::getUser() const
	{
		return (buddyGroup(1));
	}

	const std::string& SkypeBuddyStatusEvent::getBuddySkypename() const
	{
		return (buddyGroup(2));
	}

	const std::string& SkypeBuddyStatusEvent::getBuddyStatus() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& SkypeBuddyStatusEvent::buddyGroup(const int group) const {
		//TODO: verify code
		if (!buddy_group.empty()) {
			std::string buddy = getBuddy();
			if (!buddy.empty())
			{

				boost::cmatch buddyMatcher;
				if (boost::regex_match(buddy.c_str(), buddyMatcher, BUDDY_PATTERN)) {
					buddy_group = (std::string)(buddyMatcher[group]);
				}
			}
		}
		return (buddy_group);
	}
} /* namespace asteriskcpp */
