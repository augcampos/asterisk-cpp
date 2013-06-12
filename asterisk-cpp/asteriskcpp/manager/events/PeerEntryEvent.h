/*
 * PeerEntryEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef PEERENTRYEVENT_H_
#define PEERENTRYEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A PeerEntryEvent is triggered in response to a {@link org.asteriskjava.manager.action.SipPeersAction},
     * {@link org.asteriskjava.manager.action.SipShowPeerAction} or {@link org.asteriskjava.manager.action.IaxPeerListAction}
     * and contains information about a SIP or IAX peer.<p>
     * It is implemented in <code>channels/chan_sip.c</code> and <code>channels/chan_iax.c</code>
     *
     * @since 0.2
     */
    class PeerEntryEvent : public ResponseEvent {
    public:
        PeerEntryEvent(const std::string & values);
        virtual ~PeerEntryEvent();

        /**
         * Returns whether this event represents a SIP or an IAX peer.
         *
         * @return "SIP" or "IAX".
         * @see #CHANNEL_TYPE_SIP
         * @see #CHANNEL_TYPE_IAX
         */
        const std::string& getChannelType() const;

        const std::string& getObjectName() const;

        /**
         * @return
         * @since 1.0.0
         */
        const std::string& getObjectUserName() const;

        /**
         * For SIP peers this is either "peer" or "user".
         *
         * @return "peer" or "user".
         */
        const std::string& getChanObjectType() const;

        /**
         * Returns the IP address of the peer.
         *
         * @return the IP address of the peer or "-none-" if none is available.
         */
        const std::string& getIpAddress() const;

        /**
         * Returns the port of the peer.
         *
         * @return the port of the peer.
         * @deprecated since 1.0.0, use {@link #getPort()} instead.
         */
        int getIpPort() const;

        /**
         * Returns the port of the peer.
         *
         * @return the port of the peer.
         * @since 1.0.0
         */
        int getPort() const;

        bool getDynamic() const;

        bool getNatSupport() const;

        /**
         * Available since Asterisk 1.4.
         *
         * @since 0.3
         */
        bool getVideoSupport() const;

        /**
         * Returns whether the peer supports text messages.<p>
         * Available since Asterisk 1.6.
         *
         * @return <code>true</code> if the peer supports text messages, <code>false</code> otherwise or
         *         <code>null</code> if the property is not set (i.e. for Asterisk prior to 1.6).
         * @since 1.0.0
         */
        bool getTextSupport() const;

        bool getAcl() const;

        /**
         * Returns the status of this peer.<p>
         * For SIP peers this is one of:
         * <dl>
         * <dt>"UNREACHABLE"</dt>
         * <dd></dd>
         * <dt>"LAGGED (%d ms)"</dt>
         * <dd></dd>
         * <dt>"OK (%d ms)"</dt>
         * <dd></dd>
         * <dt>"UNKNOWN"</dt>
         * <dd></dd>
         * <dt>"Unmonitored"</dt>
         * <dd></dd>
         * </dl>
         *
         * @return the status of this peer.
         */
        const std::string& getStatus() const;

        /**
         * Available since Asterisk 1.4.
         *
         * @since 0.3
         */
        const std::string& getRealtimeDevice() const;

        /**
         * Returns whether to use IAX2 trunking with this peer.<p>
         * Available since Asterisk 1.6.
         *
         * @return <code>true</code> if trunking is used, <code>false</code> if not or <code>null</code> if not set.
         * @since 1.0.0
         */
        bool getTrunk() const;

        const std::string& getEncryption() const;
    };

} /* namespace asteriskcpp */
#endif /* PEERENTRYEVENT_H_ */
