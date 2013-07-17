/*
 * PlayDtmfAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/PlayDtmfAction.h"

namespace asteriskcpp {

    PlayDtmfAction::PlayDtmfAction() {
    }

    PlayDtmfAction::PlayDtmfAction(const std::string& digit) {
        this->setDigit(digit);
    }

    const std::string& PlayDtmfAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void PlayDtmfAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& PlayDtmfAction::getDigit() const {
        return (getGetterValue(__FUNCTION__));
    }

    void PlayDtmfAction::setDigit(const std::string& digit) {
        setSetterValue(__FUNCTION__, digit);
    }
} //NAMESPACE

