/*
 * QueueCallerAbandonEvent.h
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#ifndef QUEUECALLERABANDONEVENT_H_
#define QUEUECALLERABANDONEVENT_H_

#include "QueueEvent.h"

namespace asteriskcpp {

    /**
     * A QueueCallerAbandonEvent is triggered when a caller abandons a queue before
     * getting connected with an agent.
     * <p>
     * It is implemented in <code>apps/app_queue.c</code>
     * <p>
     * Available since Asterisk 1.4.
     *
     */
    class QueueCallerAbandonEvent : public QueueEvent {
    public:
        QueueCallerAbandonEvent(const std::string & values);
        virtual ~QueueCallerAbandonEvent();

        /**
         * @return the amount of time in seconds the caller was on hold
         */
        int getHoldTime() const;

        /**
         * @return the original position of the caller in the queue
         */
        int getOriginalPosition() const;

        /**
         * @return the position of the caller at the time they abandoned the queue
         */
        int getPosition() const;
    };

} /* namespace asteriskcpp */
#endif /* QUEUECALLERABANDONEVENT_H_ */
