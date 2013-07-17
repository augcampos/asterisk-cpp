/*
 * CoreStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CORESTATUSACTION_H_
#define CORESTATUSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The CoreStatusAction requests a status summary from the server.<p>
     * It returns a {@link org.asteriskjava.manager.response.CoreStatusResponse}.<p>
     * Available since Asterisk 1.6.0
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.response.CoreStatusResponse
     * @since 1.0.0
     * see @ExpectedResponse(CoreStatusResponse.class)
     */

    class CoreStatusAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new CoreStatusAction.
         */
        CoreStatusAction();

        virtual ~CoreStatusAction();
        
        virtual ManagerResponse* expectedResponce(const std::string& reponse);

    };

} //NAMESPACE

#endif /*CORESTATUSACTION_H_*/
