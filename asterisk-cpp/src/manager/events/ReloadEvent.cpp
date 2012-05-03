/*
 * ReloadEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include <boost/algorithm/string.hpp>
#include "asteriskcpp/manager/events/ReloadEvent.h"

namespace asteriskcpp {

	const static std::string STATUS_ENABLED = "Enabled";
	const static std::string STATUS_DISABLED = "Disabled";

	ReloadEvent::ReloadEvent(const std::string & values) :
			ManagerEvent(values) {

	}

	ReloadEvent::~ReloadEvent()
	{
	}

	std::string ReloadEvent::getModule() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string ReloadEvent::getStatus() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string ReloadEvent::getMessage() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	bool ReloadEvent::isEnabled() const
	{
		return (boost::iequals(getStatus(), STATUS_ENABLED));
	}

	bool ReloadEvent::isDisabled() const
	{
		return (boost::iequals(getStatus(), STATUS_DISABLED));
	}
} /* namespace asteriskcpp */
