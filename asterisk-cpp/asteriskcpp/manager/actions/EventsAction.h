/*
 * EventsAction.h
 *
 *  Created on: Aug 18, 2011
 *      Author: augcampos
 */

#ifndef EVENTSACTION_H_
#define EVENTSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * With the EventsAction you can specify what kind of events should be sent to
     * this manager connection.
     *
     */
    class EventsAction : public AbstractManagerAction {
    public:
        EventsAction(const std::string& eventMask);

        virtual ~EventsAction();

        /**
         * Returns the event mask.
         */
        const std::string& getEventMask() const;

        /**
         * Sets the event mask.<p>
         * Set to "on" if all events should be send, "off" if not events should be
         * sent or a combination of "system", "call" and "log" (separated by ',') to
         * specify what kind of events should be sent.
         */
        void setEventMask(const std::string& eventMask);

    };

} //NS

#endif /* EVENTSACTION_H_ */
