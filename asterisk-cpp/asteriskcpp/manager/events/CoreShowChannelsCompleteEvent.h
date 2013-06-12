/*
 * CoreShowChannelsCompleteEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CORESHOWCHANNELSCOMPLETEEVENT_H_
#define CORESHOWCHANNELSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A CoreShowChannelsCompleteEvent is triggered after the state of all channels has been reported in response
     * to a CoreShowChannelsAction.
     *
     * @see org.asteriskjava.manager.action.CoreShowChannelsAction
     * @see org.asteriskjava.manager.event.CoreShowChannelEvent
     * @since 1.0.0
     */
    class CoreShowChannelsCompleteEvent : public ResponseEvent {
    public:

        CoreShowChannelsCompleteEvent(const std::string& values) :
        ResponseEvent(values) {
        }

        virtual ~CoreShowChannelsCompleteEvent() {
        }

        /**
         * Returns if the status of the eventlist (should be Complete).<p>
         *
         * @return the status of the list.
         * @since 1.0.0
         */
        const std::string& getEventlist() const {
            return (getProperty("Eventlist"));
        }

        /**
         * Returns the number of channels reported.<p>
         *
         * @return the number of channels reported.
         */
        int getListitems() const {
            return (convertFromString<int>(getProperty("Listitems")));
        }

    };

}

#endif /* CORESHOWCHANNELSCOMPLETEEVENT_H_ */
