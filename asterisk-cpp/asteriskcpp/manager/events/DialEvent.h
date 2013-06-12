/*
 * DialEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef DIALEVENT_H_
#define DIALEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A dial event is triggered whenever a phone attempts to dial someone.<p>
     * This event is implemented in <code>apps/app_dial.c</code>.<p>
     * Available since Asterisk 1.2.
     *
     * @author Asteria Solutions Group, Inc. <http://www.asteriasgi.com/>
     * @since 0.2
     */
    class DialEvent : public ManagerEvent {
    public:

        DialEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~DialEvent() {
        }

        /**
         * Since Asterisk 1.6 the begin and the end of a dial command generate a Dial event. The
         * subEvent property returns whether the dial started execution ("Begin") or completed ("End").
         * As Asterisk prior to 1.6 only sends one event per Dial command this always returns "Begin"
         * for Asterisk prior to 1.6.<br>
         * For an "End" sub event only the properies channel, unqiue id and dial status are available,
         * for a "Begin" sub event all properties are available except for the dial status.
         *
         * @return "Begin" or "End" for Asterisk since 1.6, "Begin" for Asterisk prior to 1.6.
         * @since 1.0.0
         */
        const std::string& getSubEvent() const {
            return (getProperty("SubEvent"));
        }

        /**
         * Returns the name of the source channel.
         *
         * @return the name of the source channel.
         * @since 1.0.0
         */
        const std::string& getChannel() const {
            return (getProperty("Channel"));
        }

        /**
         * Returns the name of the source channel.
         *
         * @return the name of the source channel.
         * @deprecated as of 1.0.0, use {@link #getChannel()} instead.
         */
        const std::string& getSrc() const {
            return (getChannel());
        }

        /**
         * Returns the name of the destination channel.
         *
         * @return the name of the destination channel.
         */
        const std::string& getDestination() const {
            return (getProperty("Destination"));
        }

        /**
         * Returns the the Caller*ID Number.
         *
         * @return the the Caller*ID Number or "<unknown>" if none has been set.
         * @since 1.0.0
         */
        const std::string& getCallerIdNum() const {
            return (getProperty("CallerIdNum"));
        }

        /**
         * Returns the Caller*ID.
         *
         * @return the Caller*ID or "<unknown>" if none has been set.
         * @deprecated as of 1.0.0, use {@link #getCallerIdNum()} instead.
         */
        const std::string& getCallerId() const {
            return (getCallerIdNum());
        }

        /**
         * Returns the Caller*ID Name.
         *
         * @return the Caller*ID Name or "<unknown>" if none has been set.
         */
        const std::string& getCallerIdName() const {
            return (getProperty("CallerIdName"));
        }

        /**
         * Returns the unique ID of the source channel.
         *
         * @return the unique ID of the source channel.
         * @deprecated as of 1.0.0, use {@link #getUniqueId()} instead.
         */
        const std::string& getSrcUniqueId() const {
            return (getUniqueID());
        }

        /**
         * Returns the unique ID of the destination channel.
         *
         * @return the unique ID of the destination channel.
         */
        const std::string& getDestUniqueId() const {
            return (getProperty("DestUniqueId"));
        }

        /**
         * Returns the dial string passed to the Dial application.<p>
         * Available since Asterisk 1.6.
         *
         * @return the dial string passed to the Dial application.
         * @since 1.0.0
         */
        const std::string& getDialString() const {
            return (getProperty("DialString"));
        }

        /**
         * For end subevents this returns whether the completion status of the dial application.<br>
         * Possible values are:
         * <ul>
         * <li>CHANUNAVAIL</li>
         * <li>CONGESTION</li>
         * <li>NOANSWER</li>
         * <li>BUSY</li>
         * <li>ANSWER</li>
         * <li>CANCEL</li>
         * <li>DONTCALL</li>
         * <li>TORTURE</li>
         * <li>INVALIDARGS</li>
         * </ul>
         * It corresponds the the DIALSTATUS variable used in the dialplan.<p>
         * Available since Asterisk 1.6.
         *
         * @return the completion status of the dial application.
         * @since 1.0.0
         */
        const std::string& getDialStatus() const {
            return (getProperty("DialStatus"));
        }

    };

}

#endif /* DIALEVENT_H_ */
