/*
 * SendFaxEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef SENDFAXEVENT_H_
#define SENDFAXEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

	/**
	 * A SendFaxEvent is an event of Digium's Fax For Asterisk add-on.
	 */
	class SendFaxEvent: public AbstractFaxEvent {
	public:
		inline static std::string getEventName() {
			return ("SendFaxEvent");
		}
		SendFaxEvent(const std::string & values);
		virtual ~SendFaxEvent();

		/**
		 * @return the context
		 */
		std::string getContext() const;

		/**
		 * @return the exten
		 */
		std::string getExten() const;

		/**
		 * @return the callerId
		 */
		std::string getCallerId() const;

		/**
		 * @return the localStationId
		 */
		std::string getLocalStationId() const;

		/**
		 * @return the remoteStationId
		 */
		std::string getRemoteStationId() const;

		/**
		 * @return the pagesTransferred
		 */
		std::string getPagesTransferred() const;

		/**
		 * @return the resolution
		 */
		std::string getResolution() const;

		/**
		 * @return the transferRate
		 */
		std::string getTransferRate() const;

		/**
		 * @return the fileName
		 */
		std::string getFileName() const;
	};

} /* namespace asteriskcpp */
#endif /* SENDFAXEVENT_H_ */
