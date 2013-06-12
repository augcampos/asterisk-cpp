/*
 * ConfbridgeEndEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGEENDEVENT_H_
#define CONFBRIDGEENDEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * This event is sent when the last user leaves a conference and it is torn down.
     *
     * @since 1.0.0
     */
    class ConfbridgeEndEvent : public ManagerEvent {
    public:

        ConfbridgeEndEvent(const std::string& values) :
        ManagerEvent(values) {
        }

        virtual ~ConfbridgeEndEvent() {
        }

        /**
         * Returns the id of the conference ended.
         *
         * @return the id of the conference ended.
         */
        const std::string& getConference() const {
            return (getProperty("Conference"));
        }
    };

}

#endif /* CONFBRIDGEENDEVENT_H_ */
