/*
 * RegistryEntryEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RegistryEntryEvent.h"

namespace asteriskcpp {

	RegistryEntryEvent::RegistryEntryEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	RegistryEntryEvent::~RegistryEntryEvent()
	{
	}

	long RegistryEntryEvent::getRegistrationTime() const
	{
		return (getGetterValue<long>(__FUNCTION__));
	}

	int RegistryEntryEvent::getPort() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	const std::string& RegistryEntryEvent::getUsername() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& RegistryEntryEvent::getHost() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& RegistryEntryEvent::getState() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int RegistryEntryEvent::getRefresh() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
