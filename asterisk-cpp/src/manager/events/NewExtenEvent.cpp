/*
 * NewExtenEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/NewExtenEvent.h"

namespace asteriskcpp {

	NewExtenEvent::NewExtenEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	NewExtenEvent::~NewExtenEvent()
	{
	}

	std::string NewExtenEvent::getUniqueId() const
	{
		return (getProperty("UniqueId"));
	}

	std::string NewExtenEvent::getApplication() const
	{
		return (getProperty("Application"));
	}

	std::string NewExtenEvent::getAppData() const
	{
		return (getProperty("AppData"));
	}

	std::string NewExtenEvent::getChannel() const
	{
		return (getProperty("Channel"));
	}

	std::string NewExtenEvent::getContext() const
	{
		return (getProperty("Context"));
	}

	std::string NewExtenEvent::getExtension() const
	{
		return (getProperty("Extension"));
	}

	int NewExtenEvent::getPriority() const
	{
		return (getProperty<int>("Mailbox"));
	}
} /* namespace asteriskcpp */
