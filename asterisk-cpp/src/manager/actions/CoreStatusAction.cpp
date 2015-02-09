/*
 * CoreStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/CoreStatusAction.h"
#include "asteriskcpp/manager/responses/CoreStatusResponse.h"

namespace asteriskcpp {

    /**
     * Creates a new CoreStatusAction.
     */
    CoreStatusAction::CoreStatusAction() {
    }
    
    CoreStatusAction::~CoreStatusAction() {
    }    

    ManagerResponse* CoreStatusAction::expectedResponce(const std::string & response) {
        return (new CoreStatusResponse(response));
    }
} //NAMESPACE

