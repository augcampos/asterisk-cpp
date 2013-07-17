/*
 * AbstractRtpStatEvent.h
 *
 *  Created on: Feb 10, 2012
 *      Author: augcampos
 */

#ifndef ABSTRACTRTPSTATEVENT_H_
#define ABSTRACTRTPSTATEVENT_H_

#include "ManagerEvent.h"
#include "AbstractRtpStatEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class for RTP statistics events.<p>
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */
    class AbstractRtpStatEvent : public ManagerEvent {
    public:
        AbstractRtpStatEvent(const std::string& values);
        virtual ~AbstractRtpStatEvent();

        /**
         * Returns the synchronization source identifier that uniquely identifies the source of a stream.
         *
         * @return the synchronization source identifier.
         */
        long getSsrc() const;

        /**
         * Returns the number of lost packets.
         *
         * @return the number of lost packets.
         */
        long getLostPackets() const;

        double getJitter() const;

    };

} /* namespace asteriskcpp */
#endif /* ABSTRACTRTPSTATEVENT_H_ */
