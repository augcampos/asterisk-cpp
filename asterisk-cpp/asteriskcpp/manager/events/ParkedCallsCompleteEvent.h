/*
 * ParkedCallsCompleteEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef PARKEDCALLSCOMPLETEEVENT_H_
#define PARKEDCALLSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A ParkedCallsCompleteEvent is triggered after all parked calls have been reported in response to
     * a ParkedCallsAction.
     *
     * @see org.asteriskjava.manager.action.ParkedCallsAction
     * @see org.asteriskjava.manager.event.ParkedCallEvent
     *
     */
    class ParkedCallsCompleteEvent : public ResponseEvent {
    public:
        ParkedCallsCompleteEvent(const std::string & values);
        virtual ~ParkedCallsCompleteEvent();
    };

} /* namespace asteriskcpp */
#endif /* PARKEDCALLSCOMPLETEEVENT_H_ */
