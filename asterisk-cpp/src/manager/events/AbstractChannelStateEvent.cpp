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

    int AbstractChannelStateEvent::getChannelState() const {
        return (convertFromString<int>(getProperty("ChannelState")));
    }

    const std::string& AbstractChannelStateEvent::getChannelStateDesc() const {
        return (getProperty("ChannelStateDesc"));
    }

    const std::string& AbstractChannelStateEvent::getState() const {
        return (getProperty("ChannelStateDesc"));
    }

} /* namespace asteriskcpp */
