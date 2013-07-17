/*
 * QueueAddAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueueAddAction.h"

namespace asteriskcpp {

    QueueAddAction::QueueAddAction() {
    }

    QueueAddAction::QueueAddAction(const std::string& iface) {
        this->setInterface(iface);
    }

    QueueAddAction::QueueAddAction(const std::string& iface, int penalty) {
        this->setInterface(iface);
        this->setPenalty(penalty);
    }

    const std::string& QueueAddAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueAddAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }

    const std::string& QueueAddAction::getInterface() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueAddAction::setInterface(const std::string& iface) {
        setSetterValue(__FUNCTION__, iface);
    }

    int QueueAddAction::getPenalty() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void QueueAddAction::setPenalty(int penalty) {
        setSetterValue<int>(__FUNCTION__, penalty);
    }

    bool QueueAddAction::getPaused() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    void QueueAddAction::setPaused(bool paused) {
        setSetterValue<bool>(__FUNCTION__, paused);
    }

    const std::string& QueueAddAction::getMemberName() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueAddAction::setMemberName(const std::string& memberName) {
        setSetterValue(__FUNCTION__, memberName);
    }

    const std::string& QueueAddAction::getStateInterface() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueAddAction::setStateInterface(const std::string& stateInterface) {
        setSetterValue(__FUNCTION__, stateInterface);
    }
} //NAMESPACE

