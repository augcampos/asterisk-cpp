/*
 * PeerStatusEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef PEERSTATUSEVENT_H_
#define PEERSTATUSEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A PeerStatusEvent is triggered when a SIP or IAX client attempts to registrer at this asterisk
     * server.<p>
     * This event is implemented in <code>channels/chan_iax2.c</code> and
     * <code>channels/chan_sip.c</code>
     */
    class PeerStatusEvent : public ManagerEvent {
    public:
        PeerStatusEvent(const std::string & values);
        virtual ~PeerStatusEvent();

        /**
         * Returns the type of channel that registers, that is "IAX2" for an IAX2
         * channel or "SIP" for a SIP channel.<p>
         * Available since Asterisk 1.6.
         *
         * @return the type of channel that registers.
         * @since 1.0.0
         */
        const std::string& getChannelType() const;

        /**
         * Returns the name of the peer that registered.<p>
         * The peer name includes the channel type prefix. So if you receive a PeerStatusEvent for a
         * SIP peer defined as "john" in <code>sip.conf</code> this method returns "SIP/john".
         * <p/>
         * Peer names for IAX clients start with "IAX2/", peer names for SIP clients start with "SIP/".
         *
         * @return the peer's name including the channel type.
         */
        const std::string& getPeer() const;

        /**
         * Returns the registration state.<p>
         * This may be one of
         * <ul>
         * <li>Registered</li>
         * <li>Unregistered</li>
         * <li>Reachable</li>
         * <li>Lagged</li>
         * <li>Unreachable</li>
         * <li>Rejected (IAX only)</li>
         * </ul>
         */
        const std::string& getPeerStatus() const;

        /**
         * Returns the cause of a rejection or unregistration.<p>
         * For IAX peers this is set only if the status equals "Rejected".<p>
         * For SIP peers this is set if the status equals "Unregistered" and the peer was unregistered
         * due to an expiration. In that case the cause is set to "Expired".
         *
         * @return the cause of a rejection or unregistration.
         */
        const std::string& getCause() const;

        /**
         * Returns the ping time of the client if status equals "Reachable" or "Lagged"; if the status
         * equals "Unreachable" it returns how long the last response took (in ms) for IAX peers or -1
         * for SIP peers.
         */
        int getTime() const;

        /**
         * Returns the IP address of the peer that registered. Only available for SIP channels.<p>
         * Available since Asterisk 1.6.
         *
         * @return the IP address of the peer that registered or <code>null</code> if not available.
         * @since 1.0.0
         */
        const std::string& getAddress() const;

        /**
         * Returns the port of the peer that registered. Only available for SIP channels.<p>
         * Available since Asterisk 1.6.
         *
         * @return the port of the peer that registered or <code>null</code> if not available.
         * @since 1.0.0
         */
        int getPort() const;
    };

} /* namespace asteriskcpp */
#endif /* PEERSTATUSEVENT_H_ */
