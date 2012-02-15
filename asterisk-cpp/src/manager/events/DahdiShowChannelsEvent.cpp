/*
 * DahdiShowChannelsEvent.cpp
 *
 *  Created on: Feb 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/DahdiShowChannelsEvent.h"

namespace asteriskcpp {

	DahdiShowChannelsEvent::DahdiShowChannelsEvent(const std::string& values) :
			ResponseEvent(values)
	{

	}

	DahdiShowChannelsEvent::~DahdiShowChannelsEvent()
	{

	}

	std::string DahdiShowChannelsEvent::getAccountcode() const
	{
		return (getProperty("Accountcode"));
	}

	std::string DahdiShowChannelsEvent::getChannel() const
	{
		return (getProperty("Channel"));
	}

	int DahdiShowChannelsEvent::getDahdichannel() const
	{
		return (getProperty<int>("Dahdichannel"));
	}

	std::string DahdiShowChannelsEvent::getSignallingcode() const
	{
		return (getProperty("Signallingcode"));
	}

	std::string DahdiShowChannelsEvent::getUniqueid() const
	{
		return (getProperty("Uniqueid"));
	}

	std::string DahdiShowChannelsEvent::getSignalling() const
	{
		return (getProperty("Signalling"));
	}

	std::string DahdiShowChannelsEvent::getContext() const
	{
		return (getProperty("Context"));
	}

	bool DahdiShowChannelsEvent::getDnd() const
	{
		return (getProperty<bool>("Dnd"));
	}

	std::string DahdiShowChannelsEvent::getAlarm() const
	{
		return (getProperty("Alarm"));
	}

} /* namespace asteriskcpp */
