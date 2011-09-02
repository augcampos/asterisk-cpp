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
class AlarmClearEvent: public ManagerEvent {
public:
	inline static std::string getEventName() {
		return ("AlarmClearEvent");
	}
	AlarmClearEvent(const std::string & values) :
			ManagerEvent(values) {
	}
	virtual ~AlarmClearEvent() {
	}

	/**
	 * Returns the number of the zap channel that left alarm state.
	 *
	 * @return the number of the zap channel that left alarm state.
	 */
	std::string getChannel() const {
		return (getProperty("Channel"));
	}

};

}

#endif /* ALARMCLEAREVENT_H_ */
