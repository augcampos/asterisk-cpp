/*
 * HangupAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef HANGUPACTION_H_
#define HANGUPACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The HangupAction causes Asterisk to hang up a given channel.<p>
     * Hangup with a cause code is only supported by Asterisk versions later than 1.6.2.
     *
     * @author augcampos
     * @version $Id$
     */

    class HangupAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty HangupAction.
         */
        HangupAction();

        /**
         * Creates a new HangupAction that hangs up the given channel.
         *
         * @param channel the name of the channel to hangup.
         * @since 0.2
         */
        HangupAction(const std::string& channel);

        /**
         * Creates a new HangupAction that hangs up the given channel with the given cause code.
         *
         * @param channel the name of the channel to hangup.
         * @param cause   the cause code. The cause code must be >= 0 and <= 127.
         * @since 1.0.0
         */
        HangupAction(int cause, const std::string& channel);

        virtual ~HangupAction();


        /**
         * Returns the name of the channel to hangup.
         *
         * @return the name of the channel to hangup.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to hangup.<p>
         * This property is mandatory.
         *
         * @param channel the name of the channel to hangup.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the hangup cause.
         *
         * @return the hangup cause.
         * @since 1.0.0
         */
        int getCause() const;


        void setCause(int cause);
    };

} //NAMESPACE

#endif /*HANGUPACTION_H_*/
