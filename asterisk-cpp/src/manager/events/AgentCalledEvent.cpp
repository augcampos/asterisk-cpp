/*
 * AgentCalledEvent.cpp
 *
 *  Created on: Sep 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentCalledEvent.h"

namespace asteriskcpp {

    AgentCalledEvent::AgentCalledEvent(const std::string& values) :
    ManagerEvent(values) {
    }

    AgentCalledEvent::~AgentCalledEvent() {
    }

    const std::string& AgentCalledEvent::getQueue() const {
        return (getProperty("Queue"));
    }

    const std::string& AgentCalledEvent::getAgentCalled() const {
        return (getProperty("AgentCalled"));
    }

    const std::string& AgentCalledEvent::getAgentName() const {
        return (getProperty("AgentName"));
    }

    const std::string& AgentCalledEvent::getChannelCalling() const {
        return (getProperty("ChannelCalling"));
    }

    const std::string& AgentCalledEvent::getDestinationChannel() const {
        return (getProperty("DestinationChannel"));
    }

    const std::string& AgentCalledEvent::getCallerIdNum() const {
        return (getProperty("CallerIdNum"));
    }

    const std::string& AgentCalledEvent::getCallerId() const {
        return (getProperty("CallerID"));

    }

    const std::string& AgentCalledEvent::getCallerIdName() const {
        return (getProperty("CallerIdName"));
    }

    const std::string& AgentCalledEvent::getContext() const {
        return (getProperty("Context"));
    }

    const std::string& AgentCalledEvent::getExtension() const {
        return (getProperty("Extension"));
    }

    const std::string& AgentCalledEvent::getPriority() const {
        return (getProperty("Priority"));
    }

    std::map<std::string, std::string> AgentCalledEvent::getVariables() const {
        //TODO implement
        std::map<std::string, std::string> rt;
        return (rt);
    }

}
