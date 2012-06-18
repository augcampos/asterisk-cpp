/*
 * ParkedCallEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ParkedCallEvent.h"

namespace asteriskcpp {

	ParkedCallEvent::ParkedCallEvent(const std::string & values) :
			AbstractParkedCallEvent(values) {
	}

	ParkedCallEvent::~ParkedCallEvent()
	{
	}

	const std::string& ParkedCallEvent::getFrom() const
	{
		return (getProperty("From"));
	}

	int ParkedCallEvent::getTimeout() const
	{
		return (getProperty<int>("Timeout"));
	}
} /* namespace asteriskcpp */
