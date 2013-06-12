/*
 * MonitorStopEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MonitorStopEvent.h"

namespace asteriskcpp {

    MonitorStopEvent::MonitorStopEvent(const std::string & values) :
    AbstractMonitorEvent(values) {
    }

    MonitorStopEvent::~MonitorStopEvent() {
    }

} /* namespace asteriskcpp */
