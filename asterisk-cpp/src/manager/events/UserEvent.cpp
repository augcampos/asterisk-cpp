/*
 * UserEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/UserEvent.h"

namespace asteriskcpp {

    UserEvent::UserEvent(const std::string & values) :
    ManagerEvent(values) {

    }

    UserEvent::~UserEvent() {
    }

    const std::string& UserEvent::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& UserEvent::getUniqueId() const {
        return (getGetterValue(__FUNCTION__));
    }
}/* namespace asteriskcpp */
