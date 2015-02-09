/* 
 * File:   SkypeBuddyResponse.cpp
 * Author: augcampos
 * 
 * Created on July 17, 2013, 1:29 AM
 */

#include "asteriskcpp/manager/responses/SkypeBuddyResponse.h"

namespace asteriskcpp {

    SkypeBuddyResponse::SkypeBuddyResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    SkypeBuddyResponse::~SkypeBuddyResponse() {
    }

    const std::string& SkypeBuddyResponse::getSkypename() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getTimezone() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getAvailability() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getFullname() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getLanguage() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getCountry() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getPhoneHome() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getPhoneOffice() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getPhoneMobile() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SkypeBuddyResponse::getAbout() const {
        return (getGetterValue(__FUNCTION__));
    }

}