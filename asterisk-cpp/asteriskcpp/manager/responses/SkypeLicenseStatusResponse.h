/* 
 * File:   SkypeLicenseStatusResponse.h
 * Author: augcampos
 *
 * Created on July 17, 2013, 1:41 AM
 */

#ifndef SKYPELICENSESTATUSRESPONSE_H
#define	SKYPELICENSESTATUSRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Corresponds to a SkypeLicenseStatusAction and contains the number of licensed Skype calls.
     *
     * @see org.asteriskjava.manager.action.SkypeLicenseStatusAction
     * @since 1.0.0
     */
    class SkypeLicenseStatusResponse : public ManagerResponse {
    public:
        SkypeLicenseStatusResponse(const std::string& responseStr);
        virtual ~SkypeLicenseStatusResponse();

        /**
         * Returns the total number of concurrent Skype calls currently licenced for this system.
         *
         * @return the total number of concurrent Skype calls currently licenced for this system.
         */
        int getCallsLicensed() const;

        int getSkypename() const;

    private:

    };

}
#endif	/* SKYPELICENSESTATUSRESPONSE_H */

