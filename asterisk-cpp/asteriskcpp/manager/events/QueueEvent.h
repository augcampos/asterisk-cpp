/*
 * QueueEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef QUEUEEVENT_H_
#define QUEUEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class providing common properties for JoinEvent and LeaveEvent.
     *
     */
    class QueueEvent : public ManagerEvent {
    public:
        QueueEvent(const std::string & values);
        virtual ~QueueEvent();

        /**
         * Returns the unique id of the channel that joines or leaves the queue.<p>
         * This property is only available since Asterisk 1.4. Up to Asterisk 1.2
         * this method always returns <code>null</code>.<p>
         * See Asterisk issues 6458 and 7002.
         *
         * @return the unique id of the channel that joines or leaves the queue or
         *         <code>null</code> if not supported by your Asterisk server.
         * @since 0.3
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the name of the channel that joines or leaves the queue.
         */
        const std::string& getChannel() const;

        /**
         * Returns the number of elements in the queue, i.e. the number of calls waiting to be answered
         * by an agent.
         */
        int getCount() const;

        /**
         * Returns the name of the queue.
         */
        const std::string& getQueue() const;

    };

} /* namespace asterisk_cpp */
#endif /* QUEUEEVENT_H_ */
