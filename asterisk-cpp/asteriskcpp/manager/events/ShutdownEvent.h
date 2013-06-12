/*
 * ShutdownEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef SHUTDOWNEVENT_H_
#define SHUTDOWNEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ShutdownEvent is triggered when the asterisk server is shut down or restarted.<p>
     * It is implemented in <code>asterisk.c</code>
     *
     */
    class ShutdownEvent : public ManagerEvent {
    public:
        ShutdownEvent(const std::string & values);
        virtual ~ShutdownEvent();

        /**
         * Returns the kind of shutdown or restart. Possible values are "Uncleanly" and "Cleanly". A
         * shutdown is considered unclean if there are any active channels when the system is shut down.
         */
        const std::string& getShutdown() const;

        /**
         * Returns <code>true</code> if the server has been restarted; <code>false</code> if it has
         * been halted.
         */
        bool getRestart() const;
    };

} /* namespace asteriskcpp */
#endif /* SHUTDOWNEVENT_H_ */
