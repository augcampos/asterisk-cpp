/*
 * IaxPeerListAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef IAXPEERLISTACTION_H_
#define IAXPEERLISTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Retrieves a list of all defined IAX peers.<p>
     * For each peer that is found a PeerEntryEvent is sent by Asterisk containing
     * the details. When all peers have been reported a PeerlistCompleteEvent is
     * sent.<p>
     * Available since Asterisk 1.6
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.event.PeerEntryEvent
     * @see org.asteriskjava.manager.event.PeerlistCompleteEvent
     * @since 1.0.0
     */

    class IaxPeerListAction : public AbstractManagerAction {
    public:


        IaxPeerListAction();

        virtual ~IaxPeerListAction();

    };

} //NAMESPACE

#endif /*IAXPEERLISTACTION_H_*/
