/*
 * StatusEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef STATUSEVENT_H_
#define STATUSEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A StatusEvent is triggered for each active channel in response to a StatusAction.
     *
     * @see org.asteriskjava.manager.action.StatusAction
     */
    class StatusEvent : public ResponseEvent {
    public:
        StatusEvent(const std::string & values);
        virtual ~StatusEvent();

        /**
         * Returns the name of this channel.
         *
         * @return the name of this channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the Caller*ID Number of this channel.<p>
         * This property is deprecated as of Asterisk 1.4, use {@link #getCallerIdNum()} instead.
         *
         * @return the Caller*ID Number of this channel or <code>null</code> if none is available.
         * @deprecated
         */
        const std::string& getCallerId() const;

        /**
         * Returns the Caller*ID Number of this channel.
         *
         * @return the Caller*ID Number of this channel or <code>null</code> if none is available.
         * @since 0.3
         */
        const std::string& getCallerIdNum() const;

        /**
         * Returns the Caller*ID Name of this channel.
         *
         * @return the Caller*ID Name of this channel or <code>null</code> if none is available.
         */
        const std::string& getCallerIdName() const;

        /**
         * Returns the account code of this channel.
         *
         * @return the account code of this channel.
         * @since 1.0.0
         */
        const std::string& getAccountCode() const;

        /**
         * Returns the account code of this channel.
         *
         * @return the account code of this channel.
         * @deprecated since 1.0.0, use {@link #getAccountCode()} instead.
         */
        const std::string& getAccount() const;

        /**
         * Returns the state of the channel.<p>
         * For Asterisk versions prior to 1.6 (that do not send the numeric value) it is derived
         * from the descriptive text.
         *
         * @return the state of the channel.
         * @since 1.0.0
         */
        int getChannelState() const;

        /**
         * Returns the state of the channel as a descriptive text.
         *
         * @return the state of the channel as a descriptive text.
         * @since 1.0.0
         */
        const std::string& getChannelStateDesc() const;

        /**
         * Returns the state of the channel as a descriptive text.
         *
         * @return the state of the channel as a descriptive text.
         * @deprecated use {@link #getChannelStateDesc()} instead.
         */
        const std::string& getState() const;

        const std::string& getContext() const;

        const std::string& getExtension() const;

        int getPriority() const;

        /**
         * Returns the number of elapsed seconds.
         *
         * @return the number of elapsed seconds.
         */
        int getSeconds() const;

        /**
         * Returns the name of the linked channel if this channel is bridged.
         *
         * @return the name of the linked channel if this channel is bridged.
         * @since 1.0.0
         */
        const std::string& getBridgedChannel() const;

        /**
         * Returns the name of the linked channel if this channel is bridged.
         *
         * @return the name of the linked channel if this channel is bridged.
         * @deprecated as of 1.0.0, use {@link #getBridgedChannel()} instead.
         */
        const std::string& getLink() const;

        /**
         * Returns the unique id of the linked channel if this channel is bridged.<p>
         * Available since Asterisk 1.6.
         *
         * @return the unique id of the linked channel if this channel is bridged.
         * @since 1.0.0
         */
        const std::string& getBridgedUniqueId() const;

        /**
         * Returns the unique id of this channel.
         *
         * @return the unique id of this channel.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the channel variables if the {@link org.asteriskjava.manager.action.StatusAction#setVariables(String)}
         * property has been set.<p>
         * Available since Asterisk 1.6
         *
         * @return the channel variables.
         * @since 1.0.0
         */
        std::map<std::string, std::string> getVariables() const;

    };

} /* namespace asteriskcpp */
#endif /* STATUSEVENT_H_ */
