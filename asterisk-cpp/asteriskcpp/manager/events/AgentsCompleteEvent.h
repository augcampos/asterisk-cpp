/*
 * AgentsCompleteEvent.h
 *
 *  Created on: Aug 3, 2011
 *      Author: a-campos
 */

#ifndef AGENTSCOMPLETEEVENT_H_
#define AGENTSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

/**
 * An AgentsCompleteEvent is triggered after the state of all agents has been
 * reported in response to an AgentsAction.<p>
 * Available since Asterisk 1.2
 *
 * @see org.asteriskjava.manager.action.AgentsAction
 * @since 0.2
 */
class AgentsCompleteEvent: public ResponseEvent {
public:
	inline static std::string getEventName() {
		return ("AgentsCompleteEvent");
	}
	AgentsCompleteEvent(const std::string & values) :
			ResponseEvent(values) {
	}
	virtual ~AgentsCompleteEvent() {
	}
};

}

#endif /* AGENTSCOMPLETEEVENT_H_ */
