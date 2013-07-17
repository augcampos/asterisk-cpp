/*
 * SipShowPeerAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SIPSHOWPEERACTION_H_
#define SIPSHOWPEERACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Retrieves a the details about a given SIP peer.<p>
     * The result is returned in the response received in reply to this action.<p>
     * Use {@link org.asteriskjava.manager.response.ManagerResponse#getAttribute(String)}
     * to retrieve the properties. Consider using {@link org.asteriskjava.manager.action.SipPeersAction}
     * instead.<p>
     * Available since Asterisk 1.2
     * 
     * @author augcampos
     * @version $Id$
     * @since 0.2
     * @see org.asteriskjava.manager.action.SipPeersAction
     * @see org.asteriskjava.manager.response.SipShowPeerResponse
     * 
     * @ExpectedResponse(SipShowPeerResponse)
     */
    

    class SipShowPeerAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty SipShowPeerAction.
         */
        SipShowPeerAction();

        /**
         * Creates a new SipShowPeerAction that requests the details about the given
         * SIP peer.
         * <p>
         * This is just the peer name without the channel type prefix. For example
         * if your channel is called "SIP/john", the peer name is just "john".
         * 
         * @param peer the name of the SIP peer to retrieve details for.
         * @since 0.2
         */
        SipShowPeerAction(const std::string& peer);

        virtual ~SipShowPeerAction();


        /**
         * Returns the name of the peer to retrieve.<p>
         * This parameter is mandatory.
         * 
         * @return the name of the peer to retrieve without the channel type prefix.
         */
        const std::string& getPeer() const;


        void setPeer(const std::string& peer);
    };

} //NAMESPACE

#endif /*SIPSHOWPEERACTION_H_*/
