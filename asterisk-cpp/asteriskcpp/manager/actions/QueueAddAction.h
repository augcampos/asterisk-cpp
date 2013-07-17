/*
 * QueueAddAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUEADDACTION_H_
#define QUEUEADDACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueueAddAction adds a new member to a queue.<p>
     * It is implemented in <code>apps/app_queue.c</code><p>
     * The <code>memberName</code> property was added in Asterisk 1.4, the
     * <code>stateInterface</code> property in Asterisk 1.6.
     *
     * @author augcampos
     * @version $Id$
     */

    class QueueAddAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty QueueAddAction.
         */
        QueueAddAction();

        /**
         * Creates a new QueueAddAction that adds a new member on the given
         * interface to the given queue.
         *
         * @param queue the name of the queue the new member will be added to
         * @param iface Sets the interface to add. To add a specific channel just
         *              use the channel name, e.g. "SIP/1234".
         * @since 0.2
         */
        QueueAddAction(const std::string& iface);

        /**
         * Creates a new QueueAddAction that adds a new member on the given
         * interface to the given queue with the given penalty.
         *
         * @param queue   the name of the queue the new member will be added to
         * @param iface   Sets the interface to add. To add a specific channel just
         *                use the channel name, e.g. "SIP/1234".
         * @param penalty the penalty for this member. The penalty must be a
         *                positive integer or 0 for no penalty. When calls are
         *                distributed members with higher penalties are considered last.
         * @since 0.2
         */
        QueueAddAction(const std::string& iface, int penalty);

        virtual ~QueueAddAction();


        /**
         * Returns the name of the queue the new member will be added to.
         *
         * @return the name of the queue the new member will be added to.
         */
        const std::string& getQueue() const;

        /**
         * Sets the name of the queue the new member will be added to.<p>
         * This property is mandatory.
         *
         * @param queue the name of the queue the new member will be added to.
         */
        void setQueue(const std::string& queue);

        /**
         * Returns the name of the channel to dial to reach this member.
         *
         * @return the name of the channel to dial to reach this member.
         */
        const std::string& getInterface() const;

        /**
         * Sets the name of the channel (Technology/Location) to dial to reach this member.<p>
         * This property is mandatory.
         *
         * @param iface the name of the channel to dial to reach this member, e.g. "SIP/1234".
         */
        void setInterface(const std::string& iface);

        /**
         * Returns the penalty for this member.
         *
         * @return the penalty for this member.
         */
        int getPenalty() const;

        /**
         * Sets the penalty for this member.<p>
         * The penalty must be a positive integer or 0 for no penalty. If it is
         * not set 0 is assumed.<p>
         * When calls are distributed members with higher penalties are considered
         * last.
         *
         * @param penalty the penalty for this member.
         */
        void setPenalty(int penalty);

        /**
         * Returns if the queue member should be paused when added.
         *
         * @return bool.TRUE if the queue member should be paused when added.
         * @since 0.2
         */
        bool getPaused() const;

        /**
         * Sets if the queue member should be paused when added.
         *
         * @param paused bool.TRUE if the queue member should be paused when
         *               added.
         * @since 0.2
         */
        void setPaused(bool paused);

        /**
         * Returns the name of the queue memeber (agent name).<p>
         * Available since Asterisk 1.4
         *
         * @return the name of the queue memeber (agent name).
         * @since 1.0.0
         */
        const std::string& getMemberName() const;

        /**
         * Sets the name of the queue memeber (agent name).<p>
         * Available since Asterisk 1.4
         *
         * @param memberName the name of the queue memeber (agent name).
         * @since 1.0.0
         */
        void setMemberName(const std::string& memberName);

        /**
         * Returns the name of the channel from which to read devicestate changes.<p>
         * Available since Asterisk 1.6
         *
         * @return the name of the channel from which to read devicestate changes.
         * @since 1.0.0
         */
        const std::string& getStateInterface() const;


        void setStateInterface(const std::string& stateInterface);
    };

} //NAMESPACE

#endif /*QUEUEADDACTION_H_*/
