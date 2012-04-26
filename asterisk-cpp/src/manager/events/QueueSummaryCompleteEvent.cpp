/*
 * QueueSummaryCompleteEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueSummaryCompleteEvent.h"

namespace asteriskcpp {

	QueueSummaryCompleteEvent::QueueSummaryCompleteEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	QueueSummaryCompleteEvent::~QueueSummaryCompleteEvent()
	{
	}

} /* namespace asteriskcpp */
