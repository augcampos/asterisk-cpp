/*
 * MasqueradeEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef MASQUERADEEVENT_H_
#define MASQUERADEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A MasqueradeEvent is triggered when Asterisk masquerades a channel.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/channel.c</code>
     *
     * @since 1.0.0
     */
    class MasqueradeEvent : public ManagerEvent {
    public:
        MasqueradeEvent(const std::string & values);
        virtual ~MasqueradeEvent();

        /**
         * Returns the name of the clone channel.
         *
         * @return the name of the clone channel.
         */
        const std::string& getClone() const;

        /**
         * Returns the state of the clone channel.
         *
         * @return the state of the clone channel.
         * @see org.asteriskjava.util.AstState
         */
        int getCloneState() const;

        /**
         * Returns the state of the clone channel as a descriptive text.
         *
         * @return the state of the clone channel as a descriptive text.
         */
        const std::string& getCloneStateDesc() const;

        /**
         * Returns the name of the original channel.
         *
         * @return the name of the original channel.
         */
        const std::string& getOriginal() const;

        /**
         * Returns the state of the original channel.
         *
         * @return the state of the original channel.
         * @see org.asteriskjava.util.AstState
         */
        int getOriginalState() const;

        /**
         * Returns the state of the original channel as a descriptive text.
         *
         * @return the state of the original channel as a descriptive text.
         */
        const std::string& getOriginalStateDesc() const;
    };

} /* namespace asterisk_cpp */
#endif /* MASQUERADEEVENT_H_ */
