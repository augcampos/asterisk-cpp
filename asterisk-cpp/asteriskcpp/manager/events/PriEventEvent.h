/*
 * PriEventEvent.h
 *
 *  Created on: Mar 16, 2012
 *      Author: augcampos
 */

#ifndef PRIEVENTEVENT_H_
#define PRIEVENTEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * This event is implemented in <code>channels/chan_dahdi.c</code>.<p>
     * Available since Asterisk 1.6.1
     *
     * @since 1.0.0
     */
    class PriEventEvent : public ManagerEvent {
    public:
        PriEventEvent(const std::string & values);
        virtual ~PriEventEvent();

        /**
         * Returns the textual representation of the event code.<p>
         * This is one of
         * <ul>
         * <li>"On hook"
         * <li>"Ring/Answered"
         * <li>"Wink/Flash"
         * <li>"Alarm"
         * <li>"No more alarm"
         * <li>"HDLC Abort"
         * <li>"HDLC Overrun"
         * <li>"HDLC Bad FCS"
         * <li>"Dial Complete"
         * <li>"Ringer On"
         * <li>"Ringer Off"
         * <li>"Hook Transition Complete"
         * <li>"Bits Changed"
         * <li>"Pulse Start"
         * <li>"Timer Expired"
         * <li>"Timer Ping"
         * <li>"Polarity Reversal"
         * <li>"Ring Begin"
         * </ul>
         *
         * @return the textual representation of the event code.
         * @see #getPriEventCode()
         */
        const std::string& getPriEvent() const;

        /**
         * Returns the numerical pri event code.
         *
         * @return the numerical pri event code.
         * @see #getPriEvent()
         */
        int getPriEventCode() const;

        /**
         * Returns the D-Channel the event occurred on.
         *
         * @return the D-Channel the event occurred on.
         */
        const std::string& getDChannel() const;

        /**
         * Returns the span the event occurred on.
         *
         * @return the span the event occurred on.
         */
        int getSpan() const;
    };

} /* namespace asteriskcpp */
#endif /* PRIEVENTEVENT_H_ */
