/*
 * MusicOnHoldEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MUSICONHOLDEVENT_H_
#define MUSICONHOLDEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A MusicOnHoldEvent is triggered when music on hold starts or stops on a channel.<p>
     * It is implemented in <code>res/res_musiconhold.c</code>.<p>
     * Available since Asterisk 1.6
     *
     * @since 1.0.0
     */
    class MusicOnHoldEvent : public ManagerEvent {
    public:
        MusicOnHoldEvent(const std::string & values);
        virtual ~MusicOnHoldEvent();

        /**
         * Returns the name of the channel.
         * @return channel the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the unique id of the channel.
         * @return the unique id of the channel.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the state. This is either "Start" or "Stop" depending on whether music on hold
         * started or stopped on the channel.
         *
         * @return "Start" if music on hold started or "Stop" if music on hold stopped on the channel.
         * @see #STATE_START
         * @see #STATE_STOP
         * @see #isStart()
         * @see #isStop()
         */
        const std::string& getState() const;

        /**
         * Returns whether this is a start event.
         * @return <code>true</code> if this a start event, <code>false</code> otherwise.
         */
        bool isStart() const;

        /**
         * Returns whether this is a stop event.
         * @return <code>true</code> if this an stop event, <code>false</code> otherwise.
         */
        bool isStop() const;
    };

} /* namespace asteriskcpp */
#endif /* MUSICONHOLDEVENT_H_ */
