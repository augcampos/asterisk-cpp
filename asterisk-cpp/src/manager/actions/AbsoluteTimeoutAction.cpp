/*
 * AbsoluteTimeoutAction.cpp
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/AbsoluteTimeoutAction.h"

namespace asteriskcpp {

    AbsoluteTimeoutAction::AbsoluteTimeoutAction(const std::string& channel, unsigned int timeout) {
        setChannel(channel);
        setTimeout(timeout);
    }

    AbsoluteTimeoutAction::~AbsoluteTimeoutAction() {
    }

    /**
     * Returns the name of the channel.
     */
    const std::string& AbsoluteTimeoutAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the name of the channel.
     */
    void AbsoluteTimeoutAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    /**
     * Returns the the maximum duration of the call (in seconds) to set.
     */
    int AbsoluteTimeoutAction::getTimeout() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    /**
     * Sets the the maximum duration of the call (in seconds) to set on channel.<p>
     * Setting the timeout to 0 cancels the timeout.
     */
    void AbsoluteTimeoutAction::setTimeout(int timeout) {
        setSetterValue(__FUNCTION__, timeout);
    }

} //NS

