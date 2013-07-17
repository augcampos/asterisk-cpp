/* 
 * File:   CoreSettingsResponse.cpp
 * Author: augcampos
 * 
 * Created on June 27, 2013, 2:38 AM
 */

#include "asteriskcpp/manager/responses/CoreSettingsResponse.h"

namespace asteriskcpp {

    CoreSettingsResponse::CoreSettingsResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {

    }

    CoreSettingsResponse::~CoreSettingsResponse() {
    }

    const std::string& CoreSettingsResponse::getAmiVersion() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& CoreSettingsResponse::getAsteriskVersion() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& CoreSettingsResponse::getSystemName() const {
        return (getGetterValue(__FUNCTION__));
    }

    int CoreSettingsResponse::getCoreMaxCalls() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    double CoreSettingsResponse::getCoreMaxLoadAvg() const {
        return (getGetterValue<double>(__FUNCTION__));
    }

    const std::string& CoreSettingsResponse::getCoreRunUser() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& CoreSettingsResponse::getCoreRunGroup() const {
        return (getGetterValue(__FUNCTION__));
    }

    int CoreSettingsResponse::getCoreMaxFilehandles() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    bool CoreSettingsResponse::isCoreRealtimeEnabled() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool CoreSettingsResponse::isCoreCdrEnabled() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool CoreSettingsResponse::isCoreHttpEnabled() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }
}