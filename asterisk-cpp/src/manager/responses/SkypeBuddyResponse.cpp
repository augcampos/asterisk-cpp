/* 
 * File:   SkypeBuddyResponse.cpp
 * Author: augcampos
 * 
 * Created on July 17, 2013, 1:29 AM
 */

#include "SkypeBuddyResponse.h"

namespace asteriskcpp {

    SkypeBuddyResponse::SkypeBuddyResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    SkypeBuddyResponse::~SkypeBuddyResponse() {
    }

    const std::string& getSkypename() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getTimezone() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getAvailability() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getFullname() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getLanguage() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getCountry() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getPhoneHome() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getPhoneOffice() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getPhoneMobile() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getAbout() const {
        return (getGetterValue(__FUNCTION__));
    }

}