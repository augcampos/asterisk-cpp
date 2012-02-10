/*
 * ManagerEvent.cpp
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ManagerEvent.h"

static unsigned long nextSequenceNumber = 0;

namespace asteriskcpp {

	ManagerEvent::ManagerEvent() {
	}

	ManagerEvent::ManagerEvent(const std::string& values) {
		internalNumber = (nextSequenceNumber++);
		received = time(0);
		convertStr(values);
	}

	ManagerEvent::~ManagerEvent() {
	}

	inline time_t ManagerEvent::getDateReceived() const {
		return (received);
	}

	std::string ManagerEvent::getPrivilege() const {
		//TODO: Verify name
		return (getProperty("Privilege"));
	}

	double ManagerEvent::getTimestamp() const {
		//TODO: Implement
		return (0);
	}

	std::string ManagerEvent::getServer() const {
		//TODO: Verify name
		return (getProperty("Server"));
	}

	std::string ManagerEvent::getFile() const {
		//TODO: Verify name
		return (getProperty("File"));
	}

	int ManagerEvent::getLine() const {
		//TODO: Verify name
		//return (getProperty("Line"));
		return (0);
	}

	std::string ManagerEvent::getFunc() const {
		//TODO: Verify name
		return (getProperty("Func"));
	}

	unsigned long ManagerEvent::getSequenceNumber() const {
		//TODO: Verify name
		//return (getProperty("SequenceNumber"));
		return (0);
	}

	inline unsigned long ManagerEvent::getInternalNumber() const {
		return (internalNumber);
	}

	std::string ManagerEvent::getUniqueID() const {
		return (getProperty("Uniqueid"));
	}

}
