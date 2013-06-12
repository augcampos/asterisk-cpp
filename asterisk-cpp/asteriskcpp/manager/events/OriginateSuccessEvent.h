/*
 * OriginateSuccessEvent.h
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#ifndef ORIGINATESUCCESSEVENT_H_
#define ORIGINATESUCCESSEVENT_H_

#include "OriginateResponseEvent.h"

namespace asteriskcpp {

    /**
     * An OriginateSuccessEvent is triggered when the execution of an
     * OriginateAction succeeded.<p>
     * Deprecated since Asterisk 1.4.
     *
     * @see org.asteriskjava.manager.action.OriginateAction
     * @see OriginateResponseEvent
     * @deprecated
     */
    class OriginateSuccessEvent : public OriginateResponseEvent {
    public:
        OriginateSuccessEvent(const std::string & values);
        virtual ~OriginateSuccessEvent();
    };

} /* namespace asteriskcpp */
#endif /* ORIGINATESUCCESSEVENT_H_ */
