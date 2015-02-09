/* 
 * File:   PingResponse.cpp
 * Author: augcampos
 * 
 * Created on July 16, 2013, 2:28 AM
 */

#include "asteriskcpp/manager/responses/PingResponse.h"


namespace asteriskcpp {

    PingResponse::PingResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    PingResponse::~PingResponse() {
    }

    const std::string& PingResponse::getPing() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& PingResponse::getTimestamp() const {
        return (getGetterValue(__FUNCTION__));
    }
}