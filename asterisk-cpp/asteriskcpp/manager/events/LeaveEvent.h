/*
 * LeaveEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef LEAVEEVENT_H_
#define LEAVEEVENT_H_

#include "QueueEvent.h"

namespace asteriskcpp {

    /**
     * A LeaveEvent is triggered when a channel leaves a queue.<p>
     * It is implemented in <code>apps/app_queue.c</code>
     *
     */
    class LeaveEvent : public asteriskcpp::QueueEvent {
    public:
        LeaveEvent(const std::string & values);
        virtual ~LeaveEvent();
    };

} /* namespace asterisk_cpp */
#endif /* LEAVEEVENT_H_ */
