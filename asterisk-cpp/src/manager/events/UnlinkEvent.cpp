/*
 * UnlinkEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/UnlinkEvent.h"

namespace asteriskcpp {

    UnlinkEvent::UnlinkEvent(const std::string & values) :
    BridgeEvent(values) {

    }

    UnlinkEvent::~UnlinkEvent() {
    }

} /* namespace asteriskcpp */
