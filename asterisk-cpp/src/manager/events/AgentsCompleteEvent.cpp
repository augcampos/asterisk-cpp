/*
 * AgentsCompleteEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentsCompleteEvent.h"

namespace asteriskcpp {

AgentsCompleteEvent::AgentsCompleteEvent(const std::string & values) :
		ResponseEvent(values) {
}
AgentsCompleteEvent::~AgentsCompleteEvent() {
}

} //NS

