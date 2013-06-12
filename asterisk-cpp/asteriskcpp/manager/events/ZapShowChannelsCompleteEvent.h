/*
 * ZapShowChannelsCompleteEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef ZAPSHOWCHANNELSCOMPLETEEVENT_H_
#define ZAPSHOWCHANNELSCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A ZapShowChannelsCompleteEvent is triggered after the state of all zap channels has been reported
     * in response to a ZapShowChannelsAction.
     *
     * @see org.asteriskjava.manager.action.ZapShowChannelsAction
     * @see org.asteriskjava.manager.event.ZapShowChannelsEvent
     *
     */
    class ZapShowChannelsCompleteEvent : public ResponseEvent {
    public:
        ZapShowChannelsCompleteEvent(const std::string & values);
        virtual ~ZapShowChannelsCompleteEvent();
    };

} /* namespace asteriskcpp */
#endif /* ZAPSHOWCHANNELSCOMPLETEEVENT_H_ */
