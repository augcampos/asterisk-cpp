/*
 * ChallengeAction.cpp
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ChallengeAction.h"

namespace asteriskcpp {

    ChallengeAction::ChallengeAction(const std::string& authType) {
        this->setAuthType(authType);
    }

    ChallengeAction::~ChallengeAction() {
    }

    const std::string& ChallengeAction::getAuthType() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ChallengeAction::setAuthType(const std::string& authType) {
        setSetterValue(__FUNCTION__, authType);
    }

}/* namespace asterisk_cpp */
