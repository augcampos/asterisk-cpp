/* 
 * File:   ModuleCheckResponse.cpp
 * Author: augcampos
 * 
 * Created on July 16, 2013, 2:01 AM
 */

#include "ModuleCheckResponse.h"

namespace asteriskcpp {

    ModuleCheckResponse::ModuleCheckResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    ModuleCheckResponse::~ModuleCheckResponse() {
    }

    int ModuleCheckResponse::getVersion() const {
        return (getGetterValue<int>(__FUNCTION__));
    }
}
