/*
 * ZapDialOffhookAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ZapDialOffhookAction.h"

namespace asteriskcpp {

    ZapDialOffhookAction::ZapDialOffhookAction() {
    }

    ZapDialOffhookAction::ZapDialOffhookAction(const std::string& number, int zapChannel) {
        this->setNumber(number);
        this->setZapChannel(zapChannel);
    }
    
    ZapDialOffhookAction::~ZapDialOffhookAction() {
    }    

    int ZapDialOffhookAction::getZapChannel() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void ZapDialOffhookAction::setZapChannel(int channel) {
        setSetterValue<int>(__FUNCTION__, channel);
    }

    const std::string& ZapDialOffhookAction::getNumber() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ZapDialOffhookAction::setNumber(const std::string& number) {
        setSetterValue(__FUNCTION__, number);
    }
} //NAMESPACE

