/*
 * QueueSummaryCompleteEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUESUMMARYCOMPLETEEVENT_H_
#define QUEUESUMMARYCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A QueueSummaryCompleteEvent is triggered after the summary for all requested
     * queues has been reported in response to a QueueSummaryAction.
     *
     * @see QueueSummaryAction
     * @see QueueSummaryEvent
     * @since 0.3
     */
    class QueueSummaryCompleteEvent : public ResponseEvent {
    public:
        QueueSummaryCompleteEvent(const std::string & values);
        virtual ~QueueSummaryCompleteEvent();
    };

} /* namespace asteriskcpp */
#endif /* QUEUESUMMARYCOMPLETEEVENT_H_ */
