/*
 * AbstractChannelStateEvent.cpp
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractChannelStateEvent.h"

namespace asteriskcpp {

    AbstractChannelStateEvent::AbstractChannelStateEvent(const std::string& values) :
    AbstractChannelEvent(values) {
    }

    AbstractChannelStateEvent::~AbstractChannelStateEvent() {

    }

    const std::string& AbstractChannelStateEvent::getConnectedlinename() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& AbstractChannelStateEvent::getConnectedlinenum() const {
        return (getGetterValue(__FUNCTION__));
    }

    int AbstractChannelStateEvent::getChannelState() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& AbstractChannelStateEvent::getChannelStateDesc() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& AbstractChannelStateEvent::getState() const {
        return (getGetterValue(__FUNCTION__));
    }

} /* namespace asteriskcpp */
