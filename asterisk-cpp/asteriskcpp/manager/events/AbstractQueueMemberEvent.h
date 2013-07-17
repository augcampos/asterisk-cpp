/*
 * AbstractQueueMemberEvent.h
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#ifndef ABSTRACTQUEUEMEMBEREVENT_H_
#define ABSTRACTQUEUEMEMBEREVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class for several queue member related events.
     *
     * @author augcampos
     * @version $Id$
     * @since 0.2
     */
    class AbstractQueueMemberEvent : public asteriskcpp::ManagerEvent {
    public:
        /**
         * @param source
         */
        AbstractQueueMemberEvent(const std::string& values);
        virtual ~AbstractQueueMemberEvent();

        /**
         * Returns the name of the queue.
         *
         * @return the name of the queue.
         */
        const std::string& getQueue() const;

        /**
         * Returns the name of the member's interface.<p>
         * E.g. the channel name or agent group.
         *
         * @return the name of the member's interface.
         */
        const std::string& getLocation() const;

        /**
         * Retruns the name of the queue member.
         * <p>
         * Available since Asterisk 1.4
         *
         * @return the name of the queue member.
         * @since 0.3
         */
        const std::string& getMemberName() const;

    };

} /* namespace asteriskcpp */
#endif /* ABSTRACTQUEUEMEMBEREVENT_H_ */
