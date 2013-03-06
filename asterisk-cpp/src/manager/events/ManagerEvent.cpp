/*
 * ManagerEvent.cpp
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ManagerEvent.h"
#include "asteriskcpp/utils/LogHandler.h"
#include <stdio.h>

static unsigned long nextSequenceNumber = 0;

namespace asteriskcpp {

	ManagerEvent::ManagerEvent() {
	}

	ManagerEvent::ManagerEvent(const std::string& values) {
		internalNumber = (nextSequenceNumber++);
		received = std::time(0);
		convertStr(values);
	}

        const std::string& ManagerEvent::getEventName() {
        if (this->eventName.empty()) {
            char str[128];
            int i;
            const char *realname = typeid (*this).name();
            sscanf(realname, "N11asteriskcpp%d%s", &i, str);
            this->eventName.assign(str, i - 6);
        }

        return (this->eventName);
    }
        
        
	ManagerEvent::~ManagerEvent() {
	}

	inline time_t ManagerEvent::getDateReceived() const {
		return (received);
	}

	const std::string& ManagerEvent::getPrivilege() const {
		//TODO: Verify name
		return (getGetterValue(__FUNCTION__));
	}

	double ManagerEvent::getTimestamp() const {
		//TODO: Implement
		return (0);
	}

	const std::string& ManagerEvent::getServer() const {
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& ManagerEvent::getFile() const {
		//TODO: Verify name
		return (getProperty("File"));
	}

	int ManagerEvent::getLine() const {
		//TODO: Verify name
		//return (getProperty("Line"));
		return (0);
	}

	const std::string& ManagerEvent::getFunc() const {
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

	const std::string& ManagerEvent::getUniqueID() const {
		return (getProperty("Uniqueid"));
	}

}
