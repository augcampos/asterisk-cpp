/*
 * SipShowPeerAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SipShowPeerAction.h"

namespace asteriskcpp {

    SipShowPeerAction::SipShowPeerAction() {
    }

    SipShowPeerAction::SipShowPeerAction(const std::string& peer) {
        this->setPeer(peer);
    }

    const std::string& SipShowPeerAction::getPeer() const {
        return (getGetterValue(__FUNCTION__));
    }

    void SipShowPeerAction::setPeer(const std::string& peer) {
        setSetterValue(__FUNCTION__, peer);
    }
} //NAMESPACE

