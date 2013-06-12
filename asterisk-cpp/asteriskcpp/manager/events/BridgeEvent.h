/*
 * BridgeEvent.h
 *
 *  Created on: Aug 4, 2011
 *      Author: a-campos
 */

#ifndef BRIDGEEVENT_H_
#define BRIDGEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A BridgeEvent is triggered when a link between two voice channels is established ("Link") or
     * discontinued ("Unlink").<p>
     * As of Asterisk 1.6 the Bridge event is reported directly by Asterisk. Asterisk versions up to
     * 1.4 report individual events: {@link org.asteriskjava.manager.event.LinkEvent} and
     * {@link org.asteriskjava.manager.event.UnlinkEvent}.For maximum compatibily do not use the Link and Unlink
     * events in your code. Just use the Bridge event and check for {@link #isLink()} and {@link #isUnlink()}.
     * <p/>
     * It is implemented in <code>channel.c</code>
     *
     */
    class BridgeEvent : public ManagerEvent {
    public:

        BridgeEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~BridgeEvent() {
        }

        /**
         * Returns the bridge state.
         *
         * @return "Link" if the two channels have been linked, "Unlink" if they have been unlinked.
         * @see #BRIDGE_STATE_LINK
         * @see #BRIDGE_STATE_UNLINK
         * @since 1.0.0
         */
        const std::string& getBridgeState() const {
            return (getProperty("BridgeState"));
        }

        /**
         * Returns the bridge type.<p>
         * Available since Asterisk 1.6.
         *
         * @return the bridge type.
         * @see #BRIDGE_TYPE_CORE
         * @see #BRIDGE_TYPE_RTP_NATIVE
         * @see #BRIDGE_TYPE_RTP_DIRECT
         * @see #BRIDGE_TYPE_RTP_REMOTE
         * @since 1.0.0
         */
        const std::string& getBridgeType() const {
            return (getProperty("BridgeType"));
        }

        /**
         * Returns the unique id of the first channel.
         *
         * @return the unique id of the first channel.
         */
        const std::string& getUniqueId1() const {
            return (getProperty("UniqueId1"));
        }

        /**
         * Returns the unique id of the second channel.
         *
         * @return the unique id of the second channel.
         */
        const std::string& getUniqueId2() const {
            return (getProperty("UniqueId2"));
        }

        /**
         * Returns the name of the first channel.
         *
         * @return the name of the first channel.
         */
        const std::string& getChannel1() const {
            return (getProperty("Channel1"));
        }

        /**
         * Returns the name of the second channel.
         *
         * @return the name of the second channel.
         */
        const std::string& getChannel2() const {
            return (getProperty("Channel2"));
        }

        /**
         * Returns the Caller*Id number of the first channel.
         *
         * @return the Caller*Id number of the first channel.
         * @since 0.2
         */
        const std::string& getCallerId1() const {
            return (getProperty("CallerId1"));
        }

        /**
         * Returns the Caller*Id number of the second channel.
         *
         * @return the Caller*Id number of the second channel.
         * @since 0.2
         */
        const std::string& getCallerId2() const {
            return (getProperty("CallerId2"));
        }

        /**
         * Returns whether the two channels have been linked.
         *
         * @return <code>true</code> the two channels have been linked, <code>false</code> if they have been unlinked.
         * @since 1.0.0
         */
        bool isLink() const {
            return (getBridgeState().compare("Link") == 0);
        }

        /**
         * Returns whether the two channels have been unlinked.
         *
         * @return <code>true</code> the two channels have been unlinked, <code>false</code> if they have been linked.
         * @since 1.0.0
         */
        bool isUnlink() const {
            return (getBridgeState().compare("Unlink") == 0);
        }

    };

}

#endif /* BRIDGEEVENT_H_ */
