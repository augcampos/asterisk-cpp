/*
 * MonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/MonitorAction.h"

namespace asteriskcpp {

    MonitorAction::MonitorAction() {
    }
    
    MonitorAction::~MonitorAction() {
    }    

    MonitorAction::MonitorAction(const std::string& channel, const std::string& file) {
        this->setChannel(channel);
        this->setFile(file);
    }

    MonitorAction::MonitorAction(const std::string& channel, const std::string& file, const std::string& format) {
        this->setChannel(channel);
        this->setFormat(format);
    }

    MonitorAction::MonitorAction(const std::string& channel, const std::string& file, const std::string& format, bool mix) {
        this->setChannel(channel);
        this->setFormat(format);
        this->setMix(mix);
    }

    const std::string& MonitorAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void MonitorAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& MonitorAction::getFile() const {
        return (getGetterValue(__FUNCTION__));
    }

    void MonitorAction::setFile(const std::string& file) {
        setSetterValue(__FUNCTION__, file);
    }

    const std::string& MonitorAction::getFormat() const {
        return (getGetterValue(__FUNCTION__));
    }

    void MonitorAction::setFormat(const std::string& format) {
        setSetterValue(__FUNCTION__, format);
    }

    bool MonitorAction::getMix() const {
        return (getGetterValue<bool >(__FUNCTION__));
    }

    void MonitorAction::setMix(bool mix) {
        setSetterValue<bool>(__FUNCTION__, mix);
    }
} //NAMESPACE

