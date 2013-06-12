/*
 * QueueStatusCompleteEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueStatusCompleteEvent.h"

namespace asteriskcpp {

    QueueStatusCompleteEvent::QueueStatusCompleteEvent(const std::string & values) :
    ResponseEvent(values) {
    }

    QueueStatusCompleteEvent::~QueueStatusCompleteEvent() {

    }

} /* namespace asteriskcpp */
