/*
 * BridgeExecEvent.h
 *
 *  Created on: Aug 5, 2011
 *      Author: a-campos
 */

#ifndef BRIDGEEXECEVENT_H_
#define BRIDGEEXECEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A BridgeExecEvent is triggered when two channels are bridged through a feature code or bridging the channels fails.<p>
     * It is implemented in <code>main/features.c</code><p>
     * Available since Asterisk 1.6.
     *
     * @since 1.0.0
     */
    class BridgeExecEvent : public ManagerEvent {
    public:

        BridgeExecEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~BridgeExecEvent() {
        }

        /**
         * Returns whether bridging succeeded or failed. Possible values are
         * <ul>
         * <li>Failed</li>
         * <li>Success</li>
         * </ul>
         *
         * @return "Failed" if bridging failed, "Success" if it succeeded.
         * @see #RESPONSE_FAILED
         * @see #RESPONSE_SUCCESS
         */
        const std::string& getResponse() const {
            return (getProperty("Response"));
        }

        /**
         * Returns the reason for failure. Possible values are
         * <ul>
         * <li>Unable to bridge channel to itself</li>
         * <li>Cannot grab end point</li>
         * <li>cannot create placeholder</li>
         * <li>Could not make channels compatible for bridge</li>
         * </ul>
         *
         * @return the reason for failure or <code>null</code> on success.
         */
        const std::string& getReason() const {
            return (getProperty("Reason"));
        }

        /**
         * The name of the first channel.
         *
         * @return name of the first channel.
         */
        const std::string& getChannel1() const {
            return (getProperty("Channel1"));
        }

        /**
         * The name of the second channel.
         *
         * @return name of the second channel.
         */
        const std::string& getChannel2() const {
            return (getProperty("Channel2"));
        }
    };

}

#endif /* BRIDGEEXECEVENT_H_ */
