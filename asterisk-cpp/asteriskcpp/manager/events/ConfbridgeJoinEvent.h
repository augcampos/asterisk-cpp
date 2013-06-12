/*
 * ConfbridgeJoinEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGEJOINEVENT_H_
#define CONFBRIDGEJOINEVENT_H_

#include "AbstractChannelEvent.h"

namespace asteriskcpp {

    /**
     * This event is sent when a user joins a conference - either one already in progress or as the first user to
     * join a newly instantiated bridge.
     *
     * @since 1.0.0
     */
    class ConfbridgeJoinEvent : public AbstractChannelEvent {
    public:

        ConfbridgeJoinEvent(const std::string& values) :
        AbstractChannelEvent(values) {
        }

        virtual ~ConfbridgeJoinEvent() {
        }

        /**
         * Returns the id of the conference the participant joined.
         *
         * @return id of the conference the participant joined.
         */
        const std::string& getConference() const {
            return (getProperty("Conference"));
        }
    };

}

#endif /* CONFBRIDGEJOINEVENT_H_ */
