/*
 * SetVarAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SetVarAction.h"

namespace asteriskcpp {

    SetVarAction::SetVarAction() {
    }

    SetVarAction::SetVarAction(const std::string& variable, const std::string& value) {
        this->setVariable(variable);
        this->setValue(value);
    }

    SetVarAction::SetVarAction(const std::string& channel, const std::string& variable, const std::string& value) {
        this->setChannel(channel);
        this->setVariable(variable);
        this->setValue(value);
    }

    const std::string& SetVarAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SetVarAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& SetVarAction::getVariable() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SetVarAction::setVariable(const std::string& variable) {
        setSetterValue(__FUNCTION__, variable);
    }

    const std::string& SetVarAction::getValue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SetVarAction::setValue(const std::string& value) {
        setSetterValue(__FUNCTION__, value);
    }
} //NAMESPACE

