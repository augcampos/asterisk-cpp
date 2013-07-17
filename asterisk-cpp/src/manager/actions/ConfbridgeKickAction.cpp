/*
 * ConfbridgeKickAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeKickAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeKickAction.
     */
    ConfbridgeKickAction::ConfbridgeKickAction() {
    }

    /**
     * Creates a new ConfbridgeKickAction.
     * 
     * @param conference the conference number.
     * @param channel number of the channel in the conference.
     */
    ConfbridgeKickAction::ConfbridgeKickAction(const std::string& channel) {
        this->setChannel(channel);
    }

    /**
     * Sets the id of the conference to kick a channel from.
     */
    void ConfbridgeKickAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    /**
     * Returns the id of the conference to kick a channel from.
     */
    const std::string& ConfbridgeKickAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the number of the channel to kick.
     */
    void ConfbridgeKickAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& ConfbridgeKickAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

