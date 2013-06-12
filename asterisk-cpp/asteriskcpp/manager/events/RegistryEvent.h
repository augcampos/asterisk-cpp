/*
 * RegistryEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef REGISTRYEVENT_H_
#define REGISTRYEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A RegistryEvent is triggered when this asterisk server attempts to register
     * as a client at another SIP or IAX server.<p>
     * This event is implemented in <code>channels/chan_iax2.c</code> and
     * <code>channels/chan_sip.c</code>
     */
    class RegistryEvent : public ManagerEvent {
    public:
        RegistryEvent(const std::string & values);
        virtual ~RegistryEvent();

        /**
         * Returns the type of channel that is registered, that is "IAX2" for an IAX2
         * channel or "SIP" for a SIP channel.
         *
         * @return the type of channel that is registered.
         * @since 1.0.0
         */
        const std::string& getChannelType() const;

        /**
         * Returns the type of channel that is registered, that is "IAX2" for an IAX2
         * channel or "SIP" for a SIP channel.
         *
         * @see #getChannelType()
         * @since 0.3
         * @deprecated
         */
        const std::string& getChannelDriver() const;

        /**
         * Returns the type of channel that is registered, that is "IAX2" for an IAX2
         * channel or "SIP" for a SIP channel.
         *
         * @see #getChannelType()
         * @deprecated
         */
        const std::string& getChannel() const;

        /**
         * Returns the domain or host name of the SIP or IAX2 server.<p>
         * This is the host part used in the <code>register</code> lines in
         * <code>iax.conf</code> and <code>sip.conf</code>.
         *
         * @return the domain or host name of the SIP or IAX2 server.
         */
        const std::string& getDomain() const;

        /**
         * Returns the username used for registration.<p>
         * SIP send the username in case of a registration timeout, IAX2 in case of
         * a registration failure. Otherwise the username is <code>null</code>.
         *
         * @return the username used for registration.
         */
        const std::string& getUsername() const;

        /**
         * Returns the registration state.<p>
         * For sip this may be one of (not sure if all of these are exposed via the
         * manager api, at least "Registered" and "Timeout" are used though)
         * <ul>
         * <li>Registered</li>
         * <li>Unregistered</li>
         * <li>Request Sent</li>
         * <li>Auth. Sent</li>
         * <li>Rejected</li>
         * <li>Timeout</li>
         * <li>No Authentication</li>
         * <li>Unreachable</li>
         * </ul>
         * IAX2 only uses
         * <ul>
         * <li>Rejected</li>
         * </ul>
         * Successful IAX2 registrations do not use the this property at all.
         *
         * @return the registration state.
         */
        const std::string& getStatus() const;

        /**
         * Returns the cause of a rejected registration.
         *
         * @return the cause of a rejected registration or <code>null</code> if the cause is unknown.
         * @since 0.2
         */
        const std::string& getCause() const;

    };

} /* namespace asteriskcpp */
#endif /* REGISTRYEVENT_H_ */
