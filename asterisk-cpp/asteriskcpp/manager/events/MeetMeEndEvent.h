/*
 * MeetMeEndEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef MEETMEENDEVENT_H_
#define MEETMEENDEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

/**
 * A MeetMeEnd event indicates that a conference room was disposed.<p>
 * Available since Asterisk 1.6.<p>
 * It is defined in <code>apps/app_meetme.c</code>
 *
 * @since 1.0.0
 */
class MeetMeEndEvent: public ManagerEvent {
public:
	inline static std::string getEventName() {
		return ("MeetMeEndEvent");
	}
	MeetMeEndEvent(const std::string & values);
	virtual ~MeetMeEndEvent();

	/**
	 * Returns the conference number.
	 *
	 * @return the conference number.
	 */
	std::string getMeetMe() const;
};

} /* namespace asterisk_cpp */
#endif /* MEETMEENDEVENT_H_ */
