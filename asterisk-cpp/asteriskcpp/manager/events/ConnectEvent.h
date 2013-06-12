/*
 * ConnectEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CONNECTEVENT_H_
#define CONNECTEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ConnectEvent is triggered after successful login to the Asterisk server.<p>
     * It is a pseudo event not directly related to an Asterisk generated event.
     *
     * @see org.asteriskjava.manager.event.DisconnectEvent
     */
    class ConnectEvent : public ManagerEvent {
    public:

        ConnectEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~ConnectEvent() {
        }

        /**
         * Returns the version of the protocol. For example "Asterisk Call Manager/1.0" for Asterisk up to 1.4 and
         * "Asterisk Call Manager/1.1" for Asterisk 1.6.
         *
         * @return the version of the protocol.
         */
        const std::string& getProtocolIdentifier() const {
            return (getProperty("ProtocolIdentifier"));
        }
    };

}
#endif /* CONNECTEVENT_H_ */
