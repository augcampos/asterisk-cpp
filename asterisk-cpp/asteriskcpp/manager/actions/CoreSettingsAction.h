/*
 * CoreSettingsAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CORESETTINGSACTION_H_
#define CORESETTINGSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The CoreStatusAction requests a settings summary from the server. The settings
     * include the version, system name, and various system limits.<p>
     * It returns a {@link org.asteriskjava.manager.response.CoreSettingsResponse}.<p>
     * Available since Asterisk 1.6.0
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.response.CoreSettingsResponse
     * @since 1.0.0
     
    * @ExpectedResponse(CoreSettingsResponse.class)
     */
    class CoreSettingsAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new CoreSettingsAction.
         */
        CoreSettingsAction();

        virtual ~CoreSettingsAction();
        
        virtual ManagerResponse* expectedResponce(const std::string& reponse);

    };

} //NAMESPACE

#endif /*CORESETTINGSACTION_H_*/
