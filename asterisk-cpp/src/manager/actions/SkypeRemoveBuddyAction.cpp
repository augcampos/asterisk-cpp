/*
 * SkypeRemoveBuddyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SkypeRemoveBuddyAction.h"

namespace asteriskcpp {

    SkypeRemoveBuddyAction::SkypeRemoveBuddyAction() {
    }
    
    SkypeRemoveBuddyAction::~SkypeRemoveBuddyAction() {
    }    

    SkypeRemoveBuddyAction::SkypeRemoveBuddyAction(const std::string& user, const std::string& buddy) {
        this->setUser(user);
        this->setBuddy(buddy);
    }

    const std::string& SkypeRemoveBuddyAction::getUser() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeRemoveBuddyAction::setUser(const std::string& user) {
        setSetterValue(__FUNCTION__, user);
    }

    const std::string& SkypeRemoveBuddyAction::getBuddy() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeRemoveBuddyAction::setBuddy(const std::string& buddy) {
        setSetterValue(__FUNCTION__, buddy);
    }
} //NAMESPACE

