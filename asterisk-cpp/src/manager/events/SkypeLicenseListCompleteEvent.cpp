/*
 * SkypeLicenseListCompleteEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/SkypeLicenseListCompleteEvent.h"

namespace asteriskcpp {

    SkypeLicenseListCompleteEvent::SkypeLicenseListCompleteEvent(const std::string & values) :
    ResponseEvent(values) {

    }

    SkypeLicenseListCompleteEvent::~SkypeLicenseListCompleteEvent() {
    }

} /* namespace asteriskcpp */
