/*
 * HoldEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef HOLDEVENT_H_
#define HOLDEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A HoldEvent is triggered when a channel is put on hold (or no longer on hold).<p>
     * It is implemented in <code>channels/chan_sip.c</code>.<p>
     * Available since Asterisk 1.2 for SIP channels, as of Asterisk 1.6 this event
     * is also supported for IAX2 channels.<p>
     * To receive HoldEvents for SIP channels you must set <code>callevents = yes</code>
     * in <code>sip.conf</code>.
     *
     * @since 0.2
     */
    class HoldEvent : public asteriskcpp::ManagerEvent {
    public:

        HoldEvent(const std::string & values) :
        ManagerEvent(values) {
            /* Asterisk prior to 1.6 uses Hold and Unhold events instead of the status
             * So we set the status to true in the Hold event and to false in Unhold.
             * For Asterisk 1.6 this is overridden by the status property received with
             * the hold event.
             */
            setStatus(true);

        }

        virtual ~HoldEvent() {
        }

        /**
         * Returns the name of the channel.
         *
         * @return channel the name of the channel.
         */
        const std::string& getChannel() const {
            return (getProperty("Channel"));
        }

        /**
         * Returns the unique id of the channel.
         *
         * @return the unique id of the channel.
         */
        const std::string& getUniqueId() const {
            return (getProperty("UniqueId"));
        }

        /**
         * Returns whether this is a hold or unhold event.
         *
         * @return <code>true</code> if this a hold event, <code>false</code> if it's an unhold event.
         * @since 1.0.0
         */
        const std::string& getStatus() const {
            return (getProperty("Status"));
        }

        /**
         * Returns whether this is a hold or unhold event.
         *
         * @param status <code>true</code> if this a hold event, <code>false</code> if it's an unhold event.
         * @since 1.0.0
         */
        void setStatus(bool status) {
            setProperty("Status", convertToString(status));
        }

        /**
         * Returns whether this is a hold event.
         *
         * @return <code>true</code> if this a hold event, <code>false</code> if it's an unhold event.
         * @since 1.0.0
         */
        bool isHold() const {
            return (stringToBool(getStatus()));
        }

        /**
         * Returns whether this is an unhold event.
         *
         * @return <code>true</code> if this an unhold event, <code>false</code> if it's a hold event.
         * @since 1.0.0
         */
        bool isUnhold() const {
            return (!stringToBool(getStatus()));
        }
    };

} /* namespace asterisk_cpp */
#endif /* HOLDEVENT_H_ */
