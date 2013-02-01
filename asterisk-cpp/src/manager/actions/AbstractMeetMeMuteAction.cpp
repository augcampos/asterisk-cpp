/*
 * AbstractMeetMeMuteAction.cpp
 *
 *  Created on: Aug 26, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/AbstractMeetMeMuteAction.h"

namespace asteriskcpp {

	AbstractMeetMeMuteAction::AbstractMeetMeMuteAction(const std::string& meetMe, int userNum) {
	}

	AbstractMeetMeMuteAction::~AbstractMeetMeMuteAction() {
	}

	const std::string& AbstractMeetMeMuteAction::getMeetMe() const {
		return (getGetterValue(__FUNCTION__));
	}

	void AbstractMeetMeMuteAction::setMeetMe(const std::string & meetMe) {
		setSetterValue(__FUNCTION__, meetMe);
	}

	int AbstractMeetMeMuteAction::getUserNum() const {
		return (getGetterValue<int>(__FUNCTION__));
	}

	void AbstractMeetMeMuteAction::setUserNum(int userNum) {
		setSetterValue(__FUNCTION__, userNum);
	}

} /* namespace asterisk_cpp */

