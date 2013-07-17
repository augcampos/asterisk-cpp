/*
 * StopMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef STOPMONITORACTION_H_
#define STOPMONITORACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The StopMonitorAction ends monitoring (recording) a channel.<p>
     * It is implemented in <code>res/res_monitor.c</code>
     * 
     * @author augcampos
     * @version $Id$
     */

    class StopMonitorAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty StopMonitorAction.
         */
        StopMonitorAction();

        /**
         * Creates a new StopMonitorAction that ends monitoring of the given
         * channel.
         * 
         * @param channel the name of the channel to stop monitoring.
         * @since 0.2
         */
        StopMonitorAction(const std::string& channel);

        virtual ~StopMonitorAction();


        /**
         * Returns the name of the channel to end monitoring.
         * 
         * @return the name of the channel to end monitoring.
         */
        const std::string& getChannel() const;


        void setChannel(const std::string& channel);
    };

} //NAMESPACE

#endif /*STOPMONITORACTION_H_*/
