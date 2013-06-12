/*
 * JoinEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef JOINEVENT_H_
#define JOINEVENT_H_

#include "QueueEvent.h"

namespace asteriskcpp {

    /**
     * A JoinEvent is triggered when a channel joines a queue.<p>
     * It is implemented in <code>apps/app_queue.c</code>
     *
     */
    class JoinEvent : public QueueEvent {
    public:
        JoinEvent(const std::string & values);
        virtual ~JoinEvent();

        /**
         * Returns the Caller*ID number of the channel that joined the queue if set.
         * If the channel has no caller id set "unknown" is returned.
         *
         * @return the Caller*ID number of the channel that joined the queue
         * @deprecated since 1.0.0, use {@link #getCallerIdNum()} instead.
         */
        const std::string& getCallerId() const;

        /**
         * Returns the Caller*ID number of the channel that joined the queue if set.
         * If the channel has no caller id set "unknown" is returned.
         *
         * @return the Caller*ID number of the channel that joined the queue
         * @since 1.0.0
         */
        const std::string& getCallerIdNum() const;

        /**
         * Returns the Caller*ID name of the channel that joined the queue if set.
         * If the channel has no caller id set "unknown" is returned.
         *
         * @since 0.2
         */
        const std::string& getCallerIdName() const;

        /**
         * Returns the position of the joined channel in the queue.
         */
        int getPosition() const;
    };

} /* namespace asterisk_cpp */
#endif /* JOINEVENT_H_ */
