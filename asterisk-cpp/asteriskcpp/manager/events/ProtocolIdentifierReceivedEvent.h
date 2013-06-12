/*
 * ProtocolIdentifierReceivedEvent.h
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#ifndef PROTOCOLIDENTIFIERRECEIVEDEVENT_H_
#define PROTOCOLIDENTIFIERRECEIVEDEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ProtocolIdentifierReceivedEvent is triggered when the network connection to the Asterisk
     * server has been established and the protocol identifier has been sent.<p>
     * It is a pseudo event not directly related to an Asterisk generated event.<p>
     * The ProtocolIdentifierReceivedEvent is not dispatched to clients so you will
     * probably never see it.
     *
     */
    class ProtocolIdentifierReceivedEvent : public ManagerEvent {
    public:
        ProtocolIdentifierReceivedEvent(const std::string & values);
        virtual ~ProtocolIdentifierReceivedEvent();

        /**
         * Returns the version of the protocol.
         *
         * @return the version of the protocol.
         */
        const std::string& getProtocolIdentifier() const;
    };

} /* namespace asteriskcpp */
#endif /* PROTOCOLIDENTIFIERRECEIVEDEVENT_H_ */
