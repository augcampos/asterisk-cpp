/*
 * QueueSummaryAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUESUMMARYACTION_H_
#define QUEUESUMMARYACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueueSummaryAction retrieves the summary for one or all queues.
     * <p>
     * Available in Asterisk post-1.4.
     * <p>
     * This action has been added by
     * {@linkplain http://bugs.digium.com/view.php?id=8035}.
     * 
     * @see QueueSummaryEvent
     * @see QueueSummaryCompleteEvent
     * @author augcampos
     * @version $Id$
     * @since 0.3
     */

    class QueueSummaryAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new QueueSummaryAction that retrieves the summary for all
         * queues.
         */
        QueueSummaryAction();

        /**
         * Creates a new QueueSummaryAction that retrieves the summary for the given
         * queue.
         * 
         * @param queue name of the queue to retrieve the summary for.
         */
        QueueSummaryAction(const std::string& queue);

        virtual ~QueueSummaryAction();


        /**
         * Returns the name of the queue to retrieve the summary for.
         * 
         * @return the name of the queue to retrieve the summary for or
         *         <code>null</code> to retrieve the summary for all queues.
         */
        const std::string& getQueue() const;


        void setQueue(const std::string& queue);
    };

} //NAMESPACE

#endif /*QUEUESUMMARYACTION_H_*/
