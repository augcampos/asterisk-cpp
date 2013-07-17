/*
 * ConfbridgeListAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGELISTACTION_H_
#define CONFBRIDGELISTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Lists all users in a particular ConfBridge conference. ConfbridgeList will follow as separate events,
     * followed by a final event called ConfbridgeListComplete.
     *
     * @since 1.0.0
     */

    class ConfbridgeListAction : public AbstractManagerAction {
    public:


        ConfbridgeListAction();


        ConfbridgeListAction(const std::string& conference);

        virtual ~ConfbridgeListAction();



        void setConference(const std::string& conference);


        const std::string& getConference() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGELISTACTION_H_*/
