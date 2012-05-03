/*
 * UnparkedCallEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/UnparkedCallEvent.h"

namespace asteriskcpp {

	UnparkedCallEvent::UnparkedCallEvent(const std::string & values) :
			AbstractParkedCallEvent(values) {

	}

	UnparkedCallEvent::~UnparkedCallEvent()
	{
	}

	std::string UnparkedCallEvent::getFrom() const
	{
		return (getGetterValue(__FUNCTION__));
	}
} /* namespace asteriskcpp */
