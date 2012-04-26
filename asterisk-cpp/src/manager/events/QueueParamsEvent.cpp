/*
 * QueueParamsEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/QueueParamsEvent.h"

namespace asteriskcpp {

	QueueParamsEvent::QueueParamsEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	QueueParamsEvent::~QueueParamsEvent()
	{
	}

	std::string QueueParamsEvent::getQueue() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int QueueParamsEvent::getMax() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	std::string QueueParamsEvent::getStrategy() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int QueueParamsEvent::getCalls() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueParamsEvent::getHoldTime() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueParamsEvent::getTalkTime() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueParamsEvent::getCompleted() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueParamsEvent::getAbandoned() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int QueueParamsEvent::getServiceLevel() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	double QueueParamsEvent::getServiceLevelPerf() const
	{
		return (getGetterValue<double>(__FUNCTION__));
	}

	int QueueParamsEvent::getWeight() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}
} /* namespace asteriskcpp */
