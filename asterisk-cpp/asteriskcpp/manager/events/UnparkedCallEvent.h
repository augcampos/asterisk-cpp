/*
 * UnparkedCallEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef UNPARKEDCALLEVENT_H_
#define UNPARKEDCALLEVENT_H_

#include "AbstractParkedCallEvent.h"

namespace asteriskcpp {

    /**
     * A UnparkedCallEvent is triggered when a channel that has been parked is
     * resumed.<p>
     * It is implemented in <code>res/res_features.c</code><p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class UnparkedCallEvent : public AbstractParkedCallEvent {
    public:
        UnparkedCallEvent(const std::string & values);
        virtual ~UnparkedCallEvent();

        /**
         * Returns the name of the channel that parked the call.
         */
        const std::string& getFrom() const;
    };

} /* namespace asteriskcpp */
#endif /* UNPARKEDCALLEVENT_H_ */
