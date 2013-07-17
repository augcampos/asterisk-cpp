/*
 * MixMonitorMuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MIXMONITORMUTEACTION_H_
#define MIXMONITORMUTEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * MixMonitorMute can be used to mute and un-mute an existing recording.
     * @author Bob Wienholt
     * @version $Id$
     */

    class MixMonitorMuteAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty MixMonitorMuteAction
         */
        MixMonitorMuteAction();

        /**
         * Mutes the monitor on the given channel.
         * @param channel 
         */
        MixMonitorMuteAction(const std::string& channel);

        /**
         * Mutes the monitor on the given channel for the given portion
         * of the call.
         * @param channel
         * @param direction 
         */
        MixMonitorMuteAction(const std::string& channel, const std::string& direction);

        /**
         * Either mutes or un-mutes the monitor on the given channel for 
         * the given portion of the call.
         * @param channel
         * @param direction
         * @param state 
         */
        MixMonitorMuteAction(const std::string& channel,const std::string& direction, int state);

        /**
         * Either mutes or un-mutes the monitor on the given channel.
         * @param channel
         * @param state 
         */
        MixMonitorMuteAction(const std::string& channel, int state);

        virtual ~MixMonitorMuteAction();


        /**
         * Returns the name of the channel to mute.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to mute.
         * @param channel 
         */
        void setChannel(const std::string& channel);

        /**
         * Gets the direction of the part of the recording to mute.
         */
        const std::string& getDirection() const;

        /**
         * Sets the direction of the part of the recording to mute.
         * Can be one of: read, write, or both.  Defaults to both.
         * @param direction 
         */
        void setDirection(const std::string& direction);

        /**
         * Gets the state of the mute.
         */
        int getState() const;


        void setState(int state);
    };

} //NAMESPACE

#endif /*MIXMONITORMUTEACTION_H_*/
