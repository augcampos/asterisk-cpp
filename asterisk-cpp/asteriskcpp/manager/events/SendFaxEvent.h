/*
 * SendFaxEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef SENDFAXEVENT_H_
#define SENDFAXEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

    /**
     * A SendFaxEvent is an event of Digium's Fax For Asterisk add-on.
     */
    class SendFaxEvent : public AbstractFaxEvent {
    public:
        SendFaxEvent(const std::string & values);
        virtual ~SendFaxEvent();

        /**
         * @return the context
         */
        const std::string& getContext() const;

        /**
         * @return the exten
         */
        const std::string& getExten() const;

        /**
         * @return the callerId
         */
        const std::string& getCallerId() const;

        /**
         * @return the localStationId
         */
        const std::string& getLocalStationId() const;

        /**
         * @return the remoteStationId
         */
        const std::string& getRemoteStationId() const;

        /**
         * @return the pagesTransferred
         */
        const std::string& getPagesTransferred() const;

        /**
         * @return the resolution
         */
        const std::string& getResolution() const;

        /**
         * @return the transferRate
         */
        const std::string& getTransferRate() const;

        /**
         * @return the fileName
         */
        const std::string& getFileName() const;
    };

} /* namespace asteriskcpp */
#endif /* SENDFAXEVENT_H_ */
