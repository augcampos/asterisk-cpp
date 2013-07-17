/*
 * SipShowRegistryAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SIPSHOWREGISTRYACTION_H_
#define SIPSHOWREGISTRYACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Retrieves a list with the details about the SIP registrations.<p>
     * For each registration that is found a RegistryEntryEvent is sent by Asterisk
     * containing the details. When all the registrations have been reported a
     * RegistrationsCompleteEvent is sent.<p>
     * Available since Asterisk 1.6
     *
     * @author Laureano
     * @version $Id$
     * @see RegistrationsCompleteEvent
     * @see RegistryEntryEvent
     * @since 1.0.0
     */

    class SipShowRegistryAction : public AbstractManagerAction {
    public:


        SipShowRegistryAction();

        virtual ~SipShowRegistryAction();

    };

} //NAMESPACE

#endif /*SIPSHOWREGISTRYACTION_H_*/
