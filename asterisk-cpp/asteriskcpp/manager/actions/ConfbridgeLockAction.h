/*
 * ConfbridgeLockAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGELOCKACTION_H_
#define CONFBRIDGELOCKACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeLockAction lockes a specified conference.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeLockAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeLockAction.
         */
        ConfbridgeLockAction();

        /**
         * Creates a new ConfbridgeLockAction for a specific conference.
         */
        ConfbridgeLockAction(const std::string& conference);

        virtual ~ConfbridgeLockAction();


        /**
         * Sets the id of the conference to lock.
         */
        void setConference(const std::string& conference);


        const std::string& getConference() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGELOCKACTION_H_*/
