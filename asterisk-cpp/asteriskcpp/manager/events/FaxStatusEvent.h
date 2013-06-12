/*
 * FaxStatusEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef FAXSTATUSEVENT_H_
#define FAXSTATUSEVENT_H_

#include "AbstractFaxEvent.h"

namespace asteriskcpp {

    /**
     * A FaxDocumentStatusEvent is an event of Digium's Fax For Asterisk add-on.
     */
    class FaxStatusEvent : public asteriskcpp::AbstractFaxEvent {
    public:

        FaxStatusEvent(const std::string & values) :
        AbstractFaxEvent(values) {
        }

        virtual ~FaxStatusEvent() {
        }

        /**
         * @return the operatingMode
         */
        const std::string& getOperatingMode() const {
            return (getProperty("OperatingMode"));
        }

        /**
         * @return the result
         */
        const std::string& getResult() const {
            return (getProperty("Result"));
        }

        /**
         * @return the error
         */
        const std::string& getError() const {
            return (getProperty("Error"));
        }

        /**
         * @return the callDuration
         */
        double getCallDuration() const {
            return (convertFromString<double>(getProperty("CallDuration")));
        }

        /**
         * @return the ecmMode
         */
        const std::string& getEcmMode() const {
            return (getProperty("EcmMode"));
        }

        /**
         * @return the dataRate
         */
        int getDataRate() const {
            return (convertFromString<int>(getProperty("DataRate")));
        }

        /**
         * @return the imageResolution
         */
        const std::string& getImageResolution() const {
            return (getProperty("ImageResolution"));
        }

        /**
         * @return the imageEncoding
         */
        const std::string& getImageEncoding() const {
            return (getProperty("ImageEncoding"));
        }

        /**
         * @return the pageSize
         */
        const std::string& getPageSize() const {
            return (getProperty("PageSize"));
        }

        /**
         * @return the documentNumber
         */
        int getDocumentNumber() const {
            return (convertFromString<int>(getProperty("DocumentNumber")));
        }

        /**
         * @return the pageNumber
         */
        int getPageNumber() const {
            return (convertFromString<int>(getProperty("PageNumber")));
        }

        /**
         * @return the fileName
         */
        const std::string& getFileName() const {
            return (getProperty("FileName"));
        }

        /**
         * @return the txPages
         */
        int getTxPages() const {
            return (convertFromString<int>(getProperty("TxPages")));
        }

        /**
         * @return the txBytes
         */
        int getTxBytes() const {
            return (convertFromString<int>(getProperty("TxBytes")));
        }

        /**
         * @return the totalTxLines
         */
        int getTotalTxLines() const {
            return (convertFromString<int>(getProperty("TotalTxLines")));
        }

        /**
         * @return the rxPages
         */
        int getRxPages() const {
            return (convertFromString<int>(getProperty("RxPages")));
        }

        /**
         * @return the rxBytes
         */
        int getRxBytes() const {
            return (convertFromString<int>(getProperty("RxBytes")));
        }

        /**
         * @return the totalRxLines
         */
        int getTotalRxLines() const {
            return (convertFromString<int>(getProperty("TotalRxLines")));
        }

        /**
         * @return the totalBadLines
         */
        int getTotalBadLines() const {
            return (convertFromString<int>(getProperty("TotalBadLines")));
        }

        /**
         * @return the disDcsDtcCtcCount
         */
        int getDisDcsDtcCtcCount() const {
            return (convertFromString<int>(getProperty("DisDcsDtcCtcCount")));
        }

        /**
         * @return the cfrCount
         */
        int getCfrCount() const {
            return (convertFromString<int>(getProperty("CfrCount")));
        }

        /**
         * @return the fttCount
         */
        int getFttCount() const {
            return (convertFromString<int>(getProperty("FttCount")));
        }

        /**
         * @return the mcfCount
         */
        int getMcfCount() const {
            return (convertFromString<int>(getProperty("McfCount")));
        }

        /**
         * @return the pprCount
         */
        int getPprCount() const {
            return (convertFromString<int>(getProperty("PprCount")));
        }

        /**
         * @return the rtnCount
         */
        int getRtnCount() const {
            return (convertFromString<int>(getProperty("RtnCount")));
        }

        /**
         * @return the dcnCount
         */
        int getDcnCount() const {
            return (convertFromString<int>(getProperty("DcnCount")));
        }

        /**
         * @return the remoteStationId
         */
        const std::string& getRemoteStationId() const {
            return (getProperty("RemoteStationId"));
        }

    };

} /* namespace asterisk_cpp */
#endif /* FAXSTATUSEVENT_H_ */
