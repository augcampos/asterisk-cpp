/*
 * ChallengeResponse.cpp
 *
 *  Created on: Dec 31, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/responses/ChallengeResponse.h"
namespace asteriskcpp {

    ChallengeResponse::ChallengeResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    ChallengeResponse::~ChallengeResponse() {
    }

    std::string ChallengeResponse::getChallenge() const {
        return (this->getProperty("challenge"));
    }

}
