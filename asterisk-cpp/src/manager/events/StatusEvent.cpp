/*
 * StatusEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/StatusEvent.h"

namespace asteriskcpp {

    StatusEvent::StatusEvent(const std::string & values) :
    ResponseEvent(values) {
    }

    StatusEvent::~StatusEvent() {
    }

    const std::string& StatusEvent::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getCallerId() const {
        return (getCallerIdNum());
    }

    const std::string& StatusEvent::getCallerIdNum() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getCallerIdName() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getAccountCode() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getAccount() const {
        return (getAccountCode());
    }

    int StatusEvent::getChannelState() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& StatusEvent::getChannelStateDesc() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getState() const {
        return (getChannelStateDesc());
    }

    const std::string& StatusEvent::getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getExtension() const {
        return (getGetterValue(__FUNCTION__));
    }

    int StatusEvent::getPriority() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int StatusEvent::getSeconds() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& StatusEvent::getBridgedChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getLink() const {
        return (getBridgedChannel());
    }

    const std::string& StatusEvent::getBridgedUniqueId() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& StatusEvent::getUniqueId() const {
        return (getGetterValue(__FUNCTION__));
    }

    std::map<std::string, std::string> StatusEvent::getVariables() const {
        //TODO implement
        std::map<std::string, std::string> rt;
        return (rt);
    }
} /* namespace asteriskcpp */
