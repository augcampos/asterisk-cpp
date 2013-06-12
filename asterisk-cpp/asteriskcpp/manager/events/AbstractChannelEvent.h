/*
 * AbstractChannelEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef ABSTRACTCHANNELEVENT_H_
#define ABSTRACTCHANNELEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class providing common properties channel related events.
     *
     */
    class AbstractChannelEvent : public ManagerEvent {
    public:
        AbstractChannelEvent(const std::string& values);
        virtual ~AbstractChannelEvent();

        /**
         * Returns the name of the channel.
         *
         * @return the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the Caller*ID of the channel if set or <code>null</code> if none has been set.
         *
         * @return the Caller*ID
         * @deprecated
         * @see #getCallerIdNum()
         */
        const std::string& getCallerId() const;

        /**
         * Returns the Caller*ID number of the channel if set or <code>null</code> if none has been set.
         *
         * @return the Caller*ID number
         * @since 0.3
         */
        const std::string& getCallerIdNum() const;

        /**
         * Returns the Caller*ID Name of the channel if set or <code>null</code> if none has been set.
         *
         * @return the Caller*ID Name of the channel.
         */
        const std::string& getCallerIdName() const;
    };

}

#endif /* ABSTRACTCHANNELEVENT_H_ */
