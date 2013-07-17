/*
 * ParkAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef PARKACTION_H_
#define PARKACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ParkAction parks a channel using Asterisk's park feature.
     * <p>
     * Defined in <code>res/res_features.c</code><p>
     * Available since Asterisk 1.4.
     * 
     * @author augcampos
     * @version $Id$
     */

    class ParkAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ParkAction.
         */
        ParkAction();

        /**
         * Creates a new ParkAction.
         * 
         * @param channel name of the channel to park.
         * @param channel2 name of the channel to announce park info to and return
         *            to on timeout.
         */
        ParkAction(const std::string& channel2);

        /**
         * Creates a new ParkAction with a timeout.
         * 
         * @param channel the name of the channel to park.
         * @param channel2 the name of the channel to announce park info to and
         *            return to on timeout.
         * @param timeout the timeout in seconds before callback.
         */
        ParkAction(const std::string& channel2, int timeout);

        virtual ~ParkAction();


        /**
         * Returns the name of the channel to park.
         * 
         * @return the name of the channel to park.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to park.<p>
         * This property is mandatory.
         * 
         * @param channel the name of the channel to park.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the name of the channel to announce park info to and return to on
         * timeout.
         * 
         * @return the name of the channel to announce park info to and return to on
         *         timeout.
         */
        const std::string& getChannel2() const;

        /**
         * Sets the name of the channel to announce park info to and return to on
         * timeout.<p>
         * This property is mandatory.
         * 
         * @param channel2 the name of the channel to announce park info to and
         *            return to on timeout.
         */
        void setChannel2(const std::string& channel2);

        /**
         * Returns the timeout in seconds before callback.
         * 
         * @return the timeout in seconds before callback.
         */
        int getTimeout() const;


        void setTimeout(int timeout);
    };

} //NAMESPACE

#endif /*PARKACTION_H_*/
