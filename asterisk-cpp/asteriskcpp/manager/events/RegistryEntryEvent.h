/*
 * RegistryEntryEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef REGISTRYENTRYEVENT_H_
#define REGISTRYENTRYEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A RegistryEntry is triggered in response to a SipShowRegistryAction and contains
     * information about a SIP registration.<p>
     * It is implemented in <code>channels/chan_sip.c</code>
     *
     * @since 1.0.0
     */
    class RegistryEntryEvent : public ResponseEvent {
    public:
        RegistryEntryEvent(const std::string & values);
        virtual ~RegistryEntryEvent();

        /**
         * Returns the epoch since the last registration.
         *
         * @return epoch since the last registration.
         */
        long getRegistrationTime() const;

        /**
         * Returns the port number used for the registration.
         *
         * @return the port number.
         */
        int getPort() const;

        /**
         * Returns the username used for the registration.
         *
         * @return the username.
         */
        const std::string& getUsername() const;

        /**
         * Returns the IP address or hostname used for the registration.
         *
         * @return the IP address or the hostname.
         */
        const std::string& getHost() const;

        /**
         * Returns the value of state.
         *
         * @return the value of state
         */
        const std::string& getState() const;

        /**
         * Returns the value of refresh.
         *
         * @return the value of refresh.
         */
        int getRefresh() const;
    };

} /* namespace asteriskcpp */
#endif /* REGISTRYENTRYEVENT_H_ */
