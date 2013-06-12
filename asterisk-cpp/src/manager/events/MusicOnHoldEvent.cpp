/*
 * MusicOnHoldEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MusicOnHoldEvent.h"
#include <boost/algorithm/string.hpp>

namespace asteriskcpp {

    const static std::string STATE_START = "Start";
    const static std::string STATE_STOP = "Stop";

    MusicOnHoldEvent::MusicOnHoldEvent(const std::string & values) :
    ManagerEvent(values) {
    }

    MusicOnHoldEvent::~MusicOnHoldEvent() {
    }

    const std::string& MusicOnHoldEvent::getChannel() const {
        return (getProperty("Channel"));
    }

    const std::string& MusicOnHoldEvent::getUniqueId() const {
        return (getProperty("UniqueId"));
    }

    const std::string& MusicOnHoldEvent::getState() const {
        return (getProperty("State"));
    }

    bool MusicOnHoldEvent::isStart() const {
        return (boost::iequals(getState(), STATE_START));
    }

    bool MusicOnHoldEvent::isStop() const {
        return (boost::iequals(getState(), STATE_STOP));
    }
} /* namespace asteriskcpp */
