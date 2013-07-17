/*
 * QueueStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUESTATUSACTION_H_
#define QUEUESTATUSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueueStatusAction requests the state of all defined queues their members
     * (agents) and entries (callers).<p>
     * For each queue a QueueParamsEvent is generated, followed by a
     * QueueMemberEvent for each member of that queue and a QueueEntryEvent for each
     * entry in the queue.<p>
     * Since Asterisk 1.2 a QueueStatusCompleteEvent is sent to denote the end of
     * the generated dump.<p>
     * This action is implemented in <code>apps/app_queue.c</code>
     * 
     * @see org.asteriskjava.manager.event.QueueParamsEvent
     * @see org.asteriskjava.manager.event.QueueMemberEvent
     * @see org.asteriskjava.manager.event.QueueEntryEvent
     * @see org.asteriskjava.manager.event.QueueStatusCompleteEvent
     * @author augcampos
     * @version $Id$
     */

    class QueueStatusAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new QueueStatusAction.
         */
        QueueStatusAction();

        virtual ~QueueStatusAction();


        /**
         * Returns the queue filter.
         * 
         * @return the queue filter.
         * @since 0.2
         */
        const std::string& getQueue() const;

        /**
         * Sets the queue filter. If set QueueParamEvents are only generated for the
         * given queue name.
         * 
         * @param queue the queue filter.
         * @since 0.2
         */
        void setQueue(const std::string& queue);

        /**
         * Returns the member filter.
         * 
         * @return the member filter.
         * @since 0.2
         */
        const std::string& getMember() const;


        void setMember(const std::string& member);
    };

} //NAMESPACE

#endif /*QUEUESTATUSACTION_H_*/
