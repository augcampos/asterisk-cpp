/*
 * StatusCompleteEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/StatusCompleteEvent.h"

namespace asteriskcpp {

    StatusCompleteEvent::StatusCompleteEvent(const std::string & values) :
    ResponseEvent(values) {

    }

    StatusCompleteEvent::~StatusCompleteEvent() {
    }

    int StatusCompleteEvent::getItems() const {
        return (getGetterValue<int>(__FUNCTION__));
    }
} /* namespace asteriskcpp */
