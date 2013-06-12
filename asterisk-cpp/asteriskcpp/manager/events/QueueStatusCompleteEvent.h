/*
 * QueueStatusCompleteEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUESTATUSCOMPLETEEVENT_H_
#define QUEUESTATUSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A QueueStatusCompleteEvent is triggered after the state of all queues has been reported in response
     * to a QueueStatusAction.<p>
     * Since Asterisk 1.2
     *
     * @see org.asteriskjava.manager.action.QueueStatusAction
     *
     * @since 0.2
     */
    class QueueStatusCompleteEvent : public ResponseEvent {
    public:
        QueueStatusCompleteEvent(const std::string & values);
        virtual ~QueueStatusCompleteEvent();
    };

} /* namespace asteriskcpp */
#endif /* QUEUESTATUSCOMPLETEEVENT_H_ */
