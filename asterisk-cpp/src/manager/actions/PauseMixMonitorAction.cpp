/*
 * PauseMixMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/PauseMixMonitorAction.h"

namespace asteriskcpp {

    PauseMixMonitorAction::PauseMixMonitorAction() {
    }

    PauseMixMonitorAction::PauseMixMonitorAction(const std::string& direction, int state) {
        this->setDirection(direction);
        this->setState(state);
    }

    const std::string& PauseMixMonitorAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void PauseMixMonitorAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    int PauseMixMonitorAction::getState() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void PauseMixMonitorAction::setState(int state) {
        setSetterValue<int>(__FUNCTION__, state);
    }

    const std::string& PauseMixMonitorAction::getDirection() const {
        return (getGetterValue(__FUNCTION__));
    }

    void PauseMixMonitorAction::setDirection(const std::string& direction) {
        setSetterValue(__FUNCTION__, direction);
    }
} //NAMESPACE

