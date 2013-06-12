/*
 * HangupEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef HANGUPEVENT_H_
#define HANGUPEVENT_H_

#include "AbstractChannelEvent.h"

namespace asteriskcpp {

    /**
     * A HangupEvent is triggered when a channel is hung up.<p>
     * It is implemented in <code>channel.c</code>
     *
     */
    class HangupEvent : public asteriskcpp::AbstractChannelEvent {
    public:

        HangupEvent(const std::string & values) :
        AbstractChannelEvent(values) {
        }

        virtual ~HangupEvent() {
        }

        /**
         * Returns the cause of the hangup.
         *
         * @return the hangup cause.
         * @see org.asteriskjava.live.HangupCause
         */
        int getCause() const {
            return (convertFromString<int>(getProperty("Cause")));
        }

        /**
         * Returns the textual representation of the hangup cause.
         *
         * @return the textual representation of the hangup cause.
         * @since 0.2
         */
        const std::string& getCauseTxt() const {
            return (getProperty("CauseTxt"));
        }
    };

} /* namespace asterisk_cpp */
#endif /* HANGUPEVENT_H_ */
