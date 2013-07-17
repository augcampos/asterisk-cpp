/*
 * StatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef STATUSACTION_H_
#define STATUSACTION_H_

#include "AbstractManagerAction.h"
#include <vector>

namespace asteriskcpp {

    /**
     * The StatusAction requests the state of all active channels. Alternativly (as of Asterisk 1.6)
     * you can also pass a channel name to only retrive the status of one specific channel.<p>
     * For each active channel a StatusEvent is generated. After the state of all
     * channels has been reported a StatusCompleteEvent is generated.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.event.StatusEvent
     * @see org.asteriskjava.manager.event.StatusCompleteEvent
     */

    class StatusAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new StatusAction that retrieves the status of all channels.
         */
        StatusAction();

        /**
         * Creates a new StatusAction that retrieves the status of the given channel.<p>
         * Available since Asterisk 1.6.
         *
         * @param channel name of the channel.
         * @since 1.0.0
         */
        StatusAction(const std::string& channel);

        virtual ~StatusAction();


        /**
         * Returns the name of the channel.<p>
         * Available since Asterisk 1.6.
         *
         * @return the name of the channel or <code>null</code> for all channels.
         * @since 1.0.0
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel.<p>
         * Available since Asterisk 1.6.
         *
         * @param channel the name of the channel or <code>null</code> for all channels.
         * @since 1.0.0
         */
        void setChannel(const std::string& channel);


        const std::string& getVariables() const;

        /**
         * Sets the names of the channel variables to return for each reported channel.<p>
         * Available since Asterisk 1.6.
         *
         * @param variables comma separated list of variables to return for each reported channel.
         * @see org.asteriskjava.manager.event.StatusEvent#getVariables() 
         * @since 1.0.0
         */
        void setVariables(const std::string& variables);


        void setVariables(std::vector<std::string>& variables);
    };

} //NAMESPACE

#endif /*STATUSACTION_H_*/
