/*
 * ConfbridgeLeaveEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGELEAVEEVENT_H_
#define CONFBRIDGELEAVEEVENT_H_

#include "AbstractChannelEvent.h"

namespace asteriskcpp {

    /**
     * This event is sent when a user leaves a conference.
     *
     * @since 1.0.0
     */
    class ConfbridgeLeaveEvent : public AbstractChannelEvent {
    public:

        ConfbridgeLeaveEvent(const std::string& values) :
        AbstractChannelEvent(values) {
        }

        virtual ~ConfbridgeLeaveEvent() {
        }

        /**
         * Returns the id of the conference the participant left.
         *
         * @return the id of the conference the participant left.
         */
        const std::string& getConference() const {
            return (getProperty("Conference"));
        }
    };

}

#endif /* CONFBRIDGELEAVEEVENT_H_ */
