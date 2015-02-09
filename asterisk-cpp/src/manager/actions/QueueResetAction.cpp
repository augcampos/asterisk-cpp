/*
 * QueueResetAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueueResetAction.h"

namespace asteriskcpp {

    QueueResetAction::QueueResetAction() {
    }
    
    QueueResetAction::~QueueResetAction() {
    }    

    QueueResetAction::QueueResetAction(const std::string& queue) {
        this->setQueue(queue);
    }

    const std::string& QueueResetAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueResetAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }
} //NAMESPACE

