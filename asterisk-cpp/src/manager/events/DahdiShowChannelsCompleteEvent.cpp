/*
 * DahdiShowChannelsCompleteEvent.cpp
 *
 *  Created on: Feb 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/DahdiShowChannelsCompleteEvent.h"

namespace asteriskcpp {

	DahdiShowChannelsCompleteEvent::DahdiShowChannelsCompleteEvent(const std::string& values) :
			ResponseEvent(values) {

	}

	DahdiShowChannelsCompleteEvent::~DahdiShowChannelsCompleteEvent()
	{
	}

	int DahdiShowChannelsCompleteEvent::getItems() const
	{
		return (getProperty<int>("Items"));
	}

	std::string DahdiShowChannelsCompleteEvent::getEventlist() const
	{
		return (getProperty("Eventlist"));
	}

	int DahdiShowChannelsCompleteEvent::getListitems() const
	{
		return (getProperty<int>("Listitems"));
	}

}/* namespace asteriskcpp */
