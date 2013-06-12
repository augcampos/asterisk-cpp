/*
 * QueueParamsEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUEPARAMSEVENT_H_
#define QUEUEPARAMSEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A QueueParamsEvent is triggered in response to a QueueStatusAction and contains the parameters of
     * a queue.<p>
     * It is implemented in <code>apps/app_queue.c</code>
     *
     * @see org.asteriskjava.manager.action.QueueStatusAction
     */
    class QueueParamsEvent : public ResponseEvent {
    public:
        QueueParamsEvent(const std::string & values);
        virtual ~QueueParamsEvent();

        /**
         * Returns the name of the queue.
         *
         * @return the name of the queue.
         */
        const std::string& getQueue() const;

        /**
         * Returns the maximum number of people waiting in the queue or 0 for unlimited.<p>
         * This corresponds to the <code>maxlen</code> setting in <code>queues.conf</code>.
         *
         * @return the maximum number of people waiting in the queue or 0 for unlimited.
         */
        int getMax() const;

        /**
         * Returns the strategy used for this queue.<p>
         * Possible values are:<p>
         * <ul>
         * <li>ringall</li>
         * <li>roundrobin</li>
         * <li>leastrecent</li>
         * <li>fewestcalls</li>
         * <li>random</li>
         * <li>rrmemory</li>
         * </ul>
         * Available since Asterisk 1.6
         *
         * @return the strategy used for this queue.
         * @since 1.0.0
         */
        const std::string& getStrategy() const;

        /**
         * Returns the number of calls currently waiting in the queue.
         *
         * @return the number of calls currently waiting in the queue.
         */
        int getCalls() const;

        /**
         * Returns the current average holdtime for this queue (in seconds).
         *
         * @return the current average holdtime for this queue (in seconds).
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
         * Returns the number of completed calls.
         *
         * @return the number of completed calls.
         */
        int getCompleted() const;

        /**
         * Returns the number of abandoned calls.
         *
         * @return the number of abandoned calls.
         */
        int getAbandoned() const;

        /**
         * Returns the service level (in seconds) as defined by the <code>servicelevel</code> setting
         * in <code>queues.conf</code>.
         *
         * @return the service level (in seconds).
         */
        int getServiceLevel() const;

        /**
         * Returns the ratio of calls answered within the specified service level per total completed
         * calls (in percent).
         *
         * @return the ratio of calls answered within the specified service level per total completed
         *         calls (in percent).
         */
        double getServiceLevelPerf() const;

        /**
         * Returns the weight of this queue.<p>
         * A queue can be assigned a 'weight' to ensure calls waiting in a
         * higher priority queue will deliver its calls first. Only delays
         * the lower weight queue's call if the member is also in the
         * higher weight queue.<p>
         * Available since Asterisk 1.2
         *
         * @return the weight of this queue or <code>null</code> if not
         *         supported by your version of Asterisk
         * @since 0.2
         */
        int getWeight() const;
    };

} /* namespace asteriskcpp */
#endif /* QUEUEPARAMSEVENT_H_ */
