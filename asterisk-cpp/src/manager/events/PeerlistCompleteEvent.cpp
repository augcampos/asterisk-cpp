/*
 * PeerlistCompleteEvent.cpp
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/PeerlistCompleteEvent.h"

namespace asteriskcpp {

    PeerlistCompleteEvent::PeerlistCompleteEvent(const std::string & values) :
    ResponseEvent(values) {
    }

    PeerlistCompleteEvent::~PeerlistCompleteEvent() {
    }

    int PeerlistCompleteEvent::getListItems() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& PeerlistCompleteEvent::getEventList() const {
        return (getGetterValue(__FUNCTION__));
    }
} /* namespace asteriskcpp */
