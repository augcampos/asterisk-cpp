/*
 * QueueLogAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/QueueLogAction.h"

namespace asteriskcpp {

    QueueLogAction::QueueLogAction() {
    }

    QueueLogAction::QueueLogAction(const std::string& queue, const std::string& event) {
        this->setQueue(queue);
        this->setEvent(event);
    }

    QueueLogAction::QueueLogAction(const std::string& queue, const std::string& event, const std::string& message,
            const std::string& iface, const std::string& uniqueId) {
        this->setQueue(queue);
        this->setEvent(event);
        this->setMessage(message);
        this->setInterface(iface);
        this->setUniqueId(uniqueId);
    }

    const std::string& QueueLogAction::getInterface() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueLogAction::setInterface(const std::string& iface) {
        setSetterValue(__FUNCTION__, iface);
    }

    const std::string& QueueLogAction::getQueue() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueLogAction::setQueue(const std::string& queue) {
        setSetterValue(__FUNCTION__, queue);
    }

    const std::string& QueueLogAction::getUniqueId() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueLogAction::setUniqueId(const std::string& uniqueId) {
        setSetterValue(__FUNCTION__, uniqueId);
    }

    const std::string& QueueLogAction::getEvent() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueLogAction::setEvent(const std::string& event) {
        setSetterValue(__FUNCTION__, event);
    }

    const std::string& QueueLogAction::getMessage() const {
        return (getGetterValue(__FUNCTION__));
    }

    void QueueLogAction::setMessage(const std::string& message) {
        setSetterValue(__FUNCTION__, message);
    }
} //NAMESPACE

