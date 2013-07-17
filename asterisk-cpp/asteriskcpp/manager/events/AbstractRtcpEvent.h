/*
 * AbstractRtcpEvent.h
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#ifndef ABSTRACTRTCPEVENT_H_
#define ABSTRACTRTCPEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class for RTCP related events.<p>
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */
    class AbstractRtcpEvent : public asteriskcpp::ManagerEvent {
    public:
        AbstractRtcpEvent(const std::string& values);
        virtual ~AbstractRtcpEvent();

        /**
         * Returns the short term loss ratio. This is the fraction of packets lost since the last RR
         * or SR packet was sent.
         *
         * @return the short term loss ratio.
         */
        long getFractionLost() const;

        /**
         * Returns the interarrival jitter.
         *
         * @return the interarrival jitter.
         */
        double getIaJitter() const;

        /**
         * Returns the delay since the last SR.
         *
         * @return the delay since the last SR in seconds.
         */
        double getDlSr() const;

    };

} /* namespace asteriskcpp */
#endif /* ABSTRACTRTCPEVENT_H_ */
