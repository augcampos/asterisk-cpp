/*
 * AbstractMonitorEvent.h
 *
 *  Created on: Jan 3, 2012
 *      Author: augcampos
 */

#ifndef ABSTRACTMONITOREVENT_H_
#define ABSTRACTMONITOREVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class for monitoring events.<p>
     * Monitoring events are implemented in <code>res/res_monitor.c</code>
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */
    class AbstractMonitorEvent : public asteriskcpp::ManagerEvent {
    public:
        /**
         * @param source
         */
        AbstractMonitorEvent(const std::string& values);
        virtual ~AbstractMonitorEvent();

        /**
         * Returns the name of the channel.
         *
         * @return the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the unique id of the channel.
         *
         * @return the unique id of the channel.
         */
        const std::string& getUniqueId() const;

    };

} /* namespace asteriskcpp */
#endif /* ABSTRACTMONITOREVENT_H_ */
