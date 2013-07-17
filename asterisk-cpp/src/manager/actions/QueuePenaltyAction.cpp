/*
 * QueuePenaltyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueuePenaltyAction.h"

namespace asteriskcpp {

    QueuePenaltyAction::QueuePenaltyAction() {
    }

    QueuePenaltyAction::QueuePenaltyAction(int penalty, const std::string& iface) {
        this->setPenalty(penalty);
        this->setInterface(iface);
    }

    QueuePenaltyAction::QueuePenaltyAction(int penalty, const std::string& iface, const std::string& queue) {
        this->setPenalty(penalty);
        this->setInterface(iface);
        this->setQueue(queue);
    }

    const std::string& QueuePenaltyAction::getInterface() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueuePenaltyAction::setInterface(const std::string& iface) {
        setSetterValue(__FUNCTION__, iface);
    }

    int QueuePenaltyAction::getPenalty() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void QueuePenaltyAction::setPenalty(int penalty) {
        setSetterValue<int>(__FUNCTION__, penalty);
    }

    const std::string& QueuePenaltyAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueuePenaltyAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }
} //NAMESPACE

