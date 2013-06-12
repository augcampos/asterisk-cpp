/*
 * PeerlistCompleteEvent.h
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#ifndef PEERLISTCOMPLETEEVENT_H_
#define PEERLISTCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A PeerlistCompleteEvent is triggered after the details of all peers has been reported in response
     * to an SIPPeersAction or SIPShowPeerAction.<p>
     * Available since Asterisk 1.2
     *
     * @see org.asteriskjava.manager.event.PeerEntryEvent
     * @see org.asteriskjava.manager.action.SipPeersAction
     * @see org.asteriskjava.manager.action.SipShowPeerAction
     * @since 0.2
     */
    class PeerlistCompleteEvent : public ResponseEvent {
    public:
        PeerlistCompleteEvent(const std::string & values);
        virtual ~PeerlistCompleteEvent();

        /**
         * Returns the number of PeerEvents that have been reported.
         *
         * @return the number of PeerEvents that have been reported.
         */
        int getListItems() const;

        /**
         * Returns always "Complete".<p>
         * Available since Asterisk 1.6.
         *
         * @return always returns "Complete" confirming that all PeerEntry events have been sent.
         * @since 1.0.0
         */
        const std::string& getEventList() const;

    };

} /* namespace asteriskcpp */
#endif /* PEERLISTCOMPLETEEVENT_H_ */
