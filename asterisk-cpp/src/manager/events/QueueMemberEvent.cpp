/*
 * QueueMemberEvent.cpp
 *
 *  Created on: Mar 27, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueMemberEvent.h"
#include <boost/algorithm/string.hpp>

namespace asteriskcpp {

	const static std::string MEMBERSHIP_STATIC = "static";
	const static std::string MEMBERSHIP_DYNAMIC = "dynamic";

	QueueMemberEvent::QueueMemberEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	QueueMemberEvent::~QueueMemberEvent()
	{
	}

	const std::string& QueueMemberEvent::getQueue() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& QueueMemberEvent::getLocation() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& QueueMemberEvent::getMembership() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	bool QueueMemberEvent::isStatic() const
	{
		return (boost::iequals(getMembership(), MEMBERSHIP_STATIC));
	}

	bool QueueMemberEvent::isDynamic() const
	{
		return (boost::iequals(getMembership(), MEMBERSHIP_DYNAMIC));
	}

	int QueueMemberEvent::getPenalty() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueMemberEvent::getCallsTaken() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	long QueueMemberEvent::getLastCall() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	int QueueMemberEvent::getStatus() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	bool QueueMemberEvent::getPaused() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	const std::string& QueueMemberEvent::getName() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& QueueMemberEvent::getMemberName() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
