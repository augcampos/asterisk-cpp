/*
 * JabberEventEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef JABBEREVENTEVENT_H_
#define JABBEREVENTEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A JabberEventEvent is triggered when Asterisk receives a Jabber (XMPP) message.<p>
     * It is implemented in <code>res/res_jabber.c</code><p>
     * Available since Asterisk 1.4
     *
     * @since 1.0.0
     */
    class JabberEventEvent : public asteriskcpp::ManagerEvent {
    public:
        JabberEventEvent(const std::string & values);
        virtual ~JabberEventEvent();

        const std::string& getAccount() const;
        const std::string& getPacket() const;

    };

} /* namespace asterisk_cpp */
#endif /* JABBEREVENTEVENT_H_ */
