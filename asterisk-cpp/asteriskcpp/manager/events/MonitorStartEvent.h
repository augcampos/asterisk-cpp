/*
 * MonitorStartEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MONITORSTARTEVENT_H_
#define MONITORSTARTEVENT_H_

#include "AbstractMonitorEvent.h"

namespace asteriskcpp {

    /**
     * A MonitorStartEvent indicates that monitoring was started on a channel.<p>
     * Available since Asterisk 1.6.<p>
     * It is implemented in <code>res/res_monitor.c</code>
     *
     * @since 1.0.0
     * @see org.asteriskjava.manager.event.MonitorStopEvent
     */
    class MonitorStartEvent : public AbstractMonitorEvent {
    public:
        MonitorStartEvent(const std::string & values);
        virtual ~MonitorStartEvent();
    };

} /* namespace asteriskcpp */
#endif /* MONITORSTARTEVENT_H_ */
