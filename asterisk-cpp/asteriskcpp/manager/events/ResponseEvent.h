/*
 * ResponseEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef RESPONSEEVENT_H_
#define RESPONSEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class for events triggered in response to a ManagerAction.<p>
     * All ResponseEvents contain an additional action id property that links the
     * event to the action that caused it.
     *
     * @see org.asteriskjava.manager.action.ManagerAction
     */
    class ResponseEvent : public ManagerEvent {
    public:

        ResponseEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~ResponseEvent() {
        }

        /**
         * Returns the user provided action id of the ManagerAction that caused
         * this event. If the application did not set an action id this method
         * returns <code>null</code>.
         *
         * @return the action id of the ManagerAction that caused this event or
         *         <code>null</code> if none was set.
         * @see org.asteriskjava.manager.action.ManagerAction#setActionId(String)
         */
        const std::string& getActionId() const {
            return (getProperty("ActionId"));
        }

        /**
         * Returns the internal action id of the ManagerAction that caused this
         * event.<p>
         * Warning: This method is internal to Asterisk-Java and should never be
         * used in application code.
         *
         * @return the internal action id of the ManagerAction that caused this event.
         * @since 0.2
         */
        const std::string& getInternalActionId() const {
            return (getProperty("InternalActionId"));
        }
    };

}

#endif /* RESPONSEEVENT_H_ */
