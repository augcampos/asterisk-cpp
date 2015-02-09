/*
 * MeetMeMuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/MeetMeMuteAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty MeetMeMuteAction.
     */
    MeetMeMuteAction::MeetMeMuteAction() {
    }
    
    MeetMeMuteAction::~MeetMeMuteAction() {
    }    

    /**
     * Creates a new MeetMeMuteAction.
     * 
     * @param meetMe the conference number.
     * @param userNum the index of the user in the conference.
     */
    MeetMeMuteAction::MeetMeMuteAction(const std::string& meetMe, int userNum) {
        this->setMeetMe(meetMe);
        this->setUserNum(userNum);
    }
} //NAMESPACE

