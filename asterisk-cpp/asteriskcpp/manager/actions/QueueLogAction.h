/*
 * QueueLogAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef QUEUELOGACTION_H_
#define QUEUELOGACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The QueueLogAction adds a custom log entry to the <code>queue_log</code>.<p>
     * It is implemented in <code>apps/app_queue.c</code><p>
     * Available since Asterisk 1.6.
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */

    class QueueLogAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty QueueLogAction.
         */
        QueueLogAction();

        /**
         * Creates a new QueueLogAction with the mandatory properties queue and event.
         *
         * @param queue the name of the queue to log the event for.
         * @param event the event to log.
         */
        QueueLogAction(const std::string& queue, const std::string& event);

        /**
         * Creates a new QueueLogAction with the mandatory properties queue and event.
         *
         * @param queue    the name of the queue to log the event for.
         * @param event    the event to log.
         * @param message  the message to log, may be <code>null</code>.
         * @param iface    the interface of the member to log the event for, may be <code>null</code>.
         * @param uniqueId the unique id of the channel to log the event for, may be <code>null</code>.
         */
        QueueLogAction(const std::string& queue, const std::string& event, const std::string& message,
                const std::string& iface, const std::string& uniqueId);

        virtual ~QueueLogAction();


        /**
         * Returns the interface of the member to log the event for.
         *
         * @return the interface of the member to log the event for.
         */
        const std::string& getInterface() const;

        /**
         * Sets the interface of the member to log the event for.
         *
         * @param iface the interface of the member to log the event for.
         */
        void setInterface(const std::string& iface);

        /**
         * Returns the name of the queue to log the event for.
         *
         * @return the name of the queue to log the event for.
         */
        const std::string& getQueue() const;

        /**
         * Sets the name of the queue to log the event for.<p>
         * This property is mandatory.
         *
         * @param queue the name of the queue to log the event for.
         */
        void setQueue(const std::string& queue);

        /**
         * Returns the unique id of the channel to log the event for.
         *
         * @return the unique id of the channel to log the event for.
         */
        const std::string& getUniqueId() const;

        /**
         * Sets the unique id of the channel to log the event for.
         *
         * @param uniqueId the unique id of the channel to log the event for.
         */
        void setUniqueId(const std::string& uniqueId);

        /**
         * Returns the event to log.
         *
         * @return the event to log.
         */
        const std::string& getEvent() const;

        /**
         * Sets the event to log.<p>
         * This property is mandatory.
         *
         * @param event the event to log.
         */
        void setEvent(const std::string& event);

        /**
         * Returns the message to log.
         *
         * @return the message to log.
         */
        const std::string& getMessage() const;


        void setMessage(const std::string& message);
    };

} //NAMESPACE

#endif /*QUEUELOGACTION_H_*/
