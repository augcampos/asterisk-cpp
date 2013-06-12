/*
 * ParkedCallEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef PARKEDCALLEVENT_H_
#define PARKEDCALLEVENT_H_

#include "AbstractParkedCallEvent.h"

namespace asteriskcpp {

    /**
     * A ParkedCallEvent is triggered when a channel is parked (in this case no
     * action id is set) and in response to a ParkedCallsAction.<p>
     * It is implemented in <code>res/res_features.c</code>
     *
     * @see org.asteriskjava.manager.action.ParkedCallsAction
     */
    class ParkedCallEvent : public AbstractParkedCallEvent {
    public:
        ParkedCallEvent(const std::string & values);
        virtual ~ParkedCallEvent();

        /**
         * Returns the name of the channel that parked the call.
         */
        const std::string& getFrom() const;

        /**
         * Returns the number of seconds this call will be parked.<p>
         * This corresponds to the <code>parkingtime</code> option in
         * <code>features.conf</code>.
         */
        int getTimeout() const;

        /**
         * Sets the unique id of the parked channel as a
         * workaround for a typo in asterisk manager event.
         */
        //public void setUnqiueId(String unqiueId);
    };

} /* namespace asteriskcpp */
#endif /* PARKEDCALLEVENT_H_ */
