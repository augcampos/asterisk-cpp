/*
 * UnpauseMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef UNPAUSEMONITORACTION_H_
#define UNPAUSEMONITORACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The PauseMonitorAction re-enables monitoring (recording) of a channel after
     * calling PauseMonitor.
     * <p>
     * It is implemented in <code>res/res_monitor.c</code>
     * <p>
     * Available since Asterisk 1.4.
     * 
     * @see PauseMonitorAction
     * @author augcampos
     * @since 0.3
     * @version $Id$
     */

    class UnpauseMonitorAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty UnpauseMonitorAction.
         */
        UnpauseMonitorAction();

        /**
         * Creates a new UnpauseMonitorAction that re-enables monitoring the given
         * channel.
         * 
         * @param channel the name of the channel re-enable monitoring.
         */
        UnpauseMonitorAction(const std::string& channel);

        virtual ~UnpauseMonitorAction();


        /**
         * Returns the name of the channel to re-enable monitoring.
         * 
         * @return the name of the channel to re-enable monitoring.
         */
        const std::string& getChannel() const;


        void setChannel(const std::string& channel);
    };

} //NAMESPACE

#endif /*UNPAUSEMONITORACTION_H_*/
