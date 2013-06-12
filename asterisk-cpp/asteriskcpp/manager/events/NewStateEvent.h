/*
 * NewStateEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef NEWSTATEEVENT_H_
#define NEWSTATEEVENT_H_

#include "AbstractChannelStateEvent.h"

namespace asteriskcpp {

    /**
     * A NewStateEvent is triggered when the state of a channel has changed.<p>
     * It is implemented in <code>channel.c</code>
     *
     */
    class NewStateEvent : public AbstractChannelStateEvent {
    public:
        NewStateEvent(const std::string & values);
        virtual ~NewStateEvent();
    };

} /* namespace asteriskcpp */
#endif /* NEWSTATEEVENT_H_ */
