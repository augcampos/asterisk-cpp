/*
 * QueuePenaltyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUEPENALTYACTION_H_
#define QUEUEPENALTYACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueuePenaltyAction sets the penalty for a queue member.<p>
     * It is implemented in <code>apps/app_queue.c</code><p>
     * Available since Asterisk 1.6.
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */

    class QueuePenaltyAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty QueuePenaltyAction.
         */
        QueuePenaltyAction();

        /**
         * Creates a new QueuePenaltyAction that sets the penalty for the given
         * interface on all queues.
         *
         * @param iface   the interface of the member to set the penalty for
         * @param penalty new penalty value.
         */
        QueuePenaltyAction(int penalty, const std::string& iface);

        /**
         * Creates a new QueuePenaltyAction that sets the penalty for the given
         * interface on the given queue.
         *
         * @param iface   the interface of the member to set the penalty for
         * @param penalty new penalty value.
         * @param queue   the queue the member is assigned the penalty for
         */
        QueuePenaltyAction(int penalty,  const std::string& iface, const std::string& queue);

        virtual ~QueuePenaltyAction();


        /**
         * Returns the interface of the member to set the penalty for.
         *
         * @return the interface of the member to to set the penalty for.
         */
        const std::string& getInterface() const;

        /**
         * Sets the interface of the member to set the penalty for.<p>
         * This property is mandatory.
         *
         * @param iface the interface of the member to to set the penalty for.
         */
        void setInterface(const std::string& iface);

        /**
         * Returns the new penalty.
         *
         * @return the new penalty.
         */
        int getPenalty() const;

        /**
         * Sets the new penalty.<p>
         * This property is mandatory.
         *
         * @param penalty the new penalty.
         */
        void setPenalty(int penalty);

        /**
         * Returns the name of the queue.
         *
         * @return the name of the queue.
         */
        const std::string& getQueue() const;


        void setQueue(const std::string& queue);
    };

} //NAMESPACE

#endif /*QUEUEPENALTYACTION_H_*/
