/*
 * ConfbridgeStartEvent.h
 *
 *  Created on: Aug 8, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGESTARTEVENT_H_
#define CONFBRIDGESTARTEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

	/**
	 * This event is sent when the first user requests a conference and it is instantiated.
	 *
	 * @since 1.0.0
	 */
	class ConfbridgeStartEvent: public ManagerEvent {
	public:
		inline static std::string getEventName() {
			return ("ConfbridgeStartEvent");
		}
		ConfbridgeStartEvent(const std::string & values) :
				ManagerEvent(values) {
		}
		virtual ~ConfbridgeStartEvent() {
		}

		/**
		 * Returns the id of the conference started.
		 *
		 * @return the id of the conference started.
		 */
		std::string getConference() const {
			return (getProperty("Conference"));
		}

	};

}

#endif /* CONFBRIDGESTARTEVENT_H_ */
