/*
 * RtcpSentEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef RTCPSENTEVENT_H_
#define RTCPSENTEVENT_H_

#include "AbstractRtcpEvent.h"

namespace asteriskcpp {

    /**
     * An RtcpSentEvent is triggered when Asterisk sends an RTCP message.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/rtp.c</code>
     *
     * @since 1.0.0
     */
    class RtcpSentEvent : public AbstractRtcpEvent {
    public:
        RtcpSentEvent(const std::string & values);
        virtual ~RtcpSentEvent();

        /**
         * Returns the IP address the RTCP message has been sent to.
         *
         * @return the IP address the RTCP message has been sent to.
         */
        const std::string& getToAddress() const;

        /**
         * Returns the port the RTCP message has been sent to.
         *
         * @return the port the RTCP message has been sent to.
         */
        int getToPort() const;

        /**
         * Returns our synchronization source identifier that uniquely identifies the source of a stream.
         * @return our synchronization source identifier.
         */
        long getOurSsrc() const;

        double getSentNtp() const;

        long getSentRtp() const;

        /**
         * Returns the number of packets sent.
         *
         * @return the number of packets sent.
         */
        long getSentPackets() const;

        /**
         * Returns the number of octets (bytes) sent.
         *
         * @return the number of octets (bytes) sent.
         */
        long getSentOctets() const;

        long getCumulativeLoss() const;

        long getTheirLastSr() const;
    };

} /* namespace asteriskcpp */
#endif /* RTCPSENTEVENT_H_ */
