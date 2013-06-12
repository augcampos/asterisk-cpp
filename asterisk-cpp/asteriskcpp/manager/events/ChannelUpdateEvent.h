/*
 * ChannelUpdateEvent.h
 *
 *  Created on: Aug 6, 2011
 *      Author: a-campos
 */

#ifndef CHANNELUPDATEEVENT_H_
#define CHANNELUPDATEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ChannelUpdateEvent provides additional channel type specific information like
     * the SIP call id or IAX2 call numbers about a channel.<p>
     * Available since Asterisk 1.6.<p>
     * It is implemented in <code>channels/chan_sip.c</code>, <code>channels/chan_iax2.c</code> and
     * <code>channels/chan_gtalk.c</code>
     *
     * @since 1.0.0
     */
    class ChannelUpdateEvent : public ManagerEvent {
    public:

        ChannelUpdateEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~ChannelUpdateEvent() {
        }

        /**
         * Returns the type of channel, that is "IAX2" for an IAX2
         * channel or "SIP" for a SIP channel.<br>
         * For Google Talk it is either "GTALK" or "Gtalk".
         *
         * @return the type of channel that is registered.
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

#endif /* CHANNELUPDATEEVENT_H_ */
