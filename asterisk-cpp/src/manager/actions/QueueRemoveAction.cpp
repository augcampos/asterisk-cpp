/*
 * QueueRemoveAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueueRemoveAction.h"

namespace asteriskcpp {

    QueueRemoveAction::QueueRemoveAction() {
    }
    
    QueueRemoveAction::~QueueRemoveAction() {
    }    

    QueueRemoveAction::QueueRemoveAction(const std::string& queue, const std::string& iface) {
        this->setQueue(queue);
        this->setInterface(iface);
    }

    const std::string& QueueRemoveAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueRemoveAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }

    const std::string& QueueRemoveAction::getInterface() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueRemoveAction::setInterface(const std::string& iface) {
        setSetterValue(__FUNCTION__, iface);
    }
} //NAMESPACE

