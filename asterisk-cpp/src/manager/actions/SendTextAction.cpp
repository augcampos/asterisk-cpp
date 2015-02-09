/*
 * SendTextAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SendTextAction.h"

namespace asteriskcpp {

    SendTextAction::SendTextAction() {
    }
    
    SendTextAction::~SendTextAction() {
    }    

    SendTextAction::SendTextAction(const std::string& channel, const std::string& message) {
        this->setChannel(channel);
        this->setMessage(message);
    }

    const std::string& SendTextAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SendTextAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& SendTextAction::getMessage() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SendTextAction::setMessage(const std::string& message) {
        setSetterValue(__FUNCTION__, message);
    }
} //NAMESPACE

