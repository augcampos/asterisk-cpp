/*
 * SipPeersAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SIPPEERSACTION_H_
#define SIPPEERSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Retrieves a list of all defined SIP peers.<p>
     * For each peer that is found a PeerEntryEvent is sent by Asterisk containing
     * the details. When all peers have been reported a PeerlistCompleteEvent is
     * sent.<p>
     * Available since Asterisk 1.2
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.event.PeerEntryEvent
     * @see org.asteriskjava.manager.event.PeerlistCompleteEvent
     * @since 0.2
     */

    class SipPeersAction : public AbstractManagerAction {
    public:


        SipPeersAction();

        virtual ~SipPeersAction();

    };

} //NAMESPACE

#endif /*SIPPEERSACTION_H_*/
