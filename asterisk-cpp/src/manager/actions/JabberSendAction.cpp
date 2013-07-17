/*
 * JabberSendAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/JabberSendAction.h"

namespace asteriskcpp {

    JabberSendAction::JabberSendAction() {
    }

    JabberSendAction::JabberSendAction(const std::string& message) {
        this->setMessage(message);
    }

    const std::string& JabberSendAction::getJabber() const {
        return (getGetterValue(__FUNCTION__));
    }

    void JabberSendAction::setJabber(const std::string& jabber) {
        setSetterValue(__FUNCTION__, jabber);
    }

    const std::string& JabberSendAction::getScreenName() const {
        return (getGetterValue(__FUNCTION__));
    }

    void JabberSendAction::setScreenName(const std::string& screenName) {
        setSetterValue(__FUNCTION__, screenName);
    }

    const std::string& JabberSendAction::getMessage() const {
        return (getGetterValue(__FUNCTION__));
    }

    void JabberSendAction::setMessage(const std::string& message) {
        setSetterValue(__FUNCTION__, message);
    }
} //NAMESPACE

