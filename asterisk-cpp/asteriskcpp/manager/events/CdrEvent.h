/*
 * CdrEvent.h
 *
 *  Created on: Aug 5, 2011
 *      Author: a-campos
 */

#ifndef CDREVENT_H_
#define CDREVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

#define DATE_TIME_FORMAT "%Y-%m-%d %T"

namespace asteriskcpp {

    /**
     * A CdrEvent is triggered when a call detail record is generated, usually at the end of a call.<p>
     * To enable CdrEvents you have to add <code>enabled = yes</code> to the general section in
     * <code>cdr_manager.conf</code>.<p>
     * This event is implemented in <code>cdr/cdr_manager.c</code>
     *
     */
    class CdrEvent : public ManagerEvent {
    public:

        CdrEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~CdrEvent() {
        }

        /**
         * Returns the account number that is usually used to identify the party to bill for the call.<p>
         * Corresponds to CDR field <code>accountcode</code>.
         *
         * @return the account number.
         */
        const std::string& getAccountCode() const {
            return (getProperty("AccountCode"));
        }

        /**
         * Returns the Caller*ID number.<p>
         * Corresponds to CDR field <code>src</code>.
         *
         * @return the Caller*ID number.
         */
        const std::string& getSrc() const {
            return (getProperty("Src"));
        }

        /**
         * Returns the destination extension.<p>
         * Corresponds to CDR field <code>dst</code>.
         *
         * @return the destination extension.
         */
        const std::string& getDestination() const {
            return (getProperty("Destination"));
        }

        /**
         * Returns the destination context.<p>
         * Corresponds to CDR field <code>dcontext</code>.
         *
         * @return the destination context.
         */
        const std::string& getDestinationContext() const {
            return (getProperty("DestinationContext"));
        }

        /**
         * Returns the Caller*ID with text.<p>
         * Corresponds to CDR field <code>clid</code>.
         *
         * @return the Caller*ID with text
         */
        const std::string& getCallerId() const {
            return (getProperty("CallerId"));
        }

        /**
         * Returns the name of the channel, for example "SIP/1310-asfe".<p>
         * Corresponds to CDR field <code>channel</code>.
         *
         * @return the name of the channel.
         */
        const std::string& getChannel() const {
            return (getProperty("Channel"));
        }

        /**
         * Returns the name of the destination channel if appropriate.<p>
         * Corresponds to CDR field <code>dstchannel</code>.
         *
         * @return the name of the destination channel or <code>null</code> if not available.
         */
        const std::string& getDestinationChannel() const {
            return (getProperty("DestinationChannel"));
        }

        /**
         * Returns the last application if appropriate, for example "VoiceMail".<p>
         * Corresponds to CDR field <code>lastapp</code>.
         *
         * @return the last application or <code>null</code> if not avaialble.
         */
        const std::string& getLastApplication() const {
            return (getProperty("LastApplication"));
        }

        /**
         * Returns the last application's data (arguments), for example "s1234".<p>
         * Corresponds to CDR field <code>lastdata</code>.
         *
         * @return the last application's data or <code>null</code> if not avaialble.
         */
        const std::string& getLastData() const {
            return (getProperty("LastData"));
        }

        /**
         * Returns when the call has started.<p>
         * This corresponds to CDR field <code>start</code>.
         *
         * @return A string of the format "%Y-%m-%d %T" (strftime(3)) representing the date/time the
         * call has started, for example "2006-05-19 11:54:48".
         */
        const std::string& getStartTime() const {
            return (getProperty("StartTime"));
        }

        /**
         * Returns the start time as Date object.<p>
         * This method asumes that the Asterisk server's timezone equals the default
         * timezone of your JVM.
         *
         * @return the start time as Date object.
         * @since 0.3
         */
        time_t getStartTimeAsDate() const {
            return (stringToTime(getStartTime(), DATE_TIME_FORMAT));
        }

        /**
         * Returns the start time as Date object.
         *
         * @param tz the timezone of the Asterisk server.
         * @return the start time as Date object.
         * @since 0.3
         */
        time_t getStartTimeAsDate(int tz) const {
            //TODO: Implement if needed
            return (0);
        }

