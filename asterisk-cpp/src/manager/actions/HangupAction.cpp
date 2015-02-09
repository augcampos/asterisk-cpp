/*
 * HangupAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/HangupAction.h"

namespace asteriskcpp {

    HangupAction::HangupAction() {
    }

    HangupAction::~HangupAction() {
    }    
    
    HangupAction::HangupAction(const std::string& channel) {
        this->setChannel(channel);
    }

    HangupAction::HangupAction(int cause, const std::string& channel) {
        this->setCause(cause);
        this->setChannel(channel);
    }

    const std::string& HangupAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void HangupAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    int HangupAction::getCause() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void HangupAction::setCause(int cause) {
        setSetterValue<int>(__FUNCTION__, cause);
    }
} //NAMESPACE

