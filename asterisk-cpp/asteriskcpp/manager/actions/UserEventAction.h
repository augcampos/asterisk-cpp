/*
 * UserEventAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef USEREVENTACTION_H_
#define USEREVENTACTION_H_

#include "AbstractManagerAction.h"
#include "asteriskcpp/manager/events/UserEvent.h"

namespace asteriskcpp {

    /**
     * The UserEventAction will send a custom user event to the Asterisk server.
     * This is equivalent to using the <code>UserEvent</code> application in your
     * dial plan. Before you send this event, you <em>must</em> register your
     * event class with the registerUserEventClass method of the ManagerConnection.
     * 
     * @see org.asteriskjava.manager.event.UserEvent
     * @see org.asteriskjava.manager.ManagerConnection#registerUserEventClass(Class)
     * @author Martin
     */

    class UserEventAction : public AbstractManagerAction {
    public:

        /**
         * The event this action will send
         */
        UserEventAction();

        /**
         * Create the userevent action with userEvent as the event it will send
         * 
         * @param userEvent the subclass representing a custom event
         */
        UserEventAction(UserEvent userEvent);

        virtual ~UserEventAction();


        /**
         * @return the userEvent
         */
        //const UserEvent& getUserEvent() const;


        //void setUserEvent(const UserEvent& userEvent);
    };

} //NAMESPACE

#endif /*USEREVENTACTION_H_*/
