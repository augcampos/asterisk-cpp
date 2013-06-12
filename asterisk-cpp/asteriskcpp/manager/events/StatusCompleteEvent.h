/*
 * StatusCompleteEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef STATUSCOMPLETEEVENT_H_
#define STATUSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A StatusCompleteEvent is triggered after the state of all channels has been reported in response
     * to a StatusAction.
     *
     * @see org.asteriskjava.manager.action.StatusAction
     * @see org.asteriskjava.manager.event.StatusEvent
     *
     */
    class StatusCompleteEvent : public ResponseEvent {
    public:
        StatusCompleteEvent(const std::string & values);
        virtual ~StatusCompleteEvent();

        /**
         * Returns the number of channels reported.<p>
         * Available since Asterisk 1.6.
         *
         * @return the number of channels reported.
         * @since 1.0.0
         */
        int getItems() const;
    };

} /* namespace asteriskcpp */
#endif /* STATUSCOMPLETEEVENT_H_ */
