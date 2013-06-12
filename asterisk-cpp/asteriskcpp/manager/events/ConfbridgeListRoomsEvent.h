/*
 * ConfbridgeListRoomsEvent.h
 *
 *  Created on: Aug 8, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGELISTROOMSEVENT_H_
#define CONFBRIDGELISTROOMSEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    class ConfbridgeListRoomsEvent : public ResponseEvent {
    public:

        ConfbridgeListRoomsEvent(const std::string& values) :
        ResponseEvent(values) {
        }

        virtual ~ConfbridgeListRoomsEvent() {
        }

        /**
         * Returns the id of the conference to be listed.
         */
        const std::string& getConference() const {
            return (getProperty("Conference"));
        }

        /**
         * Returns the number of participants in this conference.
         *
         * @return the number of participants in this conference.
         */
        int getParties() const {
            return (convertFromString<int>(getProperty("Parties")));
        }

        /**
         * Returns the number of marked participants in this conference.
         *
         * @return the number of marked participants in this conference.
         */
        int getMarked() const {
            return (convertFromString<int>(getProperty("Marked")));
        }

        int getLocked() const {
            return (getProperty<bool>("Locked"));
        }
    };

}
#endif /* CONFBRIDGELISTROOMSEVENT_H_ */
