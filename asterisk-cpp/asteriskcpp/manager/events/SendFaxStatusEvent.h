/*
 * SendFaxStatusEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef SENDFAXSTATUSEVENT_H_
#define SENDFAXSTATUSEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

    /**
     * A SendFaxStatusEvent is an event of Digium's Fax For Asterisk add-on.
     */
    class SendFaxStatusEvent : public AbstractFaxEvent {
    public:
        SendFaxStatusEvent(const std::string & values);
        virtual ~SendFaxStatusEvent();

        /**
         * @return the context
         */
        const std::string& getContext() const;

        /**
         * @return the exten
         */
        const std::string& getExten() const;

        /**
         * @return the status
         */
        const std::string& getStatus() const;

        /**
         * @return the callerId
         */
        const std::string& getCallerId() const;

        /**
         * @return the localStationId
         */
        const std::string& getLocalStationId() const;

        /**
         * @return the fileName
         */
        const std::string& getFileName() const;
    };

} /* namespace asteriskcpp */
#endif /* SENDFAXSTATUSEVENT_H_ */
