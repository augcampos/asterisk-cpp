/*
 * RegistrationsCompleteEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef REGISTRATIONSCOMPLETEEVENT_H_
#define REGISTRATIONSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A RegistrationsCompleteEvent is triggered after the details of all SIP
     * registrations has been reported in response to an SipShowRegistryAction.<p>
     * Available since Asterisk 1.6
     *
     * @see RegistryEntryEvent
     * @see org.asteriskjava.manager.action.SipShowRegistryAction
     * @since 1.0.0
     */
    class RegistrationsCompleteEvent : public ResponseEvent {
    public:
        RegistrationsCompleteEvent(const std::string & values);
        virtual ~RegistrationsCompleteEvent();

        /**
         * Returns the number of SIP registrations that have been reported.
         *
         * @return the number of SIP registrations that have been reported.
         */
        int getListItems() const;

        /**
         * Returns always "Complete".
         *
         * @return always returns "Complete" confirming that all RegistryEntry events have been sent.
         */
        const std::string& getEventList() const;
    };

} /* namespace asteriskcpp */
#endif /* REGISTRATIONSCOMPLETEEVENT_H_ */
