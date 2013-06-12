/*
 * AlarmEvent.h
 *
 *  Created on: Aug 4, 2011
 *      Author: a-campos
 */

#ifndef ALARMEVENT_H_
#define ALARMEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * An AlarmEvent is triggered when a Zap channel enters or changes alarm state.<p>
     * It is implemented in <code>channels/chan_zap.c</code>
     *
     */
    class AlarmEvent : public ManagerEvent {
    public:
        AlarmEvent(const std::string & values);
        virtual ~AlarmEvent();

        /**
         * Returns the kind of alarm that happened.<p>
         * This may be one of
         * <ul>
         * <li>Red Alarm</li>
         * <li>Yellow Alarm</li>
         * <li>Blue Alarm</li>
         * <li>Recovering</li>
         * <li>Loopback</li>
         * <li>Not Open</li>
         * </ul>
         */
        const std::string& getAlarm() const;

        /**
         * Returns the number of the channel the alarm occured on.
         */
        const std::string& getChannel() const;
    };

}

#endif /* ALARMEVENT_H_ */
