/*
 * ConfbridgeTalkingEvent.h
 *
 *  Created on: Aug 8, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGETALKINGEVENT_H_
#define CONFBRIDGETALKINGEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * This event is sent when the conference detects that a user has either begin or stopped talking.
     *
     * @since 1.0.0
     */
    class ConfbridgeTalkingEvent : public ManagerEvent {
    public:

        ConfbridgeTalkingEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~ConfbridgeTalkingEvent() {
        }

        /**
         * Returns the id of the conference.
         *
         * @return the id of the conference.
         */
        const std::string& getConference() const {
            return (getProperty("Conference"));
        }

        /**
         * Returns the name of the channel on which a participant started or stopped talking.
         *
         * @return the name of the channel on which a participant started or stopped talking.
         */
        const std::string& getChannel() const {
            return (getProperty("Channel"));
        }

        /**
         * Returns the talking status.
         *
         * @return <code>true</code> if the participant started talking, <code>false</code> if the participant stopped talking.
         */
        bool getTalkingStatus() const {
            return (getProperty<bool>("TalkingStatus"));
        }
    };

}

#endif /* CONFBRIDGETALKINGEVENT_H_ */
