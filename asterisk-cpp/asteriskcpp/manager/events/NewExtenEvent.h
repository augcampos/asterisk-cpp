/*
 * NewExtenEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef NEWEXTENEVENT_H_
#define NEWEXTENEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A NewExtenEvent is triggered when a channel is connected to a new extension.<p>
     * It is implemented in <code>pbx.c</code>
     */
    class NewExtenEvent : public ManagerEvent {
    public:
        NewExtenEvent(const std::string & values);
        virtual ~NewExtenEvent();

        /**
         * Returns the unique id of the channel.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the name of the application that is executed.
         */
        const std::string& getApplication() const;

        /**
         * Returns the parameters passed to the application that is executed. The parameters are
         * separated by a '|' character.
         */
        const std::string& getAppData() const;

        /**
         * Returns the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the name of the context of the connected extension.
         */
        const std::string& getContext() const;

        /**
         * Returns the extension.
         */
        const std::string& getExtension() const;

        /**
         * Returns the priority.
         */
        int getPriority() const;

    };

} /* namespace asteriskcpp */
#endif /* NEWEXTENEVENT_H_ */
