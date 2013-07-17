/*
 * ConfbridgeLockAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeLockAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeLockAction.
     */
    ConfbridgeLockAction::ConfbridgeLockAction() {
    }

    /**
     * Creates a new ConfbridgeLockAction for a specific conference.
     */
    ConfbridgeLockAction::ConfbridgeLockAction(const std::string& conference) {
        this->setConference(conference);
    }

    /**
     * Sets the id of the conference to lock.
     */
    void ConfbridgeLockAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    const std::string& ConfbridgeLockAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

