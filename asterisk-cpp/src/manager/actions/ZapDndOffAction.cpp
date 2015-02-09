/*
 * ZapDndOffAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ZapDndOffAction.h"

namespace asteriskcpp {

    ZapDndOffAction::ZapDndOffAction() {
    }

    ZapDndOffAction::ZapDndOffAction(int zapChannel) {
        this->setZapChannel(zapChannel);
    }
    
    ZapDndOffAction::~ZapDndOffAction() {
    }

    int ZapDndOffAction::getZapChannel() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void ZapDndOffAction::setZapChannel(int channel) {
        setSetterValue<int>(__FUNCTION__, channel);
    }
} //NAMESPACE

