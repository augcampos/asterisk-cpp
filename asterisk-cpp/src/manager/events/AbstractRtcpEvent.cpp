/*
 * AbstractRtcpEvent.cpp
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractRtcpEvent.h"

namespace asteriskcpp {

    AbstractRtcpEvent::AbstractRtcpEvent(const std::string& values) :
    ManagerEvent(values) {
    }

    AbstractRtcpEvent::~AbstractRtcpEvent() {

    }

    long AbstractRtcpEvent::getFractionLost() const {
        return (convertFromString<long>(getProperty("FractionLost")));

    }

    double AbstractRtcpEvent::getIaJitter() const {
        return (convertFromString<double>(getProperty("IaJitter")));

    }

    double AbstractRtcpEvent::getDlSr() const {
        return (convertFromString<double>(getProperty("DlSr")));

    }

} /* namespace asteriskcpp */
