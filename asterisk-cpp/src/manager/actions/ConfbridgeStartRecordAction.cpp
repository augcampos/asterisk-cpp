/*
 * ConfbridgeStartRecordAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeStartRecordAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeStartRecordAction.
     */
    ConfbridgeStartRecordAction::ConfbridgeStartRecordAction() {
    }

    /**
     * Creates a new ConfbridgeStartRecordAction for a specific conference.
     */
    ConfbridgeStartRecordAction::ConfbridgeStartRecordAction(const std::string& conference) {
        this->setConference(conference);
    }

    /**
     * Sets the id of the conference for which to start an audio recording.
     */
    void ConfbridgeStartRecordAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    const std::string& ConfbridgeStartRecordAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

