/*
 * QueueCallerAbandonEvent.cpp
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueCallerAbandonEvent.h"

namespace asteriskcpp {

    QueueCallerAbandonEvent::QueueCallerAbandonEvent(const std::string & values) :
    QueueEvent(values) {
    }

    QueueCallerAbandonEvent::~QueueCallerAbandonEvent() {
    }

    int QueueCallerAbandonEvent::getHoldTime() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int QueueCallerAbandonEvent::getOriginalPosition() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int QueueCallerAbandonEvent::getPosition() const {
        return (getGetterValue<int>(__FUNCTION__));
    }
} /* namespace asteriskcpp */
