/* 
 * File:   CoreStatusResponse.cpp
 * Author: augcampos
 * 
 * Created on June 27, 2013, 4:04 AM
 */

#include "asteriskcpp/manager/responses/CoreStatusResponse.h"

namespace asteriskcpp {

    CoreStatusResponse::CoreStatusResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {

    }

    CoreStatusResponse::~CoreStatusResponse() {
    }

    const std::string& CoreStatusResponse::getCoreReloadTime() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& CoreStatusResponse::getCoreReloadDate() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& CoreStatusResponse::getCoreReloadDateTimeAsDate() const {
        return (getGetterValue(__FUNCTION__));
    }

    long CoreStatusResponse::getCoreReloadDateTimeAsDate(long timezone) const {
        return (getGetterValue<long>(__FUNCTION__));
    }

    const std::string& CoreStatusResponse::getCoreStartupDate() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& CoreStatusResponse::getCoreStartupTime() const {
        return (getGetterValue(__FUNCTION__));
    }

    long CoreStatusResponse::getCoreStartupDateTimeAsDate() const {
        return (getCoreStartupDateTimeAsDate(0));
    }

    long CoreStatusResponse::getCoreStartupDateTimeAsDate(long timezone) const {
        return (getGetterValue<long>(__FUNCTION__));
    }

    const int CoreStatusResponse::getCoreCurrentCalls() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

}