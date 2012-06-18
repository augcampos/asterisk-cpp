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

	const std::string& PeerStatusEvent::getChannelType() const
	{
		return (getProperty("ChannelType"));
	}

	const std::string& PeerStatusEvent::getPeer() const
	{
		return (getProperty("Peer"));
	}

	const std::string& PeerStatusEvent::getPeerStatus() const
	{
		return (getProperty("PeerStatus"));
	}

	const std::string& PeerStatusEvent::getCause() const
	{
		return (getProperty("Cause"));
	}

	int PeerStatusEvent::getTime() const
	{
		return (getProperty<int>("Time"));
	}

	const std::string& PeerStatusEvent::getAddress() const
	{
		return (getProperty("Address"));
	}

	int PeerStatusEvent::getPort() const
	{
		return (getProperty<int>("Port"));
	}
} /* namespace asteriskcpp */
