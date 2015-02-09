/*
 * ConfbridgeListAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ConfbridgeListAction.h"

namespace asteriskcpp {

    ConfbridgeListAction::ConfbridgeListAction() {
    }
    
    ConfbridgeListAction::~ConfbridgeListAction() {
    }    

    ConfbridgeListAction::ConfbridgeListAction(const std::string& conference) {
        this->setConference(conference);
    }

    void ConfbridgeListAction::setConference(const std::string& conference) {
        setSetterValue(__FUNCTION__, conference);
    }

    const std::string& ConfbridgeListAction::getConference() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

