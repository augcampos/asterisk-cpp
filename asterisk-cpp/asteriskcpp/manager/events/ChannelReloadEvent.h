/*
 * ChannelReloadEvent.h
 *
 *  Created on: Aug 6, 2011
 *      Author: a-campos
 */

#ifndef CHANNELRELOADEVENT_H_
#define CHANNELRELOADEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ChannelReloadEvent is when a channel driver is reloaded, either on startup
     * or by request.
     * <p/>
     * For example, <code>channels/chan_sip.c</code> triggers the channel reload
     * event when the SIP configuration is reloaded from sip.conf because the 'sip
     * reload' command was issued at the Manager interface, the CLI, or for another
     * reason.
     * <p/>
     * Available since Asterisk 1.4.
     * <p/>
     * It is implemented in <code>channels/chan_sip.c</code>
     *
     */
    class ChannelReloadEvent : public ManagerEvent {
    public:

        ChannelReloadEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~ChannelReloadEvent() {
        }

        /**
         * Returns the type of channel that was reloaded. For <code>channels/chan_sip.c</code>, this would be "SIP".
         *
         * @return the type of channel that was reloaded (e.g. SIP)
         * @since 1.0.0
         */
        const std::string& getChannelType() const {
            return (getProperty("ChannelType"));
        }

        /**
         * Returns the channel that was reloaded. For
         * <code>channels/chan_sip.c</code>, this would be "SIP"
         *
         * @return the type of channel that was reloaded (e.g. SIP)
         * @deprecated use {@link #getChannelType()} instead.
         */
        const std::string& getChannel() const {
            return (getProperty("ChannelType"));
        }

        /**
         * Returns the number of peers defined during the configuration of this
         * channel (e.g. sip peer definitions).
         *
         * @return the number of peers defined during the configuration of this
         *         channel (e.g. sip peer definitions)
         */
        int getPeerCount() const {
            return (convertFromString<int>(getProperty("PeerCount")));
        }

        /**
         * @return the number of registrations with other channels (e.g.
         *         registrations with other sip proxies)
         */
        int getRegistryCount() const {
            return (convertFromString<int>(getProperty("RegistryCount")));
        }

        /**
         * Returns the reason that this channel was reloaded as received from Asterisk, for
         * example "CLIRELOAD (Channel module reload by CLI command)".
         * <p/>
         * Usually you don't want to use this method directly.
         *
         * @return the reason for the reload as received from Asterisk.
         * @see #getReloadReasonCode()
         * @see #getReloadReasonDescription()
         */
        const std::string& getReloadReason() const {
            return (getProperty("ReloadReason"));
        }

        /**
         * Returns the reason that this channel was reloaded.<p>
         * Only the code part of the reason is returned. This is one of
         * <ul>
         * <li>LOAD</li>
         * <li>RELOAD</li>
         * <li>CLIRELOAD</li>
         * <li>MANAGERRELOAD</li>
         * </ul>
         *
         * @return the code of the reason for the reload
         * @see org.asteriskjava.manager.event.ChannelReloadEvent#REASON_CLI_RELOAD
         * @see org.asteriskjava.manager.event.ChannelReloadEvent#REASON_LOAD
         * @see org.asteriskjava.manager.event.ChannelReloadEvent#REASON_RELOAD
         * @see org.asteriskjava.manager.event.ChannelReloadEvent#REASON_MANAGER_RELOAD
         */
        const std::string& getReloadReasonCode() const {
            return (getProperty("ReloadReasonCode"));
        }

        /**
         * Returns the reason that this channel was reloaded as a human readable descriptive
         * string, for example "Channel module reload by CLI command".
         *
         * @return the descriptive version of the reason for the reload.
         */
        const std::string& getReloadReasonDescription() const {
            return (getProperty("ReloadReasonDescription"));
        }

        /**
         * @return the number of users defined during the configuration of this
         *         channel (e.g. sip user definitions)
         */
        int getUserCount() const {
            return (convertFromString<int>(getProperty("UserCount")));
        }

    };

}

#endif /* CHANNELRELOADEVENT_H_ */
