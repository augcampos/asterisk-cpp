/*
 * ConfbridgeSetSingleVideoSrcAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeSetSingleVideoSrcAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ConfbridgeSetSingleVideoSrcAction.
     */
    ConfbridgeSetSingleVideoSrcAction::ConfbridgeSetSingleVideoSrcAction() {
    }

    /**
     * Sets the id of the conference for which the video source is to be set.
     */
    void ConfbridgeSetSingleVideoSrcAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    /**
     * Returns the id of the conference for which the video source is to be set.
     */
    const std::string& ConfbridgeSetSingleVideoSrcAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the channel which will be the single video source of the conference.
     */
    void ConfbridgeSetSingleVideoSrcAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& ConfbridgeSetSingleVideoSrcAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

