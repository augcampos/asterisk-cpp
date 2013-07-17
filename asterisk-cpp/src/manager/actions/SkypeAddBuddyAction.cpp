/*
 * SkypeAddBuddyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SkypeAddBuddyAction.h"

namespace asteriskcpp {

    SkypeAddBuddyAction::SkypeAddBuddyAction() {
    }

    SkypeAddBuddyAction::SkypeAddBuddyAction(const std::string& user, const std::string& buddy) {
        this->setUser(user);
        this->setBuddy(buddy);
    }

    SkypeAddBuddyAction::SkypeAddBuddyAction(const std::string& user, const std::string& buddy, const std::string& authMsg) {
        this->setUser(user);
        this->setBuddy(buddy);
        this->setAuthMsg(authMsg);
    }

    const std::string& SkypeAddBuddyAction::getUser() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeAddBuddyAction::setUser(const std::string& user) {
        setSetterValue(__FUNCTION__, user);
    }

    const std::string& SkypeAddBuddyAction::getBuddy() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeAddBuddyAction::setBuddy(const std::string& buddy) {
        setSetterValue(__FUNCTION__, buddy);
    }

    const std::string& SkypeAddBuddyAction::getAuthMsg() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeAddBuddyAction::setAuthMsg(const std::string& authMsg) {
        setSetterValue(__FUNCTION__, authMsg);
    }
} //NAMESPACE

