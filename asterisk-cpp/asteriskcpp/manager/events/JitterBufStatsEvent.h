/*
 * JitterBufStatsEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef JITTERBUFSTATSEVENT_H_
#define JITTERBUFSTATSEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A JitterBufStatsEvent is triggered at the end of IAX2 calls and reports
     * jitter statistics.<p>
     * It is implemented in <code>channels/chan_iax2.c</code>.<p>
     * Available since Asterisk 1.6.
     *
     * @since 1.0.0
     */
    class JitterBufStatsEvent : public asteriskcpp::ManagerEvent {
    public:
        JitterBufStatsEvent(const std::string & values);
        virtual ~JitterBufStatsEvent();

        /**
         * Returns the name of the channel.
         *
         * @return channel the name of the channel.
         */
        const std::string& getOwner() const;
        int getPing() const;
        int getLocalJitter() const;
        int getLocalJbDelay() const;
        int getLocalTotalLost() const;
        int getLocalLossPercent() const;
        int getLocalDropped() const;
        int getLocalooo() const;
        int getLocalReceived() const;
        int getRemoteJitter() const;
        int getRemoteJbDelay() const;
        int getRemoteTotalLost() const;
        int getRemoteLossPercent() const;
        int getRemoteDropped() const;
        int getRemoteooo() const;
        int getRemoteReceived() const;

    };

} /* namespace asterisk_cpp */
#endif /* JITTERBUFSTATSEVENT_H_ */
