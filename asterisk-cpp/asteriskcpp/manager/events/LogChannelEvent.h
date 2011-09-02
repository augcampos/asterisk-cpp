/*
 * LogChannelEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef LOGCHANNELEVENT_H_
#define LOGCHANNELEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

/**
 * A LogChannelEvent is triggered when logging is turned on or off.<p>
 * It is implemented in <code>logger.c</code><p>
 * Available since Asterisk 1.2
 *
 * @since 0.2
 */
class LogChannelEvent: public ManagerEvent {
public:
	inline static std::string getEventName() {
		return ("LogChannelEvent");
	}
	LogChannelEvent(const std::string & values);
	virtual ~LogChannelEvent();

	/**
	 * Returns the name of the log channel.
	 *
	 * @return the name of the log channel.
	 */
	std::string getChannel() const;

	/**
	 * Returns if logging has been enabled or disabled.
	 *
	 * @return Boolean.TRUE if logging has been enabled, Boolean.FALSE if it has
	 *         been disabled.
	 */
	bool getEnabled() const;

	/**
	 * Returns the reason code for disabling logging.
	 *
	 * @return the reason code for disabling logging.
	 */
	int getReason() const;

	/**
	 * Returns the textual representation of the reason for disabling logging.
	 *
	 * @return the textual representation of the reason for disabling logging.
	 */
	std::string getReasonTxt() const;
};

} /* namespace asterisk_cpp */
#endif /* LOGCHANNELEVENT_H_ */
