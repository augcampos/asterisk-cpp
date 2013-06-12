/*
 * OriginateSuccessEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/OriginateSuccessEvent.h"

namespace asteriskcpp {

    OriginateSuccessEvent::OriginateSuccessEvent(const std::string & values) :
    OriginateResponseEvent(values) {
        setProperty("Response", RESPONSE_SUCCESS);
    }

    OriginateSuccessEvent::~OriginateSuccessEvent() {
    }

} /* namespace asteriskcpp */
