/*
 * ConfbridgeStopRecordAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeStopRecordAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeStopRecordAction.
     */
    ConfbridgeStopRecordAction::ConfbridgeStopRecordAction() {
    }
    
    ConfbridgeStopRecordAction::~ConfbridgeStopRecordAction() {
    }    

    /**
     * Creates a new ConfbridgeStopRecordAction for a specific conference.
     */
    ConfbridgeStopRecordAction::ConfbridgeStopRecordAction(const std::string& conference) {
        this->setConference(conference);
    }

    /**
     * Sets the id of the conference for which to stop an audio recording.
     */
    void ConfbridgeStopRecordAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    const std::string& ConfbridgeStopRecordAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

