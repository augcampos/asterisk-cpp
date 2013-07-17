/*
 * PingAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef PINGACTION_H_
#define PINGACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The PingAction is used to keep the manager connection open and performs no operation.<p>
     * Asterisk versions prior to 1.6 send a "Pong" response, since Asterisk 1.6 a
     * "Success" response is sent with a "Ping" property set to "Pong".
     * 
     * @author augcampos
     * @version $Id$
     * 
     * @ExpectedResponse(PingResponse)
     */


    class PingAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new PingAction.
         */
        PingAction();

        virtual ~PingAction();

        ManagerResponse* expectedResponce(const std::string & response);

    };

} //NAMESPACE

#endif /*PINGACTION_H_*/
