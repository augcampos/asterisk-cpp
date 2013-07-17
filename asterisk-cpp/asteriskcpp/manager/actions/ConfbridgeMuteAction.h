/*
 * ConfbridgeMuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGEMUTEACTION_H_
#define CONFBRIDGEMUTEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeMuteAction mutes a channel in a conference.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeMuteAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeMuteAction.
         */
        ConfbridgeMuteAction();

        /**
         * Creates a new ConfbridgeMuteAction.
         * 
         * @param conference the conference number.
         * @param channel number of the channel in the conference.
         */
        ConfbridgeMuteAction(const std::string& channel);

        virtual ~ConfbridgeMuteAction();


        /**
         * Sets the id of the conference.
         */
        void setConference(const std::string& conference);

        /**
         * Returns the id of the conference.
         */
        const std::string& getConference() const;


        void setChannel(const std::string& channel);


        const std::string& getChannel() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGEMUTEACTION_H_*/
