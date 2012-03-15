/*
 * ParkedCallTimeOutEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ParkedCallTimeOutEvent.h"

namespace asteriskcpp {

	ParkedCallTimeOutEvent::ParkedCallTimeOutEvent(const std::string & values) :
			AbstractParkedCallEvent(values) {
	}

	ParkedCallTimeOutEvent::~ParkedCallTimeOutEvent()
	{
	}

} /* namespace asteriskcpp */
