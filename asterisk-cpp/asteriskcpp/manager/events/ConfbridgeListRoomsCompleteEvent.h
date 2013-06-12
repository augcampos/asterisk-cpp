/*
 * ConfbridgeListRoomsCompleteEvent.h
 *
 *  Created on: Aug 8, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGELISTROOMSCOMPLETEEVENT_H_
#define CONFBRIDGELISTROOMSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    class ConfbridgeListRoomsCompleteEvent : public ResponseEvent {
    public:

        ConfbridgeListRoomsCompleteEvent(const std::string& values) :
        ResponseEvent(values) {
        }

        virtual ~ConfbridgeListRoomsCompleteEvent() {
        }

        /**
         * Returns the status of the list that is always "Complete".
         */
        const std::string& getEventList() const {
            return (getProperty("EventList"));
        }

        /**
         * Returns the number listitems.
         *
         * @return the number items returned.
         */
        const std::string& getListItems() const {
            return (getProperty("ListItems"));
        }
    };

}

#endif /* CONFBRIDGELISTROOMSCOMPLETEEVENT_H_ */
