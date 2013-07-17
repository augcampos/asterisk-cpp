/*
 * PingAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/PingAction.h"
#include "asteriskcpp/manager/responses/PingResponse.h"
namespace asteriskcpp {

    PingAction::PingAction() {
    }

    ManagerResponse* PingAction::expectedResponce(const std::string & response) {
        return (new PingResponse(response));
    }
} //NAMESPACE

