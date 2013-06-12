/*
 * SendFaxEvent.cpp
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/SendFaxEvent.h"

namespace asteriskcpp {

    SendFaxEvent::SendFaxEvent(const std::string & values) :
    AbstractFaxEvent(values) {

    }

    SendFaxEvent::~SendFaxEvent() {
    }

    const std::string& SendFaxEvent::getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getExten() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getCallerId() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getLocalStationId() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getRemoteStationId() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getPagesTransferred() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getResolution() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getTransferRate() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SendFaxEvent::getFileName() const {
        return (getGetterValue(__FUNCTION__));
    }
}/* namespace asteriskcpp */
