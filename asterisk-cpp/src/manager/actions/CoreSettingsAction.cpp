/*
 * CoreSettingsAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/CoreSettingsAction.h"
#include "asteriskcpp/manager/responses/CoreSettingsResponse.h"

namespace asteriskcpp {

    /**
     * Creates a new CoreSettingsAction.
     */
    CoreSettingsAction::CoreSettingsAction() {
    }
    
    
    ManagerResponse *CoreSettingsAction::expectedResponce(const std::string & response) {
        return (new CoreSettingsResponse(response));
    }
} //NAMESPACE

