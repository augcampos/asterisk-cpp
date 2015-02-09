/* 
 * File:   SkypeBuddyResponse.h
 * Author: augcampos
 *
 * Created on July 17, 2013, 1:29 AM
 */

#ifndef SKYPEBUDDYRESPONSE_H
#define	SKYPEBUDDYRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Corresponds to a SkypeBuddyAction and contains the details of a Skype buddy.
     *
     * @see org.asteriskjava.manager.action.SkypeBuddyAction
     * @since 1.0.0
     */
    class SkypeBuddyResponse : public ManagerResponse {
    public:
        SkypeBuddyResponse(const std::string& responseStr);
        virtual ~SkypeBuddyResponse();

        const std::string& getSkypename() const;
        const std::string& getTimezone() const;
        const std::string& getAvailability() const;
        const std::string& getFullname() const;

        /**
         * Sets the ISO language code.
         *
         * @param language the ISO language code.
         */
        const std::string& getLanguage() const;

        /**
         * Returns the ISO country code.
         *
         * @return the ISO country code (in lower case).
         */
        const std::string& getCountry() const;

        const std::string& getPhoneHome() const;
        const std::string& getPhoneOffice() const;
        const std::string& getPhoneMobile() const;
        const std::string& getAbout() const;
    private:

    };

}

#endif	/* SKYPEBUDDYRESPONSE_H */

