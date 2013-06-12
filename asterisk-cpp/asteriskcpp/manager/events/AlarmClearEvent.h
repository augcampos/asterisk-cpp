/*
 * AlarmClearEvent.h
 *
 *  Created on: Aug 4, 2011
 *      Author: a-campos
 */

#ifndef ALARMCLEAREVENT_H_
#define ALARMCLEAREVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * An AlarmEvent is triggered when a Zap channel leaves alarm state.<p>
     * It is implemented in <code>channels/chan_zap.c</code>
     *
     */
    class AlarmClearEvent : public ManagerEvent {
    public:
        AlarmClearEvent(const std::string & values);
        virtual ~AlarmClearEvent();

        /**
         * Returns the number of the zap channel that left alarm state.
         *
         * @return the number of the zap channel that left alarm state.
         */
        const std::string& getChannel() const;

    };

}

#endif /* ALARMCLEAREVENT_H_ */
