/*
 * SkypeBuddiesAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SkypeBuddiesAction.h"

namespace asteriskcpp {

    SkypeBuddiesAction::SkypeBuddiesAction() {
    }
    
    SkypeBuddiesAction::~SkypeBuddiesAction() {
    }    

    SkypeBuddiesAction::SkypeBuddiesAction(const std::string& user) {
        this->setUser(user);
    }

    const std::string& SkypeBuddiesAction::getUser() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SkypeBuddiesAction::setUser(const std::string& user) {
        setSetterValue(__FUNCTION__, user);
    }
} //NAMESPACE

