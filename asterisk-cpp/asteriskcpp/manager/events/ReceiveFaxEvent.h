/*
 * ReceiveFaxEvent.h
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#ifndef RECEIVEFAXEVENT_H_
#define RECEIVEFAXEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ReceiveFaxEvent is an event of Digium's Fax For Asterisk add-on.
     */
    class ReceiveFaxEvent : public ManagerEvent {
    public:
        ReceiveFaxEvent(const std::string & values);
        virtual ~ReceiveFaxEvent();

        const std::string& getChannel() const;

        const std::string& getContext() const;

        const std::string& getExten() const;

        const std::string& getCallerId() const;

        const std::string& getRemoteStationId() const;

        const std::string& getLocalStationId() const;

        int getPagesTransferred() const;

        const std::string& getResolution() const;

        int getTransferRate() const;

        const std::string& getFileName() const;
    };

} /* namespace asteriskcpp */
#endif /* RECEIVEFAXEVENT_H_ */
