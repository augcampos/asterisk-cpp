/*
 * NewCallerIdEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: a-campos
 */

#include "asteriskcpp/manager/events/NewCallerIdEvent.h"

namespace asteriskcpp {

NewCallerIdEvent::NewCallerIdEvent(const std::string & values) :
		AbstractChannelEvent(values) {
}

NewCallerIdEvent::~NewCallerIdEvent() {
}

int NewCallerIdEvent::getCidCallingPres() const {
	return (getProperty<int>("CidCallingPres"));
}

std::string NewCallerIdEvent::getCidCallingPresTxt() const {
	return (getProperty("CidCallingPresTxt"));
}

} /* namespace AsteriskCpp */
