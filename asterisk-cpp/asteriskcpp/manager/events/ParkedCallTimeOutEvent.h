/*
 * ParkedCallTimeOutEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef PARKEDCALLTIMEOUTEVENT_H_
#define PARKEDCALLTIMEOUTEVENT_H_

#include "AbstractParkedCallEvent.h"

namespace asteriskcpp {

    /**
     * A ParkedCallTimeOutEvent is triggered when call parking times out for a given
     * channel.<p>
     * It is implemented in <code>res/res_features.c</code><p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class ParkedCallTimeOutEvent : public AbstractParkedCallEvent {
    public:
        ParkedCallTimeOutEvent(const std::string & values);
        virtual ~ParkedCallTimeOutEvent();
    };

} /* namespace asteriskcpp */
#endif /* PARKEDCALLTIMEOUTEVENT_H_ */
