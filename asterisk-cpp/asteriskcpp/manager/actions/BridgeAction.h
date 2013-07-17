/*
 * BridgeAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef BRIDGEACTION_H_
#define BRIDGEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The BridgeAction bridges two channels that are currently active on the system.<p>
     * It is definied in <code>res/res_features.c</code>.<p>
     * Available since Asterisk 1.6
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */

    class BridgeAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty BridgeAction.
         */
        BridgeAction();

        /**
         * Creates a new BridgeAction that bridges the two given channels.
         *
         * @param channel1 the name of the channel to bridge to channel2.
         * @param channel2 the name of the channel to bridge to channel1.
         */
        BridgeAction(const std::string& channel2);

        /**
         * Creates a new BridgeAction that bridges the two given channels.
         *
         * @param channel1 the name of the channel to bridge to channel2.
         * @param channel2 the name of the channel to bridge to channel1.
         * @param tone     <code>true</code> to play a courtesy tone to channel2, <code>false</code> otherwise.
         */
        BridgeAction(const std::string& channel2, bool tone);

        virtual ~BridgeAction();


        /**
         * Returns the name of the channel to bridge to channel2.
         *
         * @return the name of the channel to bridge to channel2.
         */
        const std::string& getChannel1() const;

        /**
         * Sets the name of the channel to bridge to channel2.
         *
         * @param channel1 the name of the channel to bridge to channel2.
         */
        void setChannel1(const std::string& channel1);

        /**
         * Returns the name of the channel to bridge to channel1.
         *
         * @return the name of the channel to bridge to channel1.
         */
        const std::string& getChannel2() const;

        /**
         * Sets the name of the channel to bridge to channel1.
         *
         * @param channel2 the name of the channel to bridge to channel1.
         */
        void setChannel2(const std::string& channel2);

        /**
         * Returns whether a courtesy tone will be played to channel2.
         *
         * @return <code>true</code> to play a courtesy tone to channel2, <code>false</code> or
         *         <code>null</code> (if not set) otherwise.
         */
        bool getTone() const;


        void setTone(bool tone);
    };

} //NAMESPACE

#endif /*BRIDGEACTION_H_*/
