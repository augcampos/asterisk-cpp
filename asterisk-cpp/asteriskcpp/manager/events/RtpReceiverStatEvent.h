/*
 * RtpReceiverStatEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef RTPRECEIVERSTATEVENT_H_
#define RTPRECEIVERSTATEVENT_H_

#include "AbstractRtpStatEvent.h"

namespace asteriskcpp {

    /**
     * An RtpReceiverStatEvent is triggered at the end of an RTP transmission and reports
     * transmission statistics.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/rtp.c</code>
     *
     * @since 1.0.0
     */
    class RtpReceiverStatEvent : public AbstractRtpStatEvent {
    public:
        RtpReceiverStatEvent(const std::string & values);
        virtual ~RtpReceiverStatEvent();

        /**
         * Returns the number of packets received.
         *
         * @return the number of packets received.
         */
        long getReceivedPackets() const;

        double getTransit() const;

        /**
         * Returns the number of receiver reports.
         *
         * @return the number of receiver reports.
         */
        long getRrCount() const;
    };

} /* namespace asteriskcpp */
#endif /* RTPRECEIVERSTATEVENT_H_ */
