/*
 * ZapShowChannelsCompleteEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ZapShowChannelsCompleteEvent.h"

namespace asteriskcpp {

    ZapShowChannelsCompleteEvent::ZapShowChannelsCompleteEvent(const std::string & values) :
    ResponseEvent(values) {

    }

    ZapShowChannelsCompleteEvent::~ZapShowChannelsCompleteEvent() {
    }

} /* namespace asteriskcpp */
