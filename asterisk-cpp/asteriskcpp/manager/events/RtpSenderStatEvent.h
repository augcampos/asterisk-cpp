/*
 * RtpSenderStatEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef RTPSENDERSTATEVENT_H_
#define RTPSENDERSTATEVENT_H_

#include "AbstractRtpStatEvent.h"

namespace asteriskcpp {

    /**
     * An RtpSenderStatEvent is triggered at the end of an RTP transmission and reports
     * transmission statistics.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/rtp.c</code>
     *
     * @since 1.0.0
     */
    class RtpSenderStatEvent : public AbstractRtpStatEvent {
    public:
        RtpSenderStatEvent(const std::string & values);
        virtual ~RtpSenderStatEvent();

        /**
         * Returns the number of packets sent.
         *
         * @return the number of packets sent.
         */
        long getSentPackets() const;

        /**
         * Returns the number of sender reports.
         *
         * @return the number of sender reports.
         */
        long getSrCount() const;

        double getRtt() const;
    };

} /* namespace asteriskcpp */
#endif /* RTPSENDERSTATEVENT_H_ */
