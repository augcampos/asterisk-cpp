/*
 * NewStateEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/NewStateEvent.h"

namespace asteriskcpp {

	NewStateEvent::NewStateEvent(const std::string & values) :
			AbstractChannelStateEvent(values) {
	}

	NewStateEvent::~NewStateEvent()
	{
		// TODO Auto-generated destructor stub
	}

} /* namespace asteriskcpp */
