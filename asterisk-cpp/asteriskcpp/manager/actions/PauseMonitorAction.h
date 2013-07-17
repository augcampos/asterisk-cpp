/*
 * PauseMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef PAUSEMONITORACTION_H_
#define PAUSEMONITORACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The PauseMonitorAction temporarily stop monitoring (recording) a channel.
     * <p>
     * It is implemented in <code>res/res_monitor.c</code>
     * <p>
     * Available since Asterisk 1.4.
     * 
     * @see UnpauseMonitorAction
     * @author augcampos
     * @since 0.3
     * @version $Id$
     */

    class PauseMonitorAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty PauseMonitorAction.
         */
        PauseMonitorAction();

        /**
         * Creates a new PauseMonitorAction that temporarily stops monitoring the
         * given channel.
         * 
         * @param channel the name of the channel to temporarily stop monitoring.
         */
        PauseMonitorAction(const std::string& channel);

        virtual ~PauseMonitorAction();


        /**
         * Returns the name of the channel to temporarily stop monitoring.
         * 
         * @return the name of the channel to temporarily stop monitoring.
         */
        const std::string& getChannel() const;


        void setChannel(const std::string& channel);
    };

} //NAMESPACE

#endif /*PAUSEMONITORACTION_H_*/
