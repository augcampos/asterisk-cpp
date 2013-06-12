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

    PeerEntryEvent::~PeerEntryEvent() {
    }

    const std::string& PeerEntryEvent::getChannelType() const {
        return (getProperty("ChannelType"));
    }

    const std::string& PeerEntryEvent::getObjectName() const {
        return (getProperty("ObjectName"));
    }

    const std::string& PeerEntryEvent::getObjectUserName() const {
        return (getProperty("ObjectUserName"));
    }

    const std::string& PeerEntryEvent::getChanObjectType() const {
        return (getProperty("ChanObjectType"));
    }

    const std::string& PeerEntryEvent::getIpAddress() const {
        return (getProperty("IpAddress"));
    }

    int PeerEntryEvent::getIpPort() const {
        return (getProperty<int>("IpPort"));
    }

    int PeerEntryEvent::getPort() const {
        return (getProperty<int>("Port"));
    }

    bool PeerEntryEvent::getDynamic() const {
        return (getProperty<bool>("Dynamic"));
    }

    bool PeerEntryEvent::getNatSupport() const {
        return (getProperty<bool>("NatSupport"));
    }

    bool PeerEntryEvent::getVideoSupport() const {
        return (getProperty<bool>("VideoSupport"));
    }

    bool PeerEntryEvent::getTextSupport() const {
        return (getProperty<bool>("TextSupport"));
    }

    bool PeerEntryEvent::getAcl() const {
        return (getProperty<bool>("Acl"));
    }

    const std::string& PeerEntryEvent::getStatus() const {
        return (getProperty("Status"));
    }

    const std::string& PeerEntryEvent::getRealtimeDevice() const {
        return (getProperty("RealtimeDevice"));
    }

    bool PeerEntryEvent::getTrunk() const {
        return (getProperty<bool>("Trunk"));
    }

    const std::string& PeerEntryEvent::getEncryption() const {
        return (getProperty("Encryption"));
    }
}/* namespace asteriskcpp */
