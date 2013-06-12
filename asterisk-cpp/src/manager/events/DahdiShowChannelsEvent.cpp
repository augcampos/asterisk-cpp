/*
 * DahdiShowChannelsEvent.cpp
 *
 *  Created on: Feb 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/DahdiShowChannelsEvent.h"

namespace asteriskcpp {

    DahdiShowChannelsEvent::DahdiShowChannelsEvent(const std::string& values) :
    ResponseEvent(values) {

    }

    DahdiShowChannelsEvent::~DahdiShowChannelsEvent() {

    }

    const std::string& DahdiShowChannelsEvent::getAccountcode() const {
        return (getProperty("Accountcode"));
    }

    const std::string& DahdiShowChannelsEvent::getChannel() const {
        return (getProperty("Channel"));
    }

    int DahdiShowChannelsEvent::getDahdichannel() const {
        return (getProperty<int>("Dahdichannel"));
    }

    const std::string& DahdiShowChannelsEvent::getSignallingcode() const {
        return (getProperty("Signallingcode"));
    }

    const std::string& DahdiShowChannelsEvent::getUniqueid() const {
        return (getProperty("Uniqueid"));
    }

    const std::string& DahdiShowChannelsEvent::getSignalling() const {
        return (getProperty("Signalling"));
    }

    const std::string& DahdiShowChannelsEvent::getContext() const {
        return (getProperty("Context"));
    }

    bool DahdiShowChannelsEvent::getDnd() const {
        return (getProperty<bool>("Dnd"));
    }

    const std::string& DahdiShowChannelsEvent::getAlarm() const {
        return (getProperty("Alarm"));
    }

} /* namespace asteriskcpp */
