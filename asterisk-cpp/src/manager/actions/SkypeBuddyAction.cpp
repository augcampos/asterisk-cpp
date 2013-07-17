/*
 * SkypeBuddyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SkypeBuddyAction.h"
#include "asteriskcpp/manager/responses/SkypeBuddyResponse.h"

namespace asteriskcpp {

    SkypeBuddyAction::SkypeBuddyAction() {
    }

    SkypeBuddyAction::SkypeBuddyAction(const std::string& buddy) {
        this->setBuddy(buddy);
    }

    ManagerResponse *SkypeBuddyAction::expectedResponce(const std::string & response) {
        return (new SkypeBuddyResponse(response));
    }

    const std::string& SkypeBuddyAction::getUser() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeBuddyAction::setUser(const std::string& user) {
        setSetterValue(__FUNCTION__, user);
    }

    const std::string& SkypeBuddyAction::getBuddy() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeBuddyAction::setBuddy(const std::string& buddy) {
        setSetterValue(__FUNCTION__, buddy);
    }
} //NAMESPACE

