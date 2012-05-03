/*
 * TransferEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include <boost/algorithm/string.hpp>
#include "asteriskcpp/manager/events/TransferEvent.h"

namespace asteriskcpp {

	const static std::string TRANSFER_TYPE_ATTENDED = "Attended";
	const static std::string TRANSFER_TYPE_BLIND = "Blind";

	TransferEvent::TransferEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	TransferEvent::~TransferEvent()
	{
	}

	std::string TransferEvent::getChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string TransferEvent::getUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string TransferEvent::getTransferMethod() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string TransferEvent::getTransferType() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	bool TransferEvent::isAttended() const
	{
		return (boost::iequals(getTransferType(), TRANSFER_TYPE_ATTENDED));
	}

	bool TransferEvent::isBlind() const
	{
		return (boost::iequals(getTransferType(), TRANSFER_TYPE_BLIND));
	}

	std::string TransferEvent::getSipCallId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string TransferEvent::getTargetChannel() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string TransferEvent::getTargetUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string TransferEvent::getTransferExten() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string TransferEvent::getTransferContext() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	bool TransferEvent::getTransfer2Parking() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	bool TransferEvent::isParking() const
	{
		return (getTransfer2Parking());
	}
} /* namespace asteriskcpp */
