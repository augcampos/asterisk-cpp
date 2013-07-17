/* 
 * File:   AgiAction.cpp
 * Author: augcampos
 * 
 * Created on June 20, 2013, 2:52 AM
 */

#include "asteriskcpp/manager/actions/AgiAction.h"



namespace asteriskcpp {

    AgiAction::AgiAction() {
    }

    AgiAction::AgiAction(const std::string& channel, const std::string& command) {
        this->setChannel(channel);
        this->setCommand(command);
    }

    AgiAction::AgiAction(const std::string& channel, const std::string& command, const std::string& commandId) {
        this->setChannel(channel);
        this->setCommand(command);
        this->setCommandId(commandId);
    }

    AgiAction::~AgiAction() {
    }

    const std::string& AgiAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void AgiAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& AgiAction::getCommand() const {
        return (getGetterValue(__FUNCTION__));
    }

    void AgiAction::setCommand(const std::string& command) {
        setSetterValue(__FUNCTION__, command);
    }

    const std::string& AgiAction::getCommandId() const {
        return (getGetterValue(__FUNCTION__));
    }

    void AgiAction::setCommandId(const std::string& commandId) {
        setSetterValue(__FUNCTION__, commandId);
    }



}