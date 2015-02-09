/*
 * SkypeLicenseStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/SkypeLicenseStatusAction.h"
#include "asteriskcpp/manager/responses/SkypeLicenseStatusResponse.h"

namespace asteriskcpp {

    /**
     * Creates a new SkypeLicenseStatusAction.
     */
    SkypeLicenseStatusAction::SkypeLicenseStatusAction() {
    }

    SkypeLicenseStatusAction::~SkypeLicenseStatusAction() {
    }    
    
    ManagerResponse *SkypeLicenseStatusAction::expectedResponce(const std::string & response) {
        return (new SkypeLicenseStatusResponse(response));
    }
} //NAMESPACE

