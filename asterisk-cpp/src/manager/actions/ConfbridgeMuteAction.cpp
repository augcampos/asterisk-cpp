/*
 * ConfbridgeMuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeMuteAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeMuteAction.
     */
    ConfbridgeMuteAction::ConfbridgeMuteAction() {
    }

    /**
     * Creates a new ConfbridgeMuteAction.
     * 
     * @param conference the conference number.
     * @param channel number of the channel in the conference.
     */
    ConfbridgeMuteAction::ConfbridgeMuteAction(const std::string& channel) {
        this->setChannel(channel);
    }

    /**
     * Sets the id of the conference.
     */
    void ConfbridgeMuteAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    /**
     * Returns the id of the conference.
     */
    const std::string& ConfbridgeMuteAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ConfbridgeMuteAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& ConfbridgeMuteAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

