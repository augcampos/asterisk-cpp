/*
 * LinkEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef LINKEVENT_H_
#define LINKEVENT_H_

#include "BridgeEvent.h"

namespace asteriskcpp {

    /**
     * A LinkEvent is triggered when two voice channels are linked together and voice data exchange
     * commences.<p>
     * Several Link events may be seen for a single call. This can occur when Asterisk fails to setup a
     * native bridge for the call.This is when Asterisk must sit between two telephones and perform
     * CODEC conversion on their behalf.<p>
     * It is implemented in <code>channel.c</code>
     *
     * @deprecated as of 1.0.0, use {@link org.asteriskjava.manager.event.BridgeEvent} and
     *             {@link BridgeEvent#isLink()} instead
     */
    class LinkEvent : public BridgeEvent {
    public:
        LinkEvent(const std::string & values);
        virtual ~LinkEvent();
    };

} /* namespace asterisk_cpp */
#endif /* LINKEVENT_H_ */
