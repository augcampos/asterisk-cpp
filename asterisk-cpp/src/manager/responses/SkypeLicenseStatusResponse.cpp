/* 
 * File:   SkypeLicenseStatusResponse.cpp
 * Author: augcampos
 * 
 * Created on July 17, 2013, 1:41 AM
 */

#include "asteriskcpp/manager/responses/SkypeLicenseStatusResponse.h"

namespace asteriskcpp {

    SkypeLicenseStatusResponse::SkypeLicenseStatusResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    SkypeLicenseStatusResponse::~SkypeLicenseStatusResponse() {
    }

    int SkypeLicenseStatusResponse::getSkypename() const {
        return (getGetterValue<int>(__FUNCTION__));
    }
}