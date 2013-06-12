/*
 * ProtocolIdentifierReceivedEvent.cpp
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ProtocolIdentifierReceivedEvent.h"

namespace asteriskcpp {

    ProtocolIdentifierReceivedEvent::ProtocolIdentifierReceivedEvent(const std::string & values) :
    ManagerEvent(values) {
    }

    ProtocolIdentifierReceivedEvent::~ProtocolIdentifierReceivedEvent() {
    }

    const std::string& ProtocolIdentifierReceivedEvent::getProtocolIdentifier() const {
        return (getGetterValue(__FUNCTION__));
    }
} /* namespace asteriskcpp */
