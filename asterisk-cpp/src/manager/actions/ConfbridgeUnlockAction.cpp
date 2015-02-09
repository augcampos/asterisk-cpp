/*
 * ConfbridgeUnlockAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeUnlockAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeUnlockAction.
     */
    ConfbridgeUnlockAction::ConfbridgeUnlockAction() {
    }
    
    ConfbridgeUnlockAction::~ConfbridgeUnlockAction() {
    }    

    /**
     * Creates a new ConfbridgeUnlockAction for a specific conference.
     */
    ConfbridgeUnlockAction::ConfbridgeUnlockAction(const std::string& conference) {
        this->setConference(conference);
    }

    /**
     * Sets the id of the conference to unlock.
     */
    void ConfbridgeUnlockAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    const std::string& ConfbridgeUnlockAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

