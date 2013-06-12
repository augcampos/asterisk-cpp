/*
 * OriginateResponseEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef ORIGINATERESPONSEEVENT_H_
#define ORIGINATERESPONSEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * Response to an OriginateAction.
     * @see org.asteriskjava.manager.action.OriginateAction
     */
    class OriginateResponseEvent : public ResponseEvent {
    protected:
        static const std::string RESPONSE_SUCCESS;
        static const std::string RESPONSE_FAILURE;

    public:
        OriginateResponseEvent(const std::string & values);
        virtual ~OriginateResponseEvent();

        /**
         * Returns the result of the corresponding Originate action.
         *
         * @return "Success" or "Failure"
         */
        const std::string& getResponse() const;

        bool isSuccess() const;

        /**
         * Returns the name of the channel to connect to the outgoing call.
         */
        const std::string& getChannel() const;

        /**
         * Returns the name of the context of the extension to connect to.
         */
        const std::string& getContext() const;

        /**
         * Returns the the extension to connect to.
         */
        const std::string& getExten() const;

        int getReason() const;

        /**
         * Returns the unique id of the originated channel.
         *
         * @return the unique id of the originated channel or "&lt;null&gt;" if none
         *         is available.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the Caller*ID Number of the originated channel.
         * <p>
         * Available sind Asterisk 1.4.
         *
         * @return the Caller*ID Number of the originated channel or <code>null</code> if none was set.
         * @since 0.3
         */
        const std::string& getCallerIdNum() const;

        /**
         * Returns the Caller*ID Name of the originated channel.
         * <p>
         * Available sind Asterisk 1.4.
         *
         * @return the Caller*ID Name of the originated channel or <code>null</code> if none was set.
         */
        const std::string& getCallerIdName() const;

    };

} /* namespace asteriskcpp */
#endif /* ORIGINATERESPONSEEVENT_H_ */
