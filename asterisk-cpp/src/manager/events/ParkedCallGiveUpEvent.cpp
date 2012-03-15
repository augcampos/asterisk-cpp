/*
 * ParkedCallGiveUpEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ParkedCallGiveUpEvent.h"

namespace asteriskcpp {

	ParkedCallGiveUpEvent::ParkedCallGiveUpEvent(const std::string & values) :
			AbstractParkedCallEvent(values) {
	}

	ParkedCallGiveUpEvent::~ParkedCallGiveUpEvent()
	{
	}

} /* namespace asteriskcpp */
