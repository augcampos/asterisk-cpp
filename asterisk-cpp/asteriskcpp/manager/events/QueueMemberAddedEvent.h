/*
 * QueueMemberAddedEvent.h
 *
 *  Created on: Mar 27, 2012
 *      Author: augcampos
 */

#ifndef QUEUEMEMBERADDEDEVENT_H_
#define QUEUEMEMBERADDEDEVENT_H_

#include "AbstractQueueMemberEvent.h"

namespace asteriskcpp {

    /**
     * A QueueMemberAddedEvent is triggered when a queue member is added to a queue.<p>
     * It is implemented in <code>apps/app_queue.c</code>.<p>
     * Available since Asterisk 1.2
     *
     * @since 0.2
     */
    class QueueMemberAddedEvent : public AbstractQueueMemberEvent {
    public:
        QueueMemberAddedEvent(const std::string & values);
        virtual ~QueueMemberAddedEvent();

        /**
         * Returns if the added member is a dynamic or static queue member.
         *
         * @return "dynamic" if the added member is a dynamic queue member, "static"
         *         if the added member is a static queue member.
         */
        const std::string& getMembership() const;

        /**
         * Returns the penalty for the added member. When calls are distributed
         * members with higher penalties are considered last.
         *
         * @return the penalty for the added member.
         */
        int getPenalty() const;

        /**
         * Returns the number of calls answered by the member.
         *
         * @return the number of calls answered by the member.
         */
        int getCallsTaken() const;

        /**
         * Returns the time the last successful call answered by the added member
         * was hungup.
         *
         * @return the time (in seconds since 01/01/1970) the last successful call
         *         answered by the added member was hungup.
         */
        long getLastCall() const;

        /**
         * Returns the status of this queue member.<p>
         * Valid status codes are:
         * <dl>
         * <dt>AST_DEVICE_UNKNOWN (0)</dt>
         * <dd>Queue member is available</dd>
         * <dt>AST_DEVICE_NOT_INUSE (1)</dt>
         * <dd>?</dd>
         * <dt>AST_DEVICE_INUSE (2)</dt>
         * <dd>?</dd>
         * <dt>AST_DEVICE_BUSY (3)</dt>
         * <dd>?</dd>
         * <dt>AST_DEVICE_INVALID (4)</dt>
         * <dd>?</dd>
         * <dt>AST_DEVICE_UNAVAILABLE (5)</dt>
         * <dd>?</dd>
         * </dl>
         *
         * @return the status of this queue member.
         */
        int getStatus() const;

        /**
         * Returns if this queue member is paused (not accepting calls).<p>
         *
         * @return <code>bool.TRUE</code> if this member has been paused or
         *         <code>bool.FALSE</code> if not.
         */
        bool getPaused() const;
    };

} /* namespace asteriskcpp */
#endif /* QUEUEMEMBERADDEDEVENT_H_ */
