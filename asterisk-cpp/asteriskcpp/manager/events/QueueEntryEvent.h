/*
 * QueueEntryEvent.h
 *
 *  Created on: Mar 27, 2012
 *      Author: augcampos
 */

#ifndef QUEUEENTRYEVENT_H_
#define QUEUEENTRYEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A QueueEntryEvent is triggered in response to a QueueStatusAction and
     * contains information about an entry in a queue.<p>
     * It is implemented in <code>apps/app_queue.c</code>
     *
     * @see org.asteriskjava.manager.action.QueueStatusAction
     */
    class QueueEntryEvent : public ResponseEvent {
    public:
        QueueEntryEvent(const std::string & values);
        virtual ~QueueEntryEvent();

        /**
         * Returns the name of the queue that contains this entry.
         */
        const std::string& getQueue() const;

        /**
         * Returns the position of this entry in the queue.
         */
        int getPosition() const;

        /**
         * Returns the name of the channel of this entry.
         */
        const std::string& getChannel() const;

        /**
         * Returns the unique id of the channel of this entry.<p>
         * Available since Asterisk 1.6.
         *
         * @return the unique id of the channel of this entry.
         * @since 1.0.0
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the the Caller*ID number of this entry.
         *
         * @return the the Caller*ID number of this entry.
         */
        const std::string& getCallerId() const;

        /**
         * Returns the Caller*ID name of this entry.
         *
         * @return the Caller*ID name of this entry.
         * @since 0.2
         */
        const std::string& getCallerIdName() const;

        /**
         * Gets the Caller*ID num of this entry.
         *
         * @return the Caller*ID num of this entry.
         * @since 1.0.0
         */
        const std::string& getCallerIdNum() const;

        /**
         * Returns the number of seconds this entry has spent in the queue.
         */
        long getWait() const;
    };

} /* namespace asteriskcpp */
#endif /* QUEUEENTRYEVENT_H_ */
