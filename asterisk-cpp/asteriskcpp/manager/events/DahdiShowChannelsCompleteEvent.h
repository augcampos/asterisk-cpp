/*
 * DahdiShowChannelsCompleteEvent.h
 *
 *  Created on: Feb 15, 2012
 *      Author: augcampos
 */

#ifndef DAHDISHOWCHANNELSCOMPLETEEVENT_H_
#define DAHDISHOWCHANNELSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A DahdiShowChannelsCompleteEvent is triggered after the state of all Dahdi channels has been reported
     * in response to a DahdiShowChannelsAction.
     *
     * @see org.asteriskjava.manager.action.DahdiShowChannelsAction
     * @see org.asteriskjava.manager.event.DahdiShowChannelsEvent
     *
     * @author augcampos
     * @version $Id$
     */
    class DahdiShowChannelsCompleteEvent : public ResponseEvent {
    public:
        DahdiShowChannelsCompleteEvent(const std::string& values);
        virtual ~DahdiShowChannelsCompleteEvent();

        int getItems() const;

        /**
         * Returns if the status of the eventlist (should be Complete).<p>
         *
         * @return the status of the list.
         * @since 1.0.0
         */
        const std::string& getEventlist() const;

        /**
         * Returns the number of channels reported.<p>
         *
         * @return the number of channels reported.
         */
        int getListitems() const;
    };

} /* namespace asteriskcpp */
#endif /* DAHDISHOWCHANNELSCOMPLETEEVENT_H_ */
