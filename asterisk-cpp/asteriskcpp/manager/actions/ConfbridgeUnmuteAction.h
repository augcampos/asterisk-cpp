/*
 * ConfbridgeUnmuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGEUNMUTEACTION_H_
#define CONFBRIDGEUNMUTEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeUnmuteAction unmutes a channel in a conference.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeUnmuteAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeUnmuteAction.
         */
        ConfbridgeUnmuteAction();

        /**
         * Creates a new ConfbridgeUnmuteAction.
         * 
         * @param conference the conference number.
         * @param channel number of the channel in the conference.
         */
        ConfbridgeUnmuteAction(const std::string& channel);

        virtual ~ConfbridgeUnmuteAction();


        /**
         * Sets the id of the conference.
         */
        void setConference(const std::string& conference);

        /**
         * Returns the id of the conference.
         */
        const std::string& getConference() const;

        /**
         * Sets the number of the channel to unmute.
         */
        void setChannel(const std::string& channel);


        const std::string& getChannel() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGEUNMUTEACTION_H_*/
