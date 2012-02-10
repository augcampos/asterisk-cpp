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

	std::string AbstractMeetMeMuteAction::getMeetMe() const {
		return (getProperty("MeetMe"));
	}

	void AbstractMeetMeMuteAction::setMeetMe(const std::string & meetMe) {
		setProperty("MeetMe", meetMe);
	}

	int AbstractMeetMeMuteAction::getUserNum() const {
		return (getProperty<int>("MeetMe"));
	}

	void AbstractMeetMeMuteAction::setUserNum(int userNum) {
		setProperty("UserNum", userNum);
	}

} /* namespace asterisk_cpp */

