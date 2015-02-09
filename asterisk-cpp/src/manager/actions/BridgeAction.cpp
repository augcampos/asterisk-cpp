/*
 * BridgeAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/BridgeAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty BridgeAction.
     */
    BridgeAction::BridgeAction() {
    }
    
    BridgeAction::~BridgeAction() {
    }   

    /**
     * Creates a new BridgeAction that bridges the two given channels.
     *
     * @param channel1 the name of the channel to bridge to channel2.
     * @param channel2 the name of the channel to bridge to channel1.
     */
    BridgeAction::BridgeAction(const std::string& channel2) {
        this->setChannel2(channel2);
    }

    /**
     * Creates a new BridgeAction that bridges the two given channels.
     *
     * @param channel1 the name of the channel to bridge to channel2.
     * @param channel2 the name of the channel to bridge to channel1.
     * @param tone     <code>true</code> to play a courtesy tone to channel2, <code>false</code> otherwise.
     */
    BridgeAction::BridgeAction(const std::string& channel2, bool tone) {
        this->setChannel2(channel2);
        this->setTone(tone);
    }

    /**
     * Returns the name of the channel to bridge to channel2.
     *
     * @return the name of the channel to bridge to channel2.
     */
    const std::string& BridgeAction::getChannel1() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the name of the channel to bridge to channel2.
     *
     * @param channel1 the name of the channel to bridge to channel2.
     */
    void BridgeAction::setChannel1(const std::string& channel1) {
        setSetterValue(__FUNCTION__, channel1);
    }

    /**
     * Returns the name of the channel to bridge to channel1.
     *
     * @return the name of the channel to bridge to channel1.
     */
    const std::string& BridgeAction::getChannel2() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the name of the channel to bridge to channel1.
     *
     * @param channel2 the name of the channel to bridge to channel1.
     */
    void BridgeAction::setChannel2(const std::string& channel2) {
        setSetterValue(__FUNCTION__, channel2);
    }

    /**
     * Returns whether a courtesy tone will be played to channel2.
     *
     * @return <code>true</code> to play a courtesy tone to channel2, <code>false</code> or
     *         <code>null</code> (if not set) otherwise.
     */
    bool BridgeAction::getTone() const {
        return (getGetterValue<bool >(__FUNCTION__));
    }

    void BridgeAction::setTone(bool tone) {
        setSetterValue<bool>(__FUNCTION__, tone);
    }
} //NAMESPACE

