/*
 * AbstractQueueMemberEvent.cpp
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractQueueMemberEvent.h"

namespace asteriskcpp {

    AbstractQueueMemberEvent::AbstractQueueMemberEvent(const std::string& values) :
    ManagerEvent(values) {
    }

    AbstractQueueMemberEvent::~AbstractQueueMemberEvent() {
    }

    const std::string& AbstractQueueMemberEvent::getQueue() const {
        return (getProperty("Queue"));
    }

    const std::string& AbstractQueueMemberEvent::getLocation() const {
        return (getProperty("Location"));
    }

    const std::string& AbstractQueueMemberEvent::getMemberName() const {
        return (getProperty("MemberName"));
    }

} /* namespace asteriskcpp */

