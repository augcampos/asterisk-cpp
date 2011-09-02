/*
 * CoreShowChannelEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CORESHOWCHANNELEVENT_H_
#define CORESHOWCHANNELEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

/**
 * A CoreShowChannelEvent is triggered for each active channel in response to a CoreShowChannelsAction.
 *
 * @see org.asteriskjava.manager.action.CoreShowChannelsAction
 * @since 1.0.0
 */
class CoreShowChannelEvent: public ResponseEvent {
public:
	inline static std::string getEventName() {
		return ("CoreShowChannelEvent");
	}
	CoreShowChannelEvent(const std::string & values) :
			ResponseEvent(values) {
	}
	virtual ~CoreShowChannelEvent() {
	}

	/**
	 * Returns the channel state
	 *
	 * @return channel state
	 */
	std::string getChannelState() const {
		return (getProperty("ChannelState"));
	}

	/**
	 * Returns the Account code
	 *
	 * @return accountcode
	 */
	std::string getAccountcode() const {
		return (getProperty("Accountcode"));
	}

	/**
	 * Returns the Aplication is runnning that channel at that time
	 *
	 * @return aplication name
	 */
	std::string getApplication() const {
		return (getProperty("Application"));
	}

	/**
	 * Returns the Aplication Data is runnning that channel at that time
	 * this is the parameters passed to that dialplan application
	 *
	 * @return aplication data
	 */
	std::string getApplicationdata() const {
		return (getProperty("Applicationdata"));
	}

	/**
	 * Returns the Bridged Channel if is bridged to one
	 *
	 * @return Channel name
	 */
	std::string getBridgedChannel() const {
		return (getProperty("BridgedChannel"));
	}

	/**
	 * Returns the Bridged UniqueID
	 *
	 * @return uniqueid
	 */
	std::string getBridgeduniqueid() const {
		return (getProperty("Bridgeduniqueid"));
	}

	/**
	 * Returns the CallerID
	 *
	 * @return callerid
	 */
	std::string getCalleridnum() const {
		return (getProperty("Calleridnum"));
	}

	/**
	 * Returns the Originate Channel name
	 *
	 * @return Channel name
	 */
	std::string getChannel() const {
		return (getProperty("Channel"));
	}

	/**
	 * Returns the Channel state description (RING,...)
	 *
	 * @return description
	 */
	std::string getChannelstatedesc() const {
		return (getProperty("Channelstatedesc"));
	}

	/**
	 * Returns the Context the channel is
	 *
	 * @return context
	 */
	std::string getContext() const {
		return (getProperty("Context"));
	}

	/**
	 * Returns the duration of the call
	 *
	 * @return duration
	 */
	std::string getDuration() const {
		return (getProperty("Duration"));
	}

	/**
	 * Returns the Extension dialed
	 *
	 * @return extension
	 */
	std::string getExtension() const {
		return (getProperty("Extension"));
	}

	/**
	 * Returns the Priority the channel actualy is
	 *
	 * @return priority
	 */
	std::string getPriority() const {
		return (getProperty("Priority"));
	}
};

}

#endif /* CORESHOWCHANNELEVENT_H_ */
