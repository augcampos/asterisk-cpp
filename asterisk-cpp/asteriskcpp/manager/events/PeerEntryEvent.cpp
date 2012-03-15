/*
 * PeerEntryEvent.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/PeerEntryEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

	PeerEntryEvent::PeerEntryEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	PeerEntryEvent::~PeerEntryEvent()
	{
	}

	std::string PeerEntryEvent::getChannelType() const
	{
		return (getProperty("ChannelType"));
	}

	std::string PeerEntryEvent::getObjectName() const
	{
		return (getProperty("ObjectName"));
	}

	std::string PeerEntryEvent::getObjectUserName() const
	{
		return (getProperty("ObjectUserName"));
	}

	std::string PeerEntryEvent::getChanObjectType() const
	{
		return (getProperty("ChanObjectType"));
	}

	std::string PeerEntryEvent::getIpAddress() const
	{
		return (getProperty("IpAddress"));
	}

	int PeerEntryEvent::getIpPort() const
	{
		return (getProperty<int>("IpPort"));
	}

	int PeerEntryEvent::getPort() const
	{
		return (getProperty<int>("Port"));
	}

	bool PeerEntryEvent::getDynamic() const
	{
		return (getProperty<bool>("Dynamic"));
	}

	bool PeerEntryEvent::getNatSupport() const
	{
		return (getProperty<bool>("NatSupport"));
	}

	bool PeerEntryEvent::getVideoSupport() const
	{
		return (getProperty<bool>("VideoSupport"));
	}

	bool PeerEntryEvent::getTextSupport() const
	{
		return (getProperty<bool>("TextSupport"));
	}

	bool PeerEntryEvent::getAcl() const
	{
		return (getProperty<bool>("Acl"));
	}

	std::string PeerEntryEvent::getStatus() const
	{
		return (getProperty("Status"));
	}

	std::string PeerEntryEvent::getRealtimeDevice() const
	{
		return (getProperty("RealtimeDevice"));
	}

	bool PeerEntryEvent::getTrunk() const
	{
		return (getProperty<bool>("Trunk"));
	}

	std::string PeerEntryEvent::getEncryption() const
	{
		return (getProperty("Encryption"));
	}
}/* namespace asteriskcpp */
