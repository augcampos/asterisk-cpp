/*
 * UnholdEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef UNHOLDEVENT_H_
#define UNHOLDEVENT_H_

#include "HoldEvent.h"

namespace asteriskcpp {

    /**
     * An UnholdEvent is triggered by the SIP channel driver when a channel is no
     * longer put on hold.<p>
     * It is implemented in <code>channels/chan_sip.c</code>.<p>
     * Available since Asterisk 1.2, as of Asterisk 1.6 only {@link org.asteriskjava.manager.event.HoldEvent} is sent
     * with the status set to <code>false</code> to indicate unhold.
     *
     * @see org.asteriskjava.manager.event.HoldEvent
     * @since 0.2
     * @deprecated as of 1.0.0, use {@link org.asteriskjava.manager.event.HoldEvent} and its
     *             {@link #isUnhold()} method instead.
     */

    class UnholdEvent : public HoldEvent {
    public:
        UnholdEvent(const std::string & values);
        virtual ~UnholdEvent();
    };

} /* namespace asteriskcpp */
#endif /* UNHOLDEVENT_H_ */
