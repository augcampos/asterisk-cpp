/*
 * ZapTransferAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ZapTransferAction.h"

namespace asteriskcpp {

    ZapTransferAction::ZapTransferAction() {
    }
    
    ZapTransferAction::~ZapTransferAction() {
    }    

    int ZapTransferAction::getZapChannel() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void ZapTransferAction::setZapChannel(int channel) {
        setSetterValue<int>(__FUNCTION__, channel);
    }
} //NAMESPACE

