/*
 * AgentDumpEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentDumpEvent.h"

namespace asteriskcpp {

	AgentDumpEvent::AgentDumpEvent(const std::string & values) :
			AbstractAgentEvent(values) {
	}
	AgentDumpEvent::~AgentDumpEvent() {
	}

} //NS

