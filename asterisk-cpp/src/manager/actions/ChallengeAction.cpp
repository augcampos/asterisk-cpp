/*
 * ChallengeAction.cpp
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ChallengeAction.h"

namespace asteriskcpp {

ChallengeAction::~ChallengeAction() {
}

ChallengeAction::ChallengeAction(const std::string& authType) {
	this->setAuthType(authType);
}

std::string ChallengeAction::getAction() {
	return ("Challenge");
}

std::string ChallengeAction::getAuthType() const {
	return (getProperty("AuthType"));
}

void ChallengeAction::setAuthType(const std::string& authType) {
	setProperty("AuthType", authType);
}

}/* namespace asterisk_cpp */
