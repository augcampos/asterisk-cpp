/*
 * T38FaxStatusEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef T38FAXSTATUSEVENT_H_
#define T38FAXSTATUSEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

    /**
     * A FaxDocumentStatusEvent is an event of Digium's Fax For Asterisk add-on.
     */
    class T38FaxStatusEvent : public asteriskcpp::AbstractFaxEvent {
    public:
        T38FaxStatusEvent(const std::string & values);
        virtual ~T38FaxStatusEvent();

        /**
         * @return the maxLag
         */
        const std::string& getMaxLag() const;

        /**
         * @return the totalLag
         */
        const std::string& getTotalLag() const;

        /**
         * @return the averageLag
         */
        const std::string& getAverageLag() const;

        /**
         * @return the totalEvents
         */
        int getTotalEvents() const;

        /**
         * @return the t38SessionDuration
         */
        const std::string& getT38SessionDuration() const;

        /**
         * @return the t38PacketsSent
         */
        int getT38PacketsSent() const;

        /**
         * @return the t38OctetsSent
         */
        int getT38OctetsSent() const;

        /**
         * @return the averageTxDataRate
         */
        const std::string& getAverageTxDataRate() const;

        /**
         * @return the t38PacketsReceived
         */
        int getT38PacketsReceived() const;

        /**
         * @return the t38OctetsReceived
         */
        int getT38OctetsReceived() const;

        /**
         * @return the averageRxDataRate
         */
        const std::string& getAverageRxDataRate() const;

        /**
         * @return the jitterBufferOverflows
         */
        int getJitterBufferOverflows() const;

        /**
         * @return the minimumJitterSpace
         */
        int getMinimumJitterSpace() const;

        /**
         * @return the unrecoverablePackets
         */
        int getUnrecoverablePackets() const;

        // convenience methods
        int getTotalLagInMilliSeconds() const;

        int getMaxLagInMilliSeconds() const;

        double getT38SessionDurationInSeconds() const;

        double getAverageLagInMilliSeconds() const;

        int getAverageTxDataRateInBps() const;

        int getAverageRxDataRateInBps() const;
    };

} /* namespace asteriskcpp */
#endif /* T38FAXSTATUSEVENT_H_ */
