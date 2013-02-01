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

	const std::string& EventsAction::getEventMask() const {
		return (getGetterValue(__FUNCTION__));
	}

	void EventsAction::setEventMask(const std::string& eventMask) {
		setSetterValue(__FUNCTION__, eventMask);
	}

} //NS

