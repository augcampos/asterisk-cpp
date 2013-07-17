/*
 * ZapHangupAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ZapHangupAction.h"

namespace asteriskcpp {

    ZapHangupAction::ZapHangupAction() {
    }

    ZapHangupAction::ZapHangupAction(int zapChannel) {
        this->setZapChannel(zapChannel);
    }

    int ZapHangupAction::getZapChannel() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void ZapHangupAction::setZapChannel(int channel) {
        setSetterValue<int>(__FUNCTION__, channel);
    }
} //NAMESPACE

