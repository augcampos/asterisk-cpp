/*
 * ConfbridgeUnmuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeUnmuteAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeUnmuteAction.
     */
    ConfbridgeUnmuteAction::ConfbridgeUnmuteAction() {
    }
    
    ConfbridgeUnmuteAction::~ConfbridgeUnmuteAction() {
    }

    /**
     * Creates a new ConfbridgeUnmuteAction.
     * 
     * @param conference the conference number.
     * @param channel number of the channel in the conference.
     */
    ConfbridgeUnmuteAction::ConfbridgeUnmuteAction(const std::string& channel) {
        this->setChannel(channel);
    }

    /**
     * Sets the id of the conference.
     */
    void ConfbridgeUnmuteAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    /**
     * Returns the id of the conference.
     */
    const std::string& ConfbridgeUnmuteAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the number of the channel to unmute.
     */
    void ConfbridgeUnmuteAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& ConfbridgeUnmuteAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

