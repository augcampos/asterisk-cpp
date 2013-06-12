/*
 * VoicemailUserEntryCompleteEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/VoicemailUserEntryCompleteEvent.h"

namespace asteriskcpp {

    VoicemailUserEntryCompleteEvent::VoicemailUserEntryCompleteEvent(const std::string & values) :
    ResponseEvent(values) {

    }

    VoicemailUserEntryCompleteEvent::~VoicemailUserEntryCompleteEvent() {
    }

} /* namespace asteriskcpp */
