/*
 * StatusEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/StatusEvent.h"

namespace asteriskcpp {

	StatusEvent::StatusEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	StatusEvent::~StatusEvent()
	{
	}

	std::string StatusEvent::getChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getCallerId() const
	{
		return (getCallerIdNum());
	}

	std::string StatusEvent::getCallerIdNum() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getCallerIdName() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getAccountCode() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getAccount() const
	{
		return (getAccountCode());
	}

	int StatusEvent::getChannelState() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	std::string StatusEvent::getChannelStateDesc() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getState() const
	{
		return (getChannelStateDesc());
	}

	std::string StatusEvent::getContext() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getExtension() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int StatusEvent::getPriority() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int StatusEvent::getSeconds() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	std::string StatusEvent::getBridgedChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getLink() const
	{
		return (getBridgedChannel());
	}

	std::string StatusEvent::getBridgedUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string StatusEvent::getUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::map<std::string, std::string> StatusEvent::getVariables() const
	{
		//TODO implement
		std::map<std::string, std::string> rt;
		return (rt);
	}
} /* namespace asteriskcpp */
