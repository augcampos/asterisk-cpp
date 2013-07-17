/* 
 * File:   ExtensionStateResponse.cpp
 * Author: augcampos
 * 
 * Created on July 11, 2013, 2:54 AM
 */

#include "asteriskcpp/manager/responses/ExtensionStateResponse.h"


namespace asteriskcpp {

    ExtensionStateResponse::ExtensionStateResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    ExtensionStateResponse::~ExtensionStateResponse() {
    }

    const std::string& ExtensionStateResponse::getExten() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& ExtensionStateResponse::getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    const int ExtensionStateResponse::getHint() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const int ExtensionStateResponse::getStatus() const {
        return (getGetterValue<int>(__FUNCTION__));
    }
}