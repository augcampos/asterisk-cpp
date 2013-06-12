/*
 * ConfbridgeListEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGELISTEVENT_H_
#define CONFBRIDGELISTEVENT_H_

#include "ResponseEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

    class ConfbridgeListEvent : public ResponseEvent {
    public:

        ConfbridgeListEvent(const std::string& values) :
        ResponseEvent(values) {
        }

        virtual ~ConfbridgeListEvent() {
        }

        /**
         * Returns the id of the conference to be listed.
         *
         * @return the id of the conference to be listed.
         */
        const std::string& getConference() const {
            return (getProperty("Conference"));
        }

        /**
         * Returns the Caller*ID Number of the channel in the list of the conference.
         *
         * @return the Caller*ID Number of the channel in the list of the conference.
         */
        const std::string& getCallerIDnum() const {
            return (getProperty("CallerIDnum"));
        }

        /**
         * Returns the Caller*ID Name of the channel in the list of the conference.
         *
         * @return the Caller*ID Name of the channel in the list of the conference.
         */
        const std::string& getCallerIdName() const {
            return (getProperty("CallerIdName"));
        }

        /**
         * Returns the role of the caller in the list admin = yes or no of the conference.
         *
         * @return the role of the caller in the list admin = yes or no of the conference.
         */
        bool getAdmin() const {
            return (getProperty<bool>("admin"));
        }

        const std::string& getMarkedUser() const {
            return (getProperty("MarkedUser"));
        }

        /**
         * Returns the name of the channel in the list.
         */
        const std::string& getChannel() const {
            return (getProperty("Channel"));
        }
    };

}

#endif /* CONFBRIDGELISTEVENT_H_ */
