/*
 * DisconnectEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef DISCONNECTEVENT_H_
#define DISCONNECTEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A DisconnectEvent is triggered when the connection to the asterisk server is lost.<p>
     * It is a pseudo event not directly related to an Asterisk generated event.
     *
     * @see org.asteriskjava.manager.event.ConnectEvent
     */
    class DisconnectEvent : public ManagerEvent {
    public:

        DisconnectEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~DisconnectEvent() {
        }
    };

}
#endif /* DISCONNECTEVENT_H_ */
