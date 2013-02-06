/* 
 * File:   AgentCallbackLoginAction.cpp
 * Author: augcampos
 * 
 * Created on February 6, 2013, 4:02 AM
 */

#include "asteriskcpp/manager/actions/AgentCallbackLoginAction.h"

namespace asteriskcpp {

    AgentCallbackLoginAction::AgentCallbackLoginAction() {
    }

    AgentCallbackLoginAction::AgentCallbackLoginAction(const std::string& agent, const std::string& exten) {
        setAgent(agent);
        setExten(exten);
    }

    AgentCallbackLoginAction::AgentCallbackLoginAction(const std::string& agent, const std::string& exten, const std::string& context, bool ackCall, long wrapupTime) {
        setAgent(agent);
        setExten(exten);
        setContext(context);
        setAckCall(ackCall);
        setWrapupTime(wrapupTime);
    }

    AgentCallbackLoginAction::~AgentCallbackLoginAction() {
    }

    void AgentCallbackLoginAction::setAgent(const std::string& agent) {

    }

    const std::string& AgentCallbackLoginAction::getExten()const {
        return (getGetterValue(__FUNCTION__));
    }

    void AgentCallbackLoginAction::setExten(const std::string& exten) {
        setSetterValue(__FUNCTION__, exten);
    }

    const std::string& AgentCallbackLoginAction::getContext()const {
        return (getGetterValue(__FUNCTION__));
    }

    void AgentCallbackLoginAction::setContext(const std::string& context) {
        setSetterValue(__FUNCTION__, context);
    }

    bool AgentCallbackLoginAction::getAckCall() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    void AgentCallbackLoginAction::setAckCall(bool ackCall) {
        setSetterValue(__FUNCTION__, ackCall);
    }

    long AgentCallbackLoginAction::getWrapupTime() const {
        return (getGetterValue<long>(__FUNCTION__));
    }

    void AgentCallbackLoginAction::setWrapupTime(long wrapupTime) {
        setSetterValue(__FUNCTION__, wrapupTime);
    }

}