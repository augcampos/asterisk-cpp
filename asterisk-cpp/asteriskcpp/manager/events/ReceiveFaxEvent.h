/*
 * ReceiveFaxEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef RECEIVEFAXEVENT_H_
#define RECEIVEFAXEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

	/**
	 * A ReceiveFaxEvent is an event of Digium's Fax For Asterisk add-on.
	 */
	class ReceiveFaxEvent: public ManagerEvent {
	public:
		inline static std::string getEventName() {
			return ("ReceiveFaxEvent");
		}
		ReceiveFaxEvent(const std::string & values);
		virtual ~ReceiveFaxEvent();

		std::string getChannel() const;

		std::string getContext() const;

		std::string getExten() const;

		std::string getCallerId() const;

		std::string getRemoteStationId() const;

		std::string getLocalStationId() const;

		int getPagesTransferred() const;

		std::string getResolution() const;

		int getTransferRate() const;

		std::string getFileName() const;
	};

} /* namespace asteriskcpp */
#endif /* RECEIVEFAXEVENT_H_ */
