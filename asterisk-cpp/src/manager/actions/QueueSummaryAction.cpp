/*
 * QueueSummaryAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueueSummaryAction.h"

namespace asteriskcpp {

    QueueSummaryAction::QueueSummaryAction() {
    }

    QueueSummaryAction::QueueSummaryAction(const std::string& queue) {
        this->setQueue(queue);
    }

    const std::string& QueueSummaryAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueSummaryAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }
} //NAMESPACE

