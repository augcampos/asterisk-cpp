/*
 * RtcpReceivedEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef RTCPRECEIVEDEVENT_H_
#define RTCPRECEIVEDEVENT_H_

#include "AbstractRtcpEvent.h"

namespace asteriskcpp {

    /**
     * An RTCPReceivedEvent is triggered when Asterisk receives an RTCP message.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/rtp.c</code>
     *
     * @since 1.0.0
     */
    class RtcpReceivedEvent : public AbstractRtcpEvent {
    public:
        RtcpReceivedEvent(const std::string & values);
        virtual ~RtcpReceivedEvent();

        /**
         * Returns the IP address the RTCP message has been received from.
         *
         * @return the IP address the RTCP message has been received from.
         */
        const std::string& getFromAddress() const;

        /**
         * Returns the port of the RTCP message has been received from.
         *
         * @return the port of the RTCP message has been received from.
         */
        int getFromPort() const;

        /**
         * Indicates the format of the payload, typical values are 200 for sender reports and
         * 201 for receiver reports.
         *
         * @return the format of the payload.
         * @see #PT_SENDER_REPORT
         * @see #PT_RECEIVER_REPORT
         */
        long getPt() const;

        /*
        void setPt(const std::string ptString)
                        {
                // Format is "PT: %d(%s)"
                if (ptString == null || ptString.length() == 0)
                                {
                        this.pt = null;
                        return;
                }

                if (ptString.indexOf('(') > 0)
                                {
                        this.pt = Long.parseLong(ptString.substring(0, ptString.indexOf('(')));
                }
                else
                {
                        this.pt = Long.parseLong(ptString);
                }
        }
         */

        long getReceptionReports() const;

        /**
         * Returns the synchronization source identifier of the sender.
         *
         * @return the synchronization source identifier of the sender.
         */
        long getSenderSsrc() const;

        /**
         * Returns the number of packets lost so far.
         *
         * @return the number of packets lost.
         */
        long getPacketsLost() const;

        long getHighestSequence() const;

        long getSequenceNumberCycles() const;

        double getLastSr() const;

        /**
         * Returns the round trip time.
         *
         * @return the round trip time in seconds, may be <code>null</code>.
         */
        long getRtt() const;
    };

} /* namespace asteriskcpp */
#endif /* RTCPRECEIVEDEVENT_H_ */
