/*
 * QueuePauseAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueuePauseAction.h"

namespace asteriskcpp {

    QueuePauseAction::QueuePauseAction() {
    }

    QueuePauseAction::QueuePauseAction(const std::string& iface) {
        this->setInterface(iface);
    }

    QueuePauseAction::QueuePauseAction(const std::string& iface, const std::string& queue) {
        this->setInterface(iface);
        this->setQueue(queue);
    }

    QueuePauseAction::QueuePauseAction(const std::string& iface, bool paused) {
        this->setInterface(iface);
        this->setPaused(paused);
    }

    QueuePauseAction::QueuePauseAction(const std::string& iface, const std::string& queue, bool paused) {
        this->setInterface(iface);
        this->setQueue(queue);
        this->setPaused(paused);
    }

    const std::string& QueuePauseAction::getInterface() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueuePauseAction::setInterface(const std::string& iface) {
        setSetterValue(__FUNCTION__, iface);
    }

    const std::string& QueuePauseAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueuePauseAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }

    bool QueuePauseAction::getPaused() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    void QueuePauseAction::setPaused(bool paused) {
        setSetterValue<bool>(__FUNCTION__, paused);
    }

    const std::string& QueuePauseAction::getReason() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueuePauseAction::setReason(const std::string& reason) {
        setSetterValue(__FUNCTION__, reason);
    }
} //NAMESPACE

