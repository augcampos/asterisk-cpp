/*
 * MeetMeUnmuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/MeetMeUnmuteAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty MeetMeUnmuteAction.
     */
    MeetMeUnmuteAction::MeetMeUnmuteAction() {
    }

    /**
     * Creates a new MeetMeUnmuteAction.
     * 
     * @param meetMe the conference number.
     * @param userNum the index of the user in the conference.
     */
    MeetMeUnmuteAction::MeetMeUnmuteAction(const std::string& meetMe, int userNum) {
        this->setMeetMe(meetMe);
        this->setUserNum(userNum);
    }
} //NAMESPACE

