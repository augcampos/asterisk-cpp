/*
 * UnholdEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/UnholdEvent.h"

namespace asteriskcpp {

	UnholdEvent::UnholdEvent(const std::string & values) :
		HoldEvent(values) {

	}

	UnholdEvent::~UnholdEvent()
	{
	}

} /* namespace asteriskcpp */
