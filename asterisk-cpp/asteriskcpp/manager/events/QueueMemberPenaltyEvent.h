/*
 * QueueMemberPenaltyEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUEMEMBERPENALTYEVENT_H_
#define QUEUEMEMBERPENALTYEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A QueueMemberPenaltyEvent is triggered when a queue member is assigned a
     * new penalty.<p>
     * It is implemented in <code>apps/app_queue.c</code>.<p>
     * Available since Asterisk 1.6
     *
     * @since 1.0.0
     */
    class QueueMemberPenaltyEvent : public ManagerEvent {
    public:
        QueueMemberPenaltyEvent(const std::string & values);
        virtual ~QueueMemberPenaltyEvent();

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
         * Returns the new penalty.
         *
         * @return the new penalty.
         */
        int getPenalty() const;
    };

} /* namespace asteriskcpp */
#endif /* QUEUEMEMBERPENALTYEVENT_H_ */
