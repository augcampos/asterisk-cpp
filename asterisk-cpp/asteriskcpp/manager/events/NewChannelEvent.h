/*
 * NewChannelEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: a-campos
 */

#ifndef NEWCHANNELEVENT_H_
#define NEWCHANNELEVENT_H_

#include "AbstractChannelStateEvent.h"

namespace asteriskcpp {

/**
 * A NewChannelEvent is triggered when a new channel is created.<p>
 * It is implemented in <code>channel.c</code>
 *
 */
class NewChannelEvent: public AbstractChannelStateEvent {
public:
	inline static std::string getEventName() {
		return ("NewChannelEvent");
	}
	NewChannelEvent(const std::string & values);
	virtual ~NewChannelEvent();

	/**
	 * Returns the account code of the new channel.<p>
	 * This property is available since Asterisk 1.6.
	 *
	 * @return the account code of the new channel.
	 * @since 1.0.0
	 */
	std::string getAccountCode() const;

	/**
	 * Returns the context of the dialplan entry the channel started at.<p>
	 * This property is available since Asterisk 1.6.
	 *
	 * @return the context of the dialplan entry the channel started at.
	 * @since 1.0.0
	 */
	std::string getContext() const;

	/**
	 * Returns the extension of the dialplan entry the channel started at.<p>
	 * This property is available since Asterisk 1.6.
	 *
	 * @return the extension of the dialplan entry the channel started at.
	 * @since 1.0.0
	 */
	std::string getExten() const;
};

} /* namespace asteriskcpp */
#endif /* NEWCHANNELEVENT_H_ */
