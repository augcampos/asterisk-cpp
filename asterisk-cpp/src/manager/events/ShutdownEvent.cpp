/*
 * ShutdownEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ShutdownEvent.h"

namespace asteriskcpp {

	ShutdownEvent::ShutdownEvent(const std::string & values) :
			ManagerEvent(values) {

	}

	ShutdownEvent::~ShutdownEvent()
	{
	}

	const std::string& ShutdownEvent::getShutdown() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	bool ShutdownEvent::getRestart() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
