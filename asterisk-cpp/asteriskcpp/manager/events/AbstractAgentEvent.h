/*
 * AbstractAgentEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef ABSTRACTAGENTEVENT_H_
#define ABSTRACTAGENTEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    class AbstractAgentEvent : public ManagerEvent {
    public:
        AbstractAgentEvent(const std::string & values);
        virtual ~AbstractAgentEvent();

        /**
         * Returns the name of the channel.
         *
         * @return the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the name of the queue.
         *
         * @return the name of the queue.
         */
        const std::string& getQueue() const;

        /**
         * Returns the name of the member's interface.
         *
         * @return the name of the member's interface.
         */
        const std::string& getMember() const;

        /**
         * Returns the member name supplied for logging when the member is added.
         * <p/>
         * Available since Asterisk 1.4.
         *
         * @return the member name supplied for logging when the member is added.
         */
        const std::string& getMemberName() const;

        /**
         * Returns the channel variables if <code>eventwhencalled</code> is set to <code>vars</code>
         * in <code>queues.conf</code>.<p>
         * Available since Asterisk 1.6
         *
         * @return the channel variables.
         * @since 1.0.0
         */
        std::map<std::string, std::string> getVariables() const;

    };

}

#endif /* ABSTRACTAGENTEVENT_H_ */
