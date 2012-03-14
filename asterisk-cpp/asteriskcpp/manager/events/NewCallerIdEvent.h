/*
 * NewCallerIdEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: a-campos
 */

#ifndef NEWCALLERIDEVENT_H_
#define NEWCALLERIDEVENT_H_

#include "AbstractChannelEvent.h"

namespace AsteriskCpp {

/**
 * A NewCallerIdEvent is triggered when the caller id of a channel changes.<p>
 * It is implemented in <code>channel.c</code>
 *
 */
class NewCallerIdEvent: public AbstractChannelEvent {
public:
	inline static std::string getEventName() {
		return ("NewCallerIdEvent");
	}
	NewCallerIdEvent(const std::string & values);
	virtual ~NewCallerIdEvent();

	/**
	 * Returns the CallerId presentation/screening.
	 *
	 * @return the CallerId presentation/screening.
	 * @since 0.2
	 */
	int getCidCallingPres() const;

	/**
	 * Returns the textual respresentation of the CallerId presentation/screening.
	 *
	 * @return the textual respresentation of the CallerId presentation/screening.
	 * @since 0.2
	 */
	std::string getCidCallingPresTxt() const;

};

} /* namespace AsteriskCpp */
#endif /* NEWCALLERIDEVENT_H_ */
