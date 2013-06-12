/*
 * AgentLogoffEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTLOGOFFEVENT_H_
#define AGENTLOGOFFEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    class AgentLogoffEvent : public ManagerEvent {
    public:
        AgentLogoffEvent(const std::string & values);
        virtual ~AgentLogoffEvent();

        /**
         * Gets the name of the agent that logged off.
         */
        const std::string& getAgent() const;

        const std::string& getLoginTime() const;

    };

}

#endif /* AGENTLOGOFFEVENT_H_ */
