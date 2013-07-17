/*
 * MixMonitorMuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/MixMonitorMuteAction.h"

namespace asteriskcpp {

    MixMonitorMuteAction::MixMonitorMuteAction() {
    }

    MixMonitorMuteAction::MixMonitorMuteAction(const std::string& channel) {
        this->setChannel(channel);
    }

    MixMonitorMuteAction::MixMonitorMuteAction(const std::string& channel, const std::string& direction) {
        this->setChannel(channel);
        this->setDirection(direction);
    }

    MixMonitorMuteAction::MixMonitorMuteAction(const std::string& channel, const std::string& direction, int state) {
        this->setChannel(channel);
        this->setDirection(direction);
        this->setState(state);
    }

    MixMonitorMuteAction::MixMonitorMuteAction(const std::string& channel, int state) {
        this->setChannel(channel);
        this->setState(state);
    }

    const std::string& MixMonitorMuteAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void MixMonitorMuteAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& MixMonitorMuteAction::getDirection() const {
        return (getGetterValue(__FUNCTION__));
    }

    void MixMonitorMuteAction::setDirection(const std::string& direction) {
        setSetterValue(__FUNCTION__, direction);
    }

    int MixMonitorMuteAction::getState() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void MixMonitorMuteAction::setState(int state) {
        setSetterValue<int>(__FUNCTION__, state);
    }
} //NAMESPACE

