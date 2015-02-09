/*
 * PauseMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/PauseMonitorAction.h"

namespace asteriskcpp {

    PauseMonitorAction::PauseMonitorAction() {
    }
    
    PauseMonitorAction::~PauseMonitorAction() {
    }    

    PauseMonitorAction::PauseMonitorAction(const std::string& channel) {
        this->setChannel(channel);
    }

    const std::string& PauseMonitorAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void PauseMonitorAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }
} //NAMESPACE

