/*
 * ParkAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ParkAction.h"

namespace asteriskcpp {

    ParkAction::ParkAction() {
    }

    ParkAction::ParkAction(const std::string& channel2) {
        this->setChannel2(channel2);
    }

    ParkAction::ParkAction(const std::string& channel2, int timeout) {
        this->setChannel2(channel2);
        this->setTimeout(timeout);
    }

    const std::string& ParkAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ParkAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& ParkAction::getChannel2() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ParkAction::setChannel2(const std::string& channel2) {
        setSetterValue(__FUNCTION__, channel2);
    }

    int ParkAction::getTimeout() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void ParkAction::setTimeout(int timeout) {
        setSetterValue<int>(__FUNCTION__, timeout);
    }
} //NAMESPACE

