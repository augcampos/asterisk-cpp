/*
 * QueueMemberEvent.h
 *
 *  Created on: Mar 27, 2012
 *      Author: augcampos
 */

#ifndef QUEUEMEMBEREVENT_H_
#define QUEUEMEMBEREVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A QueueMemberEvent is triggered in response to a QueueStatusAction and
     * contains information about a member of a queue.
     * <p>
     * It is implemented in <code>apps/app_queue.c</code>
     *
     * @see org.asteriskjava.manager.action.QueueStatusAction
     */
    class QueueMemberEvent : public ResponseEvent {
    public:
        QueueMemberEvent(const std::string & values);
        virtual ~QueueMemberEvent();

        /**
         * Returns the name of the queue.
         *
         * @return the name of the queue.
         */
        const std::string& getQueue() const;

        /**
         * Returns the name of the member's interface.
         * <p>
         * E.g. the channel name or agent group (for example "Agent/@1").
         *
         * @return the name of the member's interface.
         */
        const std::string& getLocation() const;

        /**
         * Returns if this member has been dynamically added by the QueueAdd command
         * (in the dialplan or via the Manager API) or if this member is has been
         * statically defined in <code>queues.conf</code>.
         *
         * @return "dynamic" if the added member is a dynamic queue member, "static"
         *         if the added member is a static queue member.
         */
        const std::string& getMembership() const;

        /**
         * Convenience method that checks whether this member has been statically
         * defined in <code>queues.conf</code>.
         *
         * @return <code>true</code> if this member has been statically defined in
         *         <code>queues.conf</code>, <code>false</code> otherwise.
         * @since 0.3
         */
        bool isStatic() const;

        /**
         * Convenience method that checks whether this member has been dynamically
         * added by the QueueAdd command.
         *
         * @return <code>true</code> if this member has been dynamically added by
         *         the QueueAdd command, <code>false</code> otherwise.
         * @since 0.3
         */
        bool isDynamic() const;

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
         * Returns the status of this queue member.
         * <p>
         * Available since Asterisk 1.2
         * <p>
         * Valid status codes are:
         * <dl>
         * <dt>AST_DEVICE_UNKNOWN (0)</dt>
         * <dd>Device valid but unknown channel state</dd>
         * <dt>AST_DEVICE_NOT_INUSE (1)</dt>
         * <dd>Device is not used</dd>
         * <dt>AST_DEVICE_INUSE (2)</dt>
         * <dd>Device is in use</dd>
         * <dt>AST_DEVICE_BUSY (3)</dt>
         * <dd>Device is Busy</dd>
         * <dt>AST_DEVICE_INVALID (4)</dt>
         * <dd>Device is invalid</dd>
         * <dt>AST_DEVICE_UNAVAILABLE (5)</dt>
         * <dd>Device is unavaiable</dd>
         * <dt>AST_DEVICE_RINGING (6)</dt>
         * <dd>Device is ringing</dd>
         * <dt>AST_DEVICE_RINGINUSE (7)</dt>
         * <dd>Device is ringing and in use</dd>
         * <dt>AST_DEVICE_ONHOLD (8)</dt>
         * <dd>Device is on hold</dd>

         * </dl>
         *
         * @return the status of this queue member or <code>null</code> if this
         *         attribute is not supported by your version of Asterisk.
         * @since 0.2
         */
        int getStatus() const;

        /**
         * Is this queue member paused (not accepting calls)?
         * <p>
         * Available since Asterisk 1.2.
         *
         * @return <code>bool.TRUE</code> if this member has been paused,
         *         <code>bool.FALSE</code> if not or <code>null</code> if
         *         pausing is not supported by your version of Asterisk.
         * @since 0.2
         */
        bool getPaused() const;

        /**
         * Returns the name of the member.
         *
         * @return the name of the member supplied for logging when the member is added
         * @since 1.0.0
         */
        const std::string& getName() const;

        /**
         * Returns the name of the member.
         *
         * @return the name of the member supplied for logging when the member is added
         * @deprecated since 1.0.0. Use {@link #getName()} instead.
         */
        const std::string& getMemberName() const;
    };

} /* namespace asteriskcpp */
#endif /* QUEUEMEMBEREVENT_H_ */
