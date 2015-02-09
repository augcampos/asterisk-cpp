/*
 * SkypeChatSendAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SkypeChatSendAction.h"

namespace asteriskcpp {

  
    SkypeChatSendAction::SkypeChatSendAction() {
    }
    
    SkypeChatSendAction::~SkypeChatSendAction() {
    }    


    SkypeChatSendAction::SkypeChatSendAction(const std::string& message) {
        this->setMessage(message);
    }

    
    const std::string& SkypeChatSendAction::getSkypename() const {
        return (getGetterValue(__FUNCTION__));
    }

  
    void SkypeChatSendAction::setSkypename(const std::string& skypename) {
        setSetterValue(__FUNCTION__, skypename);
    }

 
    const std::string& SkypeChatSendAction::getUser() const {
        return (getGetterValue(__FUNCTION__));
    }


    void SkypeChatSendAction::setUser(const std::string& user) {
        setSetterValue(__FUNCTION__, user);
    }


    const std::string& SkypeChatSendAction::getMessage() const {
        return (getGetterValue(__FUNCTION__));
    }


    void SkypeChatSendAction::setMessage(const std::string& message) {
        setSetterValue(__FUNCTION__, message);
    }
} //NAMESPACE

