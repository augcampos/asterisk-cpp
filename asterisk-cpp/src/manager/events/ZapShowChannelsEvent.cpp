/*
 * ZapShowChannelsEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ZapShowChannelsEvent.h"

namespace asteriskcpp {

	ZapShowChannelsEvent::ZapShowChannelsEvent(const std::string & values) :
			ResponseEvent(values) {

	}

	ZapShowChannelsEvent::~ZapShowChannelsEvent()
	{
	}

	int ZapShowChannelsEvent::getChannel() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	const std::string& ZapShowChannelsEvent::getSignalling() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& ZapShowChannelsEvent::getContext() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	bool ZapShowChannelsEvent::getDnd() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	const std::string& ZapShowChannelsEvent::getAlarm() const
	{
		return (getGetterValue(__FUNCTION__));
	}
}
/* namespace asteriskcpp */
