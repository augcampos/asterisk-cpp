/*
 * JitterBufStatsEvent.cpp
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/JitterBufStatsEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

    JitterBufStatsEvent::JitterBufStatsEvent(const std::string & values) :
    ManagerEvent(values) {

    }

    JitterBufStatsEvent::~JitterBufStatsEvent() {
    }

    const std::string& JitterBufStatsEvent::getOwner() const {
        return (getProperty("Owner"));
    }

    int JitterBufStatsEvent::getPing() const {
        return (convertFromString<int>(getProperty("Cause")));
    }

    int JitterBufStatsEvent::getLocalJitter() const {
        return (convertFromString<int>(getProperty("LocalJitter")));
    }

    int JitterBufStatsEvent::getLocalJbDelay() const {
        return (convertFromString<int>(getProperty("LocalJbDelay")));
    }

    int JitterBufStatsEvent::getLocalTotalLost() const {
        return (convertFromString<int>(getProperty("LocalTotalLost")));
    }

    int JitterBufStatsEvent::getLocalLossPercent() const {
        return (convertFromString<int>(getProperty("LocalLossPercent")));
    }

    int JitterBufStatsEvent::getLocalDropped() const {
        return (convertFromString<int>(getProperty("LocalDropped")));
    }

    int JitterBufStatsEvent::getLocalooo() const {
        return (convertFromString<int>(getProperty("Localooo")));
    }

    int JitterBufStatsEvent::getLocalReceived() const {
        return (convertFromString<int>(getProperty("Received")));
    }

    int JitterBufStatsEvent::getRemoteJitter() const {
        return (convertFromString<int>(getProperty("RemoteJitter")));
    }

    int JitterBufStatsEvent::getRemoteJbDelay() const {
        return (convertFromString<int>(getProperty("RemoteJbDelay")));
    }

    int JitterBufStatsEvent::getRemoteTotalLost() const {
        return (convertFromString<int>(getProperty("RemoteTotalLost")));
    }

    int JitterBufStatsEvent::getRemoteLossPercent() const {
        return (convertFromString<int>(getProperty("RemoteLossPercent")));
    }

    int JitterBufStatsEvent::getRemoteDropped() const {
        return (convertFromString<int>(getProperty("RemoteDropped")));
    }

    int JitterBufStatsEvent::getRemoteooo() const {
        return (convertFromString<int>(getProperty("Remoteooo")));
    }

    int JitterBufStatsEvent::getRemoteReceived() const {
        return (convertFromString<int>(getProperty("RemoteReceived")));
    }

}/* namespace asterisk_cpp */
