/* 
 * File:   GetVarResponse.cpp
 * Author: augcampos
 * 
 * Created on July 11, 2013, 3:34 AM
 */

#include "asteriskcpp/manager/responses/GetVarResponse.h"

namespace asteriskcpp {
    GetVarResponse::GetVarResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    GetVarResponse::~GetVarResponse() {
    }

    const std::string& GetVarResponse::getVariable() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& GetVarResponse::getValue() const {
        return (getGetterValue(__FUNCTION__));
    }
}