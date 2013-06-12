/*
 * OriginateResponseEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/OriginateResponseEvent.h"
#include <boost/algorithm/string.hpp>

namespace asteriskcpp {

    const std::string OriginateResponseEvent::RESPONSE_SUCCESS = "Success";
    const std::string OriginateResponseEvent::RESPONSE_FAILURE = "Failure";

    OriginateResponseEvent::OriginateResponseEvent(const std::string & values) :
    ResponseEvent(values) {
    }

    OriginateResponseEvent::~OriginateResponseEvent() {
    }

    const std::string& OriginateResponseEvent::getResponse() const {
        return (getProperty("Response"));
    }

    bool OriginateResponseEvent::isSuccess() const {
        return (boost::iequals(getResponse(), RESPONSE_SUCCESS));
    }

    const std::string& OriginateResponseEvent::getChannel() const {
        return (getProperty("Channel"));
    }

    const std::string& OriginateResponseEvent::getContext() const {
        return (getProperty("Context"));
    }

    const std::string& OriginateResponseEvent::getExten() const {
        return (getProperty("Exten"));
    }

    int OriginateResponseEvent::getReason() const {
        return (getProperty<int>("Reason"));
    }

    const std::string& OriginateResponseEvent::getUniqueId() const {
        return (getProperty("UniqueId"));
    }

    const std::string& OriginateResponseEvent::getCallerIdNum() const {
        return (getProperty("CallerIdNum"));
    }

    const std::string& OriginateResponseEvent::getCallerIdName() const {
        return (getProperty("CallerIdName"));
    }
} /* namespace asteriskcpp */
