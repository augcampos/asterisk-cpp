/*
 * QueueMemberPausedEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUEMEMBERPAUSEDEVENT_H_
#define QUEUEMEMBERPAUSEDEVENT_H_

#include "AbstractQueueMemberEvent.h"

namespace asteriskcpp {

    /**
     * A QueueMemberPausedEvent is triggered when a queue member is paused or
     * unpaused.<p>
     * It is implemented in <code>apps/app_queue.c</code>.<p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class QueueMemberPausedEvent : public AbstractQueueMemberEvent {
    public:
        QueueMemberPausedEvent(const std::string & values);
        virtual ~QueueMemberPausedEvent();

        /**
         * Returns if this queue member is paused (not accepting calls).<p>
         *
         * @return <code>bool.TRUE</code> if this member has been paused or
         *         <code>bool.FALSE</code> if not.
         */
        bool getPaused() const;

        /**
         * Returns the reason why the queue member has been paused. Will be set to
         * <code>Auto-Pause</code> for the case that the queue member has been
         * paused for not answering the call.
         *
         * @return the reason specified for the pause.
         */
        const std::string& getReason() const;
    };

} /* namespace asteriskcpp */
#endif /* QUEUEMEMBERPAUSEDEVENT_H_ */
