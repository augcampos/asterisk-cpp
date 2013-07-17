/*
 * SkypeLicenseStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SKYPELICENSESTATUSACTION_H_
#define SKYPELICENSESTATUSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SkypeLicenseStatusAction returns the total number of Skype calls licensed.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     * 
     * @ExpectedResponse(SkypeLicenseStatusResponse)
     */
    

    class SkypeLicenseStatusAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new SkypeLicenseStatusAction.
         */
        SkypeLicenseStatusAction();

        virtual ~SkypeLicenseStatusAction();

        virtual ManagerResponse* expectedResponce(const std::string& reponse);
    };

} //NAMESPACE

#endif /*SKYPELICENSESTATUSACTION_H_*/
