/*
 * QueueRemoveAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUEREMOVEACTION_H_
#define QUEUEREMOVEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueueRemoveAction removes a member from a queue.<p>
     * It is implemented in <code>apps/app_queue.c</code>
     * 
     * @author augcampos
     * @version $Id$
     */

    class QueueRemoveAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty QueueRemoveAction.
         */
        QueueRemoveAction();

        /**
         * Creates a new QueueRemoveAction that removes the member on the given
         * interface from the given queue.
         * 
         * @param queue the name of the queue the member will be removed from
         * @param iface the interface of the member to remove
         * @since 0.2
         */
        QueueRemoveAction(const std::string& queue,const std::string& iface);

        virtual ~QueueRemoveAction();


        /**
         * Returns the name of the queue the member will be removed from.
         * 
         * @return the name of the queue the member will be removed from.
         */
        const std::string& getQueue() const;

        /**
         * Sets the name of the queue the member will be removed from.<p>
         * This property is mandatory.
         * 
         * @param queue the name of the queue the member will be removed from.
         */
        void setQueue(const std::string& queue);

        /**
         * Returns the interface to remove.
         */
        const std::string& getInterface() const;


        void setInterface(const std::string& iface);
    };

} //NAMESPACE

#endif /*QUEUEREMOVEACTION_H_*/
