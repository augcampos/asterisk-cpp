/*
 * SetCdrUserFieldAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SetCdrUserFieldAction.h"

namespace asteriskcpp {

    SetCdrUserFieldAction::SetCdrUserFieldAction() {
    }
    
    SetCdrUserFieldAction::~SetCdrUserFieldAction() {
    }    

    SetCdrUserFieldAction::SetCdrUserFieldAction(const std::string& channel, const std::string& userField) {
        this->setChannel(channel);
        this->setUserField(userField);
    }

    SetCdrUserFieldAction::SetCdrUserFieldAction(const std::string& channel, const std::string& userField, bool append) {
        this->setChannel(channel);
        this->setUserField(userField);
        this->setAppend(append);
    }

    const std::string& SetCdrUserFieldAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SetCdrUserFieldAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& SetCdrUserFieldAction::getUserField() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SetCdrUserFieldAction::setUserField(const std::string& userField) {
        setSetterValue(__FUNCTION__, userField);
    }

    bool SetCdrUserFieldAction::getAppend() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    void SetCdrUserFieldAction::setAppend(bool append) {
        setSetterValue<bool>(__FUNCTION__, append);
    }
} //NAMESPACE

