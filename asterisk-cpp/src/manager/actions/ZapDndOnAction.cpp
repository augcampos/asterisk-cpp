/*
 * ZapDndOnAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ZapDndOnAction.h"

namespace asteriskcpp {

    ZapDndOnAction::ZapDndOnAction() {
    }

    ZapDndOnAction::~ZapDndOnAction() {
    }    

    ZapDndOnAction::ZapDndOnAction(int zapChannel) {
        this->setZapChannel(zapChannel);
    }

    int ZapDndOnAction::getZapChannel() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void ZapDndOnAction::setZapChannel(int channel) {
        setSetterValue<int>(__FUNCTION__, channel);
    }
} //NAMESPACE

