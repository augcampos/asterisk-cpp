/*
 * OriginateFailureEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/OriginateFailureEvent.h"

namespace asteriskcpp {

	OriginateFailureEvent::OriginateFailureEvent(const std::string & values) :
			OriginateResponseEvent(values) {
		setProperty("Response", RESPONSE_FAILURE);

	}

	OriginateFailureEvent::~OriginateFailureEvent()
	{
	}

} /* namespace asteriskcpp */
