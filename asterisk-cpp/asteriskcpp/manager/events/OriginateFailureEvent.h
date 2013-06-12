/*
 * OriginateFailureEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef ORIGINATEFAILUREEVENT_H_
#define ORIGINATEFAILUREEVENT_H_

#include "OriginateResponseEvent.h"

namespace asteriskcpp {

    /**
     * An OriginateFailureEvent is triggered when the execution of an
     * OriginateAction failed.<p>
     * Deprecated since Asterisk 1.4.
     *
     * @see org.asteriskjava.manager.action.OriginateAction
     * @see OriginateResponseEvent
     * @deprecated
     */
    class OriginateFailureEvent : public OriginateResponseEvent {
    public:
        OriginateFailureEvent(const std::string & values);
        virtual ~OriginateFailureEvent();
    };

} /* namespace asteriskcpp */
#endif /* ORIGINATEFAILUREEVENT_H_ */
