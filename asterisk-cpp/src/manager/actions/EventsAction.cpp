/*
 * EventsAction.cpp
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */
#include "asteriskcpp/manager/actions/EventsAction.h"

namespace asteriskcpp {

	EventsAction::EventsAction(const std::string& eventMask) {
		setEventMask(eventMask);
	}

	EventsAction::~EventsAction() {
	}

	std::string EventsAction::getAction() {
		return ("Events");
	}

	std::string EventsAction::getEventMask() const {
		return (getProperty("EventMask"));
	}

	void EventsAction::setEventMask(const std::string& eventMask) {
		setProperty("EventMask", eventMask);
	}

} //NS

