/*
 * MasqueradeEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MasqueradeEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

MasqueradeEvent::MasqueradeEvent(const std::string & values) :
		ManagerEvent(values) {
}

MasqueradeEvent::~MasqueradeEvent() {
}

std::string MasqueradeEvent::getClone() const {
	return (getProperty("Application"));
}

int MasqueradeEvent::getCloneState() const {
	return (convertFromString<int>(getProperty("CloneState")));
}

std::string MasqueradeEvent::getCloneStateDesc() const {
	return (getProperty("CloneStateDesc"));
}

std::string MasqueradeEvent::getOriginal() const {
	return (getProperty("Original"));
}

int MasqueradeEvent::getOriginalState() const {
	return (convertFromString<int>(getProperty("OriginalState")));
}

std::string MasqueradeEvent::getOriginalStateDesc() const {
	return (getProperty("OriginalStateDesc"));
}

} /* namespace asterisk_cpp */
