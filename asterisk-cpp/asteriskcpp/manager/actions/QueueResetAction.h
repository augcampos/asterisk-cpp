/*
 * QueueResetAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUERESETACTION_H_
#define QUEUERESETACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueueResetAction resets all statistical data of a given queue or all queues.<p>
     * It is implemented in <code>apps/app_queue.c</code><p>
     * Available since Asterisk 1.6.
     *
     * @author Sebastian
     * @since 1.0.0
     */

    class QueueResetAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new QueueResetAction that resets statistical data of all queues.
         */
        QueueResetAction();

        /**
         * Creates a new QueueResetAction that resets statistical data of the given queue.
         *
         * @param queue the name of the queue to reset.
         */
        QueueResetAction(const std::string& queue);

        virtual ~QueueResetAction();


        /**
         * Returns the name of the queue to reset.
         *
         * @return the name of the queue to reset or <code>null</code> for all queues.
         */
        const std::string& getQueue() const;


        void setQueue(const std::string& queue);
    };

} //NAMESPACE

#endif /*QUEUERESETACTION_H_*/
