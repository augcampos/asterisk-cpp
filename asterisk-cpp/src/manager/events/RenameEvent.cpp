/*
 * RenameEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RenameEvent.h"

namespace asteriskcpp {

	RenameEvent::RenameEvent(const std::string & values) :
			ManagerEvent(values) {

	}

	RenameEvent::~RenameEvent()
	{

	}

	std::string RenameEvent::getNewname() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string RenameEvent::getChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string RenameEvent::getOldname() const
	{
		return (getChannel());
	}

	std::string RenameEvent::getUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string RenameEvent::getNewUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
