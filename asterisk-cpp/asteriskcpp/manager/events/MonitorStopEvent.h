/*
 * MonitorStopEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MONITORSTOPEVENT_H_
#define MONITORSTOPEVENT_H_

#include "AbstractMonitorEvent.h"

namespace asteriskcpp {

    /**
     * A MonitorStopEvent indicates that monitoring was stopped on a channel.<p>
     * Available since Asterisk 1.6.<p>
     * It is implemented in <code>res/res_monitor.c</code>
     *
     * @since 1.0.0
     * @see org.asteriskjava.manager.event.MonitorStartEvent
     */
    class MonitorStopEvent : public asteriskcpp::AbstractMonitorEvent {
    public:
        MonitorStopEvent(const std::string & values);
        virtual ~MonitorStopEvent();
    };

} /* namespace asteriskcpp */
#endif /* MONITORSTOPEVENT_H_ */
