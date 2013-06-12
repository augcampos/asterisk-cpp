/*
 * AbsoluteTimeoutAction.h
 *
 *  Created on: Aug 19, 2011
 *      Author: augcampos
 */

#ifndef ABSOLUTETIMEOUTACTION_H_
#define ABSOLUTETIMEOUTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The AbsoluteTimeoutAction sets the absolute maximum amount of time permitted
     * for a call on a given channel, it hangs up the channel after a certain time.
     * <p>
     * Note that the timeout is set from the current time forward, not counting the
     * number of seconds the call has already been up.<p>
     * When setting a new timeout all previous absolute timeouts are cancelled.<p>
     * When the timeout is reached the call is returned to the T extension so that
     * you can playback an explanatory note to the calling party (the called party
     * will not hear that).<p>
     * This action corresponds the the AbsoluteTimeout command used in the dialplan.
     * <p>
     * Implemented in <code>manager.c</code>
     *
     */

    class AbsoluteTimeoutAction : public AbstractManagerAction {
    public:
        /**
         * Creates a new AbsoluteTimeoutAction.
         */
        AbsoluteTimeoutAction(const std::string& channel, unsigned int timeout);

        virtual ~AbsoluteTimeoutAction();

        /**
         * Returns the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the the maximum duation of the call (in seconds) to set.
         */
        int getTimeout() const;

        /**
         * Sets the the maximum duation of the call (in seconds) to set on channel.<p>
         * Setting the timeout to 0 cancels the timeout.
         */
        void setTimeout(int timeout);
    };

}
#endif /* ABSOLUTETIMEOUTACTION_H_ */
