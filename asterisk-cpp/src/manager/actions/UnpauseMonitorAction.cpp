/*
 * UnpauseMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/UnpauseMonitorAction.h"

namespace asteriskcpp {

    UnpauseMonitorAction::UnpauseMonitorAction() {
    }

    UnpauseMonitorAction::UnpauseMonitorAction(const std::string& channel) {
        this->setChannel(channel);
    }

    const std::string& UnpauseMonitorAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void UnpauseMonitorAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }
} //NAMESPACE

