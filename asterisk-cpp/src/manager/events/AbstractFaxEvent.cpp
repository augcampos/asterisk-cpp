/*
 * AbstractFaxEvent.cpp
 *
 *  Created on: Aug 26, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AbstractFaxEvent.h"

#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

AbstractFaxEvent::AbstractFaxEvent(const std::string & values) :
		ManagerEvent(values) {
}
AbstractFaxEvent::~AbstractFaxEvent() {
}

std::string AbstractFaxEvent::getChannelType() const {
	return (getProperty("ChannelType"));
}

int AbstractFaxEvent::getFaxSession() const {
	return (convertFromString<int>(getProperty("FaxSession")));
}

} //NS
