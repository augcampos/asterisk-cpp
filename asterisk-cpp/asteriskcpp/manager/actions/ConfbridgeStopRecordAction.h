/*
 * ConfbridgeStopRecordAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGESTOPRECORDACTION_H_
#define CONFBRIDGESTOPRECORDACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeStopAction stops an audio recording of a conference.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeStopRecordAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeStopRecordAction.
         */
        ConfbridgeStopRecordAction();

        /**
         * Creates a new ConfbridgeStopRecordAction for a specific conference.
         */
        ConfbridgeStopRecordAction(const std::string& conference);

        virtual ~ConfbridgeStopRecordAction();


        /**
         * Sets the id of the conference for which to stop an audio recording.
         */
        void setConference(const std::string& conference);


        const std::string& getConference() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGESTOPRECORDACTION_H_*/
