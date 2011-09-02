/*
 * LinkEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/LinkEvent.h"

namespace asteriskcpp {

LinkEvent::LinkEvent(const std::string & values) :
		BridgeEvent(values) {
}

LinkEvent::~LinkEvent() {
}

} /* namespace asterisk_cpp */
