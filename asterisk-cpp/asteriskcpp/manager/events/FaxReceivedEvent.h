/*
 * FaxReceivedEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef FAXRECEIVEDEVENT_H_
#define FAXRECEIVEDEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

	/**
	 * A FaxReceivedEvent is triggered by spandsp after a new fax has been received.
	 * <p>
	 * It is only available if you installed the spandsp patches to Asterisk.
	 * <p>
	 * See http://soft-switch.org/installing-spandsp.html for details.
	 * <p>
	 * Implemented in <code>apps/app_rxfax.c</code>.
	 *
	 * @since 0.2
	 */
	class FaxReceivedEvent: public AbstractFaxEvent {
	public:
		inline static std::string getEventName() {
			return ("FaxReceivedEvent");
		}
		FaxReceivedEvent(const std::string & values) :
				AbstractFaxEvent(values) {
		}
		virtual ~FaxReceivedEvent() {
		}

		/**
		 * Returns the extension in Asterisk's dialplan the fax was received
		 * through.
		 *
		 * @return the extension the fax was received through.
		 */
		std::string getExten() const {
			return (getProperty("Exten"));
		}

		/**
		 * Returns the Caller*ID of the calling party or an empty string if none is
		 * available.
		 *
		 * @return the Caller*ID of the calling party.
		 */
		std::string getCallerId() const {
			return (getProperty("CallerId"));
		}

		/**
		 * Retruns the identifier of the remote fax station.
		 *
		 * @return the identifier of the remote fax station.
		 */
		std::string getRemoteStationId() const {
			return (getProperty("RemoteStationId"));
		}

		/**
		 * Returns the identifier of the local fax station.
		 *
		 * @return the identifier of the local fax station.
		 */
		std::string getLocalStationId() const {
			return (getProperty("LocalStationId"));
		}

		/**
		 * Returns the number of pages transferred.
		 *
		 * @return the number of pages transferred.
		 */
		int getPagesTransferred() const {
			return (convertFromString<int>(getProperty("PagesTransferred")));
		}

		/**
		 * Returns the row resolution of the received fax.
		 *
		 * @return the row resolution of the received fax.
		 */
		int getResolution() const {
			return (convertFromString<int>(getProperty("Resolution")));
		}

		/**
		 * Returns the transfer rate in bits/s.
		 *
		 * @return the transfer rate in bits/s.
		 */
		int getTransferRate() const {
			return (convertFromString<int>(getProperty("TransferRate")));
		}

		/**
		 * Returns the filename of the received fax including its full path on the
		 * Asterisk server.
		 *
		 * @return the filename of the received fax
		 */
		std::string getFilename() const {
			return (getProperty("Filename"));
		}
	};

} /* namespace asterisk_cpp */
#endif /* FAXRECEIVEDEVENT_H_ */
