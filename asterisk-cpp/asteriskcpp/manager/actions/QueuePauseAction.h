/*
 * QueuePauseAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUEPAUSEACTION_H_
#define QUEUEPAUSEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueuePauseAction makes a queue member temporarily unavailabe (or
     * available again).<p>
     * It is implemented in <code>apps/app_queue.c</code><p>
     * Available since Asterisk 1.2.
     * 
     * @author augcampos
     * @version $Id$
     * @since 0.2
     */

    class QueuePauseAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty QueuePauseAction.
         */
        QueuePauseAction();

        /**
         * Creates a new QueuePauseAction that makes the member on the given
         * interface unavailable on all queues.
         * 
         * @param iface the interface of the member to make unavailable
         */
        QueuePauseAction(const std::string& iface);

        /**
         * Creates a new QueuePauseAction that makes the member on the given
         * interface unavailable on the given queue.
         * 
         * @param iface the interface of the member to make unavailable
         * @param queue the queue the member is made unvailable on
         */
        QueuePauseAction(const std::string& iface, const std::string& queue);

        /**
         * Creates a new QueuePauseAction that makes the member on the given
         * interface available or unavailable on all queues.
         * 
         * @param iface the interface of the member to make unavailable
         * @param paused bool.TRUE to make the member unavailbale, bool.FALSE
         *            to make the member available
         */
        QueuePauseAction(const std::string& iface, bool paused);

        /**
         * Creates a new QueuePauseAction that makes the member on the given
         * interface unavailable on the given queue.
         * 
         * @param iface the interface of the member to make unavailable
         * @param queue the queue the member is made unvailable on
         * @param paused bool.TRUE to make the member unavailbale, bool.FALSE
         *            to make the member available
         */
        QueuePauseAction(const std::string& iface, const std::string& queue, bool paused);

        virtual ~QueuePauseAction();


        /**
         * Returns the interface of the member to make available or unavailable.
         * 
         * @return the interface of the member to make available or unavailable.
         */
        const std::string& getInterface() const;

        /**
         * Sets the interface of the member to make available or unavailable.<p>
         * This property is mandatory.
         * 
         * @param iface the interface of the member to make available or
         *            unavailable.
         */
        void setInterface(const std::string& iface);

        /**
         * Returns the name of the queue the member is made available or unavailable
         * on.
         * 
         * @return the name of the queue the member is made available or unavailable
         *         on or <code>null</code> for all queues.
         */
        const std::string& getQueue() const;

        /**
         * Sets the name of the queue the member is made available or unavailable
         * on.
         * 
         * @param queue the name of the queue the member is made available or
         *            unavailable on or <code>null</code> for all queues.
         */
        void setQueue(const std::string& queue);

        /**
         * Returns if the member is made available or unavailable.
         * 
         * @return bool.TRUE to make the member unavailbale, bool.FALSE to
         *         make the member available
         */
        bool getPaused() const;

        /**
         * Sets if the member is made available or unavailable.<p>
         * This property is mandatory.
         * 
         * @param paused bool.TRUE to make the member unavailbale, bool.FALSE
         *            to make the member available
         */
        void setPaused(bool paused);

        /**
         * Sets the name of the local reason.<p>
         * Available since Asterisk 1.6.
         *
         * @return Name of the local reason for clears the flag.
         */
        const std::string& getReason() const;


        void setReason(const std::string& reason);
    };

} //NAMESPACE

#endif /*QUEUEPAUSEACTION_H_*/
