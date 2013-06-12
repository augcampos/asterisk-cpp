/*
 * AgentsCompleteEvent.h
 *
 *  Created on: Aug 3, 2011
 *      Author: a-campos
 */

#ifndef AGENTSCOMPLETEEVENT_H_
#define AGENTSCOMPLETEEVENT_H_

#include "asteriskcpp/manager/events/ResponseEvent.h"

namespace asteriskcpp {

    /**
     * An AgentsCompleteEvent is triggered after the state of all agents has been
     * reported in response to an AgentsAction.<p>
     * Available since Asterisk 1.2
     *
     * @see org.asteriskjava.manager.action.AgentsAction
     * @since 0.2
     */
    class AgentsCompleteEvent : public ResponseEvent {
    public:
        AgentsCompleteEvent(const std::string & values);
        virtual ~AgentsCompleteEvent();
    };

}

#endif /* AGENTSCOMPLETEEVENT_H_ */