        /**
         * Returns when the call was answered.<p>
         * This corresponds to CDR field <code>answered</code>.
         *
         * @return A string of the format "%Y-%m-%d %T" (strftime(3)) representing the date/time the
         * call was answered, for example "2006-05-19 11:55:01"
         */
        const std::string& getAnswerTime() const {
            return (getProperty("AnswerTime"));
        }

        /**
         * Returns the answer time as Date object.<p>
         * This method asumes that the Asterisk server's timezone equals the default
         * timezone of your JVM.
         *
         * @return the answer time as Date object.
         * @since 0.3
         */
        time_t getAnswerTimeAsDate() const {
            return (stringToTime(getAnswerTime(), DATE_TIME_FORMAT));
        }

        /**
         * Returns the answer time as Date object.
         *
         * @param tz the timezone of the Asterisk server.
         * @return the answer time as Date object.
         * @since 0.3
         */
        time_t getAnswerTimeAsDate(int tz) const {
            //TODO: Implement if needed
            return (0);
        }

        /**
         * Returns when the call has ended.<p>
         * This corresponds to CDR field <code>end</code>.
         *
         * @return A string of the format "%Y-%m-%d %T" (strftime(3)) representing the date/time the
         * call has ended, for example "2006-05-19 11:58:21"
         */
        const std::string& getEndTime() const {
            return (getProperty("EndTime"));
        }

        /**
         * Returns the end time as Date object.<p>
         * This method asumes that the Asterisk server's timezone equals the default
         * timezone of your JVM.
         *
         * @return the end time as Date object.
         * @since 0.3
         */
        time_t getEndTimeAsDate() const {
            return (stringToTime(getEndTime(), DATE_TIME_FORMAT));
        }

        /**
         * Returns the end time as Date object.
         *
         * @param tz the timezone of the Asterisk server.
         * @return the end time as Date object.
         * @since 0.3
         */
        time_t getEndTimeAsDate(int tz) const {
            //TODO: Implement if needed
            return (0);
        }

        /**
         * Returns the total time (in seconds) the caller spent in the system from dial to hangup.<p>
         * Corresponds to CDR field <code>duration</code>.
         *
         * @return the total time in system in seconds.
         */
        unsigned long getDuration() const {
            return (convertFromString<unsigned long>(getProperty("Duration")));
        }

        /**
         * Returns the total time (in seconds) the call was up from answer to hangup.<p>
         * Corresponds to CDR field <code>billsec</code>.
         *
         * @return the total time in call in seconds.
         */
        unsigned long getBillableSeconds() const {
            return (convertFromString<unsigned long>(getProperty("BillableSeconds")));
        }

        /**
         * Returns what happened to the call.<p>
         * This is one of
         * <ul>
         * <li>{@link #DISPOSITION_NO_ANSWER}
         * <li>{@link #DISPOSITION_FAILED}
         * <li>{@link #DISPOSITION_BUSY}
         * <li>{@link #DISPOSITION_ANSWERED}
         * <li>{@link #DISPOSITION_UNKNOWN}
         * </ul>
         * Corresponds to CDR field <code>disposition</code>.
         *
         * @return the disposition.
         */
        const std::string& getDisposition() const {
            return (getProperty("Disposition"));
        }

        /**
         * Returns the AMA (Automated Message Accounting) flags.<p>
         * This is one of
         * <ul>
         * <li>{@link #AMA_FLAG_OMIT}
         * <li>{@link #AMA_FLAG_BILLING}
         * <li>{@link #AMA_FLAG_DOCUMENTATION}
         * <li>{@link #AMA_FLAG_UNKNOWN}
         * </ul>
         * Corresponds to CDR field <code>amaflags</code>.
         *
         * @return the AMA flags.
         */
        const std::string& getAmaFlags() const {
            return (getProperty("AMAFlags"));
        }

        /**
         * Returns the user-defined field as set by <code>Set(CDR(userfield)=Value)</code>.<p>
         * Corresponds to CDR field <code>userfield</code>.
         *
         * @return the user-defined field.
         */
        const std::string& getUserField() const {
            return (getProperty("UserField"));
        }

    };

}

#endif /* CDREVENT_H_ */
