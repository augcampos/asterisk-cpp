/*
 * AbstractChannelStateEvent.h
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#ifndef ABSTRACTCHANNELSTATEEVENT_H_
#define ABSTRACTCHANNELSTATEEVENT_H_

#include "AbstractChannelEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class providing common properties for HangupEvent, NewChannelEvent and NewStateEvent.
     *
     */
    class AbstractChannelStateEvent : public asteriskcpp::AbstractChannelEvent {
    public:
        AbstractChannelStateEvent(const std::string& values);
        virtual ~AbstractChannelStateEvent();

        const std::string& getConnectedlinename() const;

        const std::string& getConnectedlinenum() const;

        /**
         * Returns the new state of the channel.<p>
         * For Asterisk versions prior to 1.6 (that do not send the numeric value) it is derived
         * from the descriptive text.
         *
         * @return the new state of the channel.
         * @since 1.0.0
         */
        int getChannelState() const;

        /**
         * Returns the new state of the channel as a descriptive text.<p>
         * The following states are used:<p>
         * <ul>
         * <li>Down</li>
         * <li>Rsrvd</li>
         * <li>OffHook</li>
         * <li>Dialing</li>
         * <li>Ring</li>
         * <li>Ringing</li>
         * <li>Up</li>
         * <li>Busy</li>
         * <li>Dialing Offhook (since Asterik 1.6)</li>
         * <li>Pre-ring (since Asterik 1.6)</li>
         * <ul>
         *
         * @return the new state of the channel as a descriptive text.
         * @since 1.0.0
         */
        const std::string& getChannelStateDesc() const;

        /**
         * Returns the new state of the channel as a descriptive text.<p>
         * This is an alias for {@link @getChannelStateDesc}.
         *
         * @return the new state of the channel as a descriptive text.
         * @deprecated as of 1.0.0, use {@link #getChannelStateDesc()} instead or even better switch to numeric
         *             values as returned by {@link #getChannelState()}.
         */
        const std::string& getState() const;

    };

} /* namespace asteriskcpp */
#endif /* ABSTRACTCHANNELSTATEEVENT_H_ */
