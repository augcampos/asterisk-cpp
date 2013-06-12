/*
 * MonitorStartEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MonitorStartEvent.h"

namespace asteriskcpp {

    MonitorStartEvent::MonitorStartEvent(const std::string & values) :
    AbstractMonitorEvent(values) {

    }

    MonitorStartEvent::~MonitorStartEvent() {
    }

} /* namespace asteriskcpp */
