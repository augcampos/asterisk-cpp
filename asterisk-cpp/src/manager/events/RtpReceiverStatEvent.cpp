/*
 * RtpReceiverStatEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RtpReceiverStatEvent.h"

namespace asteriskcpp {

    RtpReceiverStatEvent::RtpReceiverStatEvent(const std::string & values) :
    AbstractRtpStatEvent(values) {

    }

    RtpReceiverStatEvent::~RtpReceiverStatEvent() {
    }

    long RtpReceiverStatEvent::getReceivedPackets() const {
        return (getGetterValue<long>(__FUNCTION__));
    }

    double RtpReceiverStatEvent::getTransit() const {
        return (getGetterValue<double>(__FUNCTION__));
    }

    long RtpReceiverStatEvent::getRrCount() const {
        return (getGetterValue<long>(__FUNCTION__));
    }
} /* namespace asteriskcpp */
