/*
 * QueueStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueueStatusAction.h"

namespace asteriskcpp {

    QueueStatusAction::QueueStatusAction() {
    }
    
    QueueStatusAction::~QueueStatusAction() {
    }    

    const std::string& QueueStatusAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueStatusAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }

    const std::string& QueueStatusAction::getMember() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueStatusAction::setMember(const std::string& member) {
        setSetterValue(__FUNCTION__, member);
    }
} //NAMESPACE

