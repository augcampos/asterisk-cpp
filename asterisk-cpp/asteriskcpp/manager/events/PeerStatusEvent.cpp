/*
 * PeerStatusEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/PeerStatusEvent.h"

namespace asteriskcpp {

	PeerStatusEvent::PeerStatusEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	PeerStatusEvent::~PeerStatusEvent()
	{
	}

	std::string PeerStatusEvent::getChannelType() const
	{
		return (getProperty("ChannelType"));
	}

	std::string PeerStatusEvent::getPeer() const
	{
		return (getProperty("Peer"));
	}

	std::string PeerStatusEvent::getPeerStatus() const
	{
		return (getProperty("PeerStatus"));
	}

	std::string PeerStatusEvent::getCause() const
	{
		return (getProperty("Cause"));
	}

	int PeerStatusEvent::getTime() const
	{
		return (getProperty<int>("Time"));
	}

	std::string PeerStatusEvent::getAddress() const
	{
		return (getProperty("Address"));
	}

	int PeerStatusEvent::getPort() const
	{
		return (getProperty<int>("Port"));
	}
} /* namespace asteriskcpp */
