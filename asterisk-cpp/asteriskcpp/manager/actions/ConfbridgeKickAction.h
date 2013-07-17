/*
 * ConfbridgeKickAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGEKICKACTION_H_
#define CONFBRIDGEKICKACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeKickAction kicks a channel out of a conference.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeKickAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeKickAction.
         */
        ConfbridgeKickAction();

        /**
         * Creates a new ConfbridgeKickAction.
         * 
         * @param conference the conference number.
         * @param channel number of the channel in the conference.
         */
        ConfbridgeKickAction(const std::string& channel);

        virtual ~ConfbridgeKickAction();


        /**
         * Sets the id of the conference to kick a channel from.
         */
        void setConference(const std::string& conference);

        /**
         * Returns the id of the conference to kick a channel from.
         */
        const std::string& getConference() const;

        /**
         * Sets the number of the channel to kick.
         */
        void setChannel(const std::string& channel);


        const std::string& getChannel() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGEKICKACTION_H_*/
