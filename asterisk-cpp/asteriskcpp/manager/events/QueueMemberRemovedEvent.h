/*
 * QueueMemberRemovedEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUEMEMBERREMOVEDEVENT_H_
#define QUEUEMEMBERREMOVEDEVENT_H_

#include "AbstractQueueMemberEvent.h"

namespace asteriskcpp {

    /**
     * A QueueMemberRemovedEvent is triggered when a queue member is removed from a
     * queue.<p>
     * It is implemented in <code>apps/app_queue.c</code>.<p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class QueueMemberRemovedEvent : public AbstractQueueMemberEvent {
    public:
        QueueMemberRemovedEvent(const std::string & values);
        virtual ~QueueMemberRemovedEvent();
    };

} /* namespace asteriskcpp */
#endif /* QUEUEMEMBERREMOVEDEVENT_H_ */
