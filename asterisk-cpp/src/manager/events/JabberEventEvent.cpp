/*
 * JabberEventEvent.cpp
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */
#include "asteriskcpp/manager/events/JabberEventEvent.h"

namespace asteriskcpp {

JabberEventEvent::JabberEventEvent(const std::string & values) :
		ManagerEvent(values) {

}
JabberEventEvent::~JabberEventEvent() {
}

std::string JabberEventEvent::getAccount() const {
	return (getProperty("Account"));
}

std::string JabberEventEvent::getPacket() const {
	return (getProperty("Packet"));
}

} /* namespace asterisk_cpp */
