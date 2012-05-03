/*
 * SendFaxStatusEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef SENDFAXSTATUSEVENT_H_
#define SENDFAXSTATUSEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

	/**
	 * A SendFaxStatusEvent is an event of Digium's Fax For Asterisk add-on.
	 */
	class SendFaxStatusEvent: public AbstractFaxEvent {
	public:
		inline static std::string getEventName() {
			return ("SendFaxStatusEvent");
		}
		SendFaxStatusEvent(const std::string & values);
		virtual ~SendFaxStatusEvent();

		/**
		 * @return the context
		 */
		std::string getContext() const;

		/**
		 * @return the exten
		 */
		std::string getExten() const;

		/**
		 * @return the status
		 */
		std::string getStatus() const;

		/**
		 * @return the callerId
		 */
		std::string getCallerId() const;

		/**
		 * @return the localStationId
		 */
		std::string getLocalStationId() const;

		/**
		 * @return the fileName
		 */
		std::string getFileName() const;
	};

} /* namespace asteriskcpp */
#endif /* SENDFAXSTATUSEVENT_H_ */
