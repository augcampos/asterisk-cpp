/* 
 * File:   AgentLogoffAction.cpp
 * Author: augcampos
 * 
 * Created on June 20, 2013, 1:54 AM
 */

#include "asteriskcpp/manager/actions/AgentLogoffAction.h"

namespace asteriskcpp {

    AgentLogoffAction::AgentLogoffAction() {
    }

    AgentLogoffAction::AgentLogoffAction(const std::string& agent) {
        this->setAgent(agent);
    }

    AgentLogoffAction::AgentLogoffAction(const std::string& agent, bool soft) {
        this->setAgent(agent);
        this->setSoft(soft);
    }

    AgentLogoffAction::~AgentLogoffAction() {
    }

    const std::string& AgentLogoffAction::getAgent() const {
        return (getGetterValue(__FUNCTION__));
    }

    void AgentLogoffAction::setAgent(const std::string& agent) {
        setSetterValue(__FUNCTION__, agent);
    }

    bool AgentLogoffAction::getSoft() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    void AgentLogoffAction::setSoft(bool soft) {
        setSetterValue(__FUNCTION__, soft);
    }

}