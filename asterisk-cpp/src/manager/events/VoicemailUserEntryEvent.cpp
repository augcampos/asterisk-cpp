/*
 * VoicemailUserEntryEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/VoicemailUserEntryEvent.h"

namespace asteriskcpp {

	VoicemailUserEntryEvent::VoicemailUserEntryEvent(const std::string & values) :
			ResponseEvent(values) {
	}

	VoicemailUserEntryEvent::~VoicemailUserEntryEvent()
	{
	}

	const std::string& VoicemailUserEntryEvent::getVmContext() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getVoicemailbox() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getFullname() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getEmail() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getPager() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getServerEmail() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getMailCommand() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getLanguage() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getTimezone() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getCallback() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getDialout() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getUniqueId() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getExitContext() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	int VoicemailUserEntryEvent::getSayDurationMinimum() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	bool VoicemailUserEntryEvent::getSayEnvelope() const
	{
		return (getGetterValue<bool>(__FUNCTION__));

	}

	bool VoicemailUserEntryEvent::getSayCid() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	bool VoicemailUserEntryEvent::getAttachMessage() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getAttachmentFormat() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	bool VoicemailUserEntryEvent::getDeleteMessage() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	double VoicemailUserEntryEvent::getVolumeGain() const
	{
		return (getGetterValue<double>(__FUNCTION__));
	}

	bool VoicemailUserEntryEvent::getCanReview() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	bool VoicemailUserEntryEvent::getCallOperator() const
	{
		return (getGetterValue<bool>(__FUNCTION__));
	}

	int VoicemailUserEntryEvent::getMaxMessageCount() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int VoicemailUserEntryEvent::getMaxMessageLength() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int VoicemailUserEntryEvent::getNewMessageCount() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	int VoicemailUserEntryEvent::getOldMessageCount() const
	{
		return (getGetterValue<int>(__FUNCTION__));
	}

	const std::string& VoicemailUserEntryEvent::getImapUser() const
	{
		return (getGetterValue(__FUNCTION__));

	}
}
/* namespace asteriskcpp */
