/*
 * QueueMemberStatusEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef QUEUEMEMBERSTATUSEVENT_H_
#define QUEUEMEMBERSTATUSEVENT_H_

#include "QueueMemberEvent.h"

namespace asteriskcpp {

    /**
     * A QueueMemberStatusEvent shows the status of a QueueMemberEvent
     *
     * @author Asteria Solutions Group, Inc. <http://www.asteriasgi.com/>
     */
    class QueueMemberStatusEvent : public QueueMemberEvent {
    public:
        QueueMemberStatusEvent(const std::string & values);
        virtual ~QueueMemberStatusEvent();
    };

} /* namespace asteriskcpp */
#endif /* QUEUEMEMBERSTATUSEVENT_H_ */
