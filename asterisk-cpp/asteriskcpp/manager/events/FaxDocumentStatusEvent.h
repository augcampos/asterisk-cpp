/*
 * FaxDocumentStatusEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef FAXDOCUMENTSTATUSEVENT_H_
#define FAXDOCUMENTSTATUSEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

/**
 * A FaxDocumentStatusEvent is an event of Digium's Fax For Asterisk add-on.
 */
class FaxDocumentStatusEvent: public AbstractFaxEvent {
public:
	inline static std::string getEventName() {
		return ("FaxDocumentStatusEvent");
	}
	FaxDocumentStatusEvent(const std::string & values) :
			AbstractFaxEvent(values) {
	}
	virtual ~FaxDocumentStatusEvent() {
	}

	/**
	 * @return the documentNumber
	 */
	int getDocumentNumber() const {
		return (convertFromString<int>(getProperty("DocumentNumber")));
	}

	/**
	 * @return the lastError
	 */
	int getLastError() const {
		return (convertFromString<int>(getProperty("LastError")));
	}

	/**
	 * @return the pageCount
	 */
	int getPageCount() const {
		return (convertFromString<int>(getProperty("PageCount")));
	}

	/**
	 * @return the startPage
	 */
	int getStartPage() const {
		return (convertFromString<int>(getProperty("StartPage")));
	}

	/**
	 * @return the LastPageProcessed
	 */
	int getLastPageProcessed() const {
		return (convertFromString<int>(getProperty("LastPageProcessed")));
	}

	/**
	 * @return the RetransmitCount
	 */
	int getRetransmitCount() const {
		return (convertFromString<int>(getProperty("RetransmitCount")));
	}

	/**
	 * @return the TransferPels
	 */
	int getTransferPels() const {
		return (convertFromString<int>(getProperty("TransferPels")));
	}

	/**
	 * @return the TransferRate
	 */
	int getTransferRate() const {
		return (convertFromString<int>(getProperty("TransferRate")));
	}

	/**
	 * @return the transferDuration
	 */
	std::string getTransferDuration() const {
		return (getProperty("TransferDuration"));
	}

	/**
	 * @return the BadLineCount
	 */
	int getBadLineCount() const {
		return (convertFromString<int>(getProperty("BadLineCount")));
	}

	/**
	 * @return the ProcessedStatus
	 */
	std::string getProcessedStatus() const {
		return (getProperty("ProcessedStatus"));
	}

	/**
	 * @return the DocumentTime
	 */
	std::string getDocumentTime() const {
		return (getProperty("DocumentTime"));
	}

	/**
	 * @return the LocalSid
	 */
	std::string getLocalSid() const {
		return (getProperty("LocalSid"));
	}

	/**
	 * @return the LocalDis
	 */
	std::string getLocalDis() const {
		return (getProperty("LocalDis"));
	}

	/**
	 * @return the RemoteSid
	 */
	std::string getRemoteSid() const {
		return (getProperty("RemoteSid"));
	}

	/**
	 * @return the RemoteDis
	 */
	std::string getRemoteDis() const {
		return (getProperty("RemoteDis"));
	}
};

}

#endif /* FAXDOCUMENTSTATUSEVENT_H_ */
