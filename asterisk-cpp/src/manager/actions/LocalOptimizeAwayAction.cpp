/*
 * LocalOptimizeAwayAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/LocalOptimizeAwayAction.h"

namespace asteriskcpp {

  
    LocalOptimizeAwayAction::LocalOptimizeAwayAction() {
    }

 
    LocalOptimizeAwayAction::LocalOptimizeAwayAction(const std::string& channel) {
        this->setChannel(channel);
    }

  
    const std::string& LocalOptimizeAwayAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void LocalOptimizeAwayAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }
} //NAMESPACE

