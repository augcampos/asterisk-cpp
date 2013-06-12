/*
 * QueueSummaryEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUESUMMARYEVENT_H_
#define QUEUESUMMARYEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A QueueSummaryEvent is triggered in response to a QueueSummaryAction and
     * contains a summary of the current state of a queue.
     * <p/>
     * Available in Asterisk post-1.4.
     * <p/>
     * It is implemented in <code>apps/app_queue.c</code>
     *
     * @see QueueSummaryCompleteEvent
     * @see QueueSummaryAction
     * @since 0.3
     */
    class QueueSummaryEvent : public ResponseEvent {
    public:
        QueueSummaryEvent(const std::string & values);
        virtual ~QueueSummaryEvent();

        /**
         * Returns the name of queue.
         *
         * @return the name of queue.
         */
        const std::string& getQueue() const;

        /**
         * Returns the number of members logged in.
         *
         * @return the number of members logged in.
         */
        int getLoggedIn() const;

        /**
         * Returns the number of members logged in and not in a call.
         * <p/>
         * This is the number of queue members currently available for calls.
         *
         * @return the number of members logged in and not in a call.
         */
        int getAvailable() const;

        /**
         * Returns the number of callers currently waiting in the queue.
         *
         * @return the number of callers currently waiting in the queue.
         */
        int getCallers() const;

        /**
         * Returns the current avarage hold time for this queue based on an exponential average.
         *
         * @return the current avarage hold time for this queue.
         */
        int getHoldTime() const;

        /**
         * Returns the current avarage talk time for this queue based on an exponential average.
         *
         * @return the current avarage talk time for this queue.
         * @since 1.0.0
         */
        int getTalkTime() const;

        /**
         * Returns the longest hold time of the a queue entry currently in the queue.
         *
         * @return the longest hold time of the a queue entry currently in the queue.
         * @since 1.0.0
         */
        int getLongestHoldTime() const;

    };

} /* namespace asteriskcpp */
#endif /* QUEUESUMMARYEVENT_H_ */
