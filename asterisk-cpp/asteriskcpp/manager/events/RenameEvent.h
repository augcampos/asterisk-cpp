/*
 * RenameEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef RENAMEEVENT_H_
#define RENAMEEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A RenameEvent is triggered when the name of a channel is changed.
     * <p>
     * It is implemented in <code>channel.c</code>
     *
     */
    class RenameEvent : public ManagerEvent {
    public:
        RenameEvent(const std::string & values);
        virtual ~RenameEvent();

        /**
         * Returns the new name of the channel.
         *
         * @return the new name of the channel.
         */
        const std::string& getNewname() const;

        /**
         * Returns the old name of the channel.
         *
         * @return the old name of the channel.
         * @since 1.0.0
         */
        const std::string& getChannel() const;

        /**
         * Returns the old name of the channel.
         *
         * @return the old name of the channel.
         * @deprecated use {@link @getChannel} instead.
         */
        const std::string& getOldname() const;

        /**
         * Returns the unique id of the channel.
         *
         * @return the unique id of the channel.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the new unique id of the channel.
         * <p>
         * This property is only available on BRIstuffed Asterisk servers.
         * <p>
         * The purpose of this property is unclear as the unique id is supposed to
         * never change.
         *
         * @return the new unique id of the channel.
         * @since 0.3
         */
        const std::string& getNewUniqueId() const;
    };

} /* namespace asteriskcpp */
#endif /* RENAMEEVENT_H_ */
