/*
 * FullyBootedEvent.h
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#ifndef FULLYBOOTEDEVENT_H_
#define FULLYBOOTEDEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"
#include <string>

namespace asteriskcpp {

    class FullyBootedEvent : public ManagerEvent {
    public:

        FullyBootedEvent() :
        ManagerEvent() {
        }

        FullyBootedEvent(const std::string& values) :
        ManagerEvent(values) {
        }

        virtual ~FullyBootedEvent() {
        }

    };

}

#endif /* FULLYBOOTEDEVENT_H_ */
