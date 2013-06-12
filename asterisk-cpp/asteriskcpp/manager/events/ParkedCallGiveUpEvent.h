/*
 * ParkedCallGiveUpEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef PARKEDCALLGIVEUPEVENT_H_
#define PARKEDCALLGIVEUPEVENT_H_

#include "AbstractParkedCallEvent.h"

namespace asteriskcpp {

    /**
     * A ParkedCallGiveUpEvent is triggered when a channel that has been parked is
     * hung up.<p>
     * It is implemented in <code>res/res_features.c</code><p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class ParkedCallGiveUpEvent : public AbstractParkedCallEvent {
    public:
        ParkedCallGiveUpEvent(const std::string & values);
        virtual ~ParkedCallGiveUpEvent();
    };

} /* namespace asteriskcpp */
#endif /* PARKEDCALLGIVEUPEVENT_H_ */
