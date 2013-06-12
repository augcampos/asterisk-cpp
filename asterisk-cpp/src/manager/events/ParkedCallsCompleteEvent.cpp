/*
 * ParkedCallsCompleteEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ParkedCallsCompleteEvent.h"

namespace asteriskcpp {

    ParkedCallsCompleteEvent::ParkedCallsCompleteEvent(const std::string & values) :
    ResponseEvent(values) {
    }

    ParkedCallsCompleteEvent::~ParkedCallsCompleteEvent() {
    }

} /* namespace asteriskcpp */
