/*
 * ManagerAction.h
 *
 *  Created on: Aug 19, 2011
 *      Author: augcampos
 */

#ifndef MANAGERACTION_H_
#define MANAGERACTION_H_

#include "../../structs/PropertyMap.h"
#include "../responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Interface that all Actions that can be sent to the Asterisk server must
     * impement.<p>
     * Instances of this class represent a command sent to Asterisk via Manager API,
     * requesting a particular Action be performed. The number of actions available
     * to the client are determined by the modules presently loaded in the Asterisk
     * engine.<p>
     * There is one conrete subclass of ManagerAction per each supported Asterisk
     * Action.
     *
     */
    class ManagerAction : public PropertyMap {
    public:

        ManagerAction();

        /**
         * Returns the name of the action for example "Hangup".
         */
        virtual const std::string getAction() const;

        /**
         * Generate a valid ID
         * @note: generated on every send
         */
        virtual const std::string& generateID() = 0;

        /**
         * Returns the action id.
         * @return the user provied action id.
         */
        virtual const std::string& getActionId() const = 0;

        /**
         * Returns the action string representation action.
         * @return the action string representation action.
         */
        virtual const std::string toString() const = 0;

        virtual ManagerResponse* expectedResponce(const std::string& response);

    protected:
        std::string action;
    };

}

#endif /* MANAGERACTION_H_ */
