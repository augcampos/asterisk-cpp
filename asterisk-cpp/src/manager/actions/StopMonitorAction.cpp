/*
 * StopMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/StopMonitorAction.h"

namespace asteriskcpp {

    StopMonitorAction::StopMonitorAction() {
    }

    StopMonitorAction::StopMonitorAction(const std::string& channel) {
        this->setChannel(channel);
    }

    const std::string& StopMonitorAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void StopMonitorAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }
} //NAMESPACE

