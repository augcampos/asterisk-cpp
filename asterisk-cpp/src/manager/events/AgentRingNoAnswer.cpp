/*
 * AgentRingNoAnswer.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentRingNoAnswer.h"

namespace asteriskcpp {

	AgentRingNoAnswer::AgentRingNoAnswer(const std::string & values) :
			AbstractAgentEvent(values) {
	}
	AgentRingNoAnswer::~AgentRingNoAnswer() {
	}

	const std::string& AgentRingNoAnswer::getRingtime() const {
		return (getProperty("Ringtime"));
	}

} //NS

