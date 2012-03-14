/*
 * NewAccountCodeEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef NEWACCOUNTCODEEVENT_H_
#define NEWACCOUNTCODEEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

	/**
	 * A NewAccountCodeEvent indicates that the account code used for CDR has
	 * changed.<p>
	 * Available since Asterisk 1.6.<p>
	 * It is implemented in <code>main/cdr.c</code>
	 * @since 1.0.0
	 */
	class NewAccountCodeEvent: public asteriskcpp::ManagerEvent {
	public:
		inline static std::string getEventName() {
			return ("NewAccountCodeEvent");
		}
		NewAccountCodeEvent(const std::string & values);
		virtual ~NewAccountCodeEvent();

		/**
		 * Returns the name of the channel.
		 * @return the name of the channel.
		 */
		std::string getChannel() const;

		/**
		 * Returns the unique id of the channel.
		 * @return the unique id of the channel.
		 */
		std::string getUniqueId() const;

		/**
		 * Returns the new account code.
		 * @return the new account code.
		 */
		std::string getAccountCode() const;

		/**
		 * Returns the old account code.
		 * @return the old account code.
		 */
		std::string getOldAccountCode() const;
	};

} /* namespace asteriskcpp */
#endif /* NEWACCOUNTCODEEVENT_H_ */
