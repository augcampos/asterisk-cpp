/*
 * ConfbridgeUnlockAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGEUNLOCKACTION_H_
#define CONFBRIDGEUNLOCKACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeUnlockAction unlocks a specified conference.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeUnlockAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeUnlockAction.
         */
        ConfbridgeUnlockAction();

        /**
         * Creates a new ConfbridgeUnlockAction for a specific conference.
         */
        ConfbridgeUnlockAction(const std::string& conference);

        virtual ~ConfbridgeUnlockAction();


        /**
         * Sets the id of the conference to unlock.
         */
        void setConference(const std::string& conference);


        const std::string& getConference() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGEUNLOCKACTION_H_*/
