/*
 * ChangeMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CHANGEMONITORACTION_H_
#define CHANGEMONITORACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ChangeMonitorAction changes the monitoring filename of a channel. It has
     * no effect if the channel is not monitored.<p>
     * It is implemented in <code>res/res_monitor.c</code>
     * 
     * @author augcampos
     * @version $Id$
     */

    class ChangeMonitorAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ChangeMonitorAction.
         */
        ChangeMonitorAction();

        /**
         * Creates a new ChangeMonitorAction that causes monitoring data for the
         * given channel to be written to the given file(s).
         * 
         * @param channel the name of the channel that is monitored
         * @param file the (base) name of the file(s) to which the voice data is
         *            written
         * @since 0.2
         */
        ChangeMonitorAction(const std::string& file);

        virtual ~ChangeMonitorAction();


        /**
         * Returns the name of the monitored channel.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the monitored channel.<p>
         * This property is mandatory.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the name of the file to which the voice data is written.
         */
        const std::string& getFile() const;


        void setFile(const std::string& file);
    };

} //NAMESPACE

#endif /*CHANGEMONITORACTION_H_*/
