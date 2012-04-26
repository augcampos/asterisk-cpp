/*
 * QueueSummaryEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueSummaryEvent.h"

namespace asteriskcpp {

	QueueSummaryEvent::QueueSummaryEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	QueueSummaryEvent::~QueueSummaryEvent()
	{

	}

	std::string QueueSummaryEvent::getQueue() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int QueueSummaryEvent::getLoggedIn() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueSummaryEvent::getAvailable() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueSummaryEvent::getCallers() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueSummaryEvent::getHoldTime() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueSummaryEvent::getTalkTime() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueSummaryEvent::getLongestHoldTime() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
