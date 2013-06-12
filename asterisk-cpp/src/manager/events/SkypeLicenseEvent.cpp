/*
 * SkypeLicenseEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/SkypeLicenseEvent.h"

namespace asteriskcpp {

    asteriskcpp::SkypeLicenseEvent::SkypeLicenseEvent(const std::string& values) :
    ResponseEvent(values) {
    }

    asteriskcpp::SkypeLicenseEvent::~SkypeLicenseEvent() {
    }

    const std::string& SkypeLicenseEvent::getFile() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeLicenseEvent::getKey() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeLicenseEvent::getExpires() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeLicenseEvent::getHostId() const {
        return (getGetterValue(__FUNCTION__));
    }

    int SkypeLicenseEvent::getChannels() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& SkypeLicenseEvent::getStatus() const {
        return (getGetterValue(__FUNCTION__));
    }
}/* namespace asteriskcpp */
