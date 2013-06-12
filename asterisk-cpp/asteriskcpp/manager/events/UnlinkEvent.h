/*
 * UnlinkEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef UNLINKEVENT_H_
#define UNLINKEVENT_H_

#include "BridgeEvent.h"

namespace asteriskcpp {

    /**
     * An UnlinkEvent is triggered when a link between two voice channels is discontinued, for example,
     * just before call completion.<p>
     * It is implemented in <code>channel.c</code>
     *
     * @deprecated as of 1.0.0, use {@link org.asteriskjava.manager.event.BridgeEvent} and
     *             {@link BridgeEvent#isUnlink()} instead
     */
    class UnlinkEvent : public BridgeEvent {
    public:
        UnlinkEvent(const std::string & values);
        virtual ~UnlinkEvent();
    };

} /* namespace asteriskcpp */
#endif /* UNLINKEVENT_H_ */
