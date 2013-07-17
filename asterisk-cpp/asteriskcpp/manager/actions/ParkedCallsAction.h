/*
 * ParkedCallsAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef PARKEDCALLSACTION_H_
#define PARKEDCALLSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ParkedCallsAction requests a list of all currently parked calls.<p>
     * For each active channel a ParkedCallEvent is generated. After all parked
     * calls have been reported a ParkedCallsCompleteEvent is generated.
     * 
     * @see org.asteriskjava.manager.event.ParkedCallEvent
     * @see org.asteriskjava.manager.event.ParkedCallsCompleteEvent
     * @author augcampos
     * @version $Id$
     */

    class ParkedCallsAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new ParkedCallsAction.
         */
        ParkedCallsAction();

        virtual ~ParkedCallsAction();

    };

} //NAMESPACE

#endif /*PARKEDCALLSACTION_H_*/
