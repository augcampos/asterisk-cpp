/*
 * AbstractParkedCallEvent.h
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#ifndef ABSTRACTPARKEDCALLEVENT_H_
#define ABSTRACTPARKEDCALLEVENT_H_

#include "AbstractChannelEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class for several call parking related events.
     *
     * @author augcampos
     * @version $Id$
     * @since 0.2
     */
    class AbstractParkedCallEvent : public asteriskcpp::AbstractChannelEvent {
    public:
        AbstractParkedCallEvent(const std::string& values);
        virtual ~AbstractParkedCallEvent();

        /**
         * Returns the extension the channel is or was parked at.
         *
         * @return the extension the channel is or was parked at.
         */
        const std::string& getExten() const;

        /**
         * Returns the parking lot.<p>
         * Available since Asterisk 1.6.
         *
         * @return the parking lot.
         * @since 1.0.0
         */
        const std::string& getParkingLot() const;
    };

} /* namespace asteriskcpp */
#endif /* ABSTRACTPARKEDCALLEVENT_H_ */
