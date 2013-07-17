/*
 * ConfbridgeStartRecordAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGESTARTRECORDACTION_H_
#define CONFBRIDGESTARTRECORDACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeStartAction starts an audio recording of a conference.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeStartRecordAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeStartRecordAction.
         */
        ConfbridgeStartRecordAction();

        /**
         * Creates a new ConfbridgeStartRecordAction for a specific conference.
         */
        ConfbridgeStartRecordAction(const std::string& conference);

        virtual ~ConfbridgeStartRecordAction();


        /**
         * Sets the id of the conference for which to start an audio recording.
         */
        void setConference(const std::string& conference);


        const std::string& getConference() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGESTARTRECORDACTION_H_*/
