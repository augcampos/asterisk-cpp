/*
 * AbstractManagerAction.h
 *
 *  Created on: Aug 19, 2011
 *      Author: augcampos
 */

#ifndef ABSTRACTMANAGERACTION_H_
#define ABSTRACTMANAGERACTION_H_

#include "ManagerAction.h"

namespace asteriskcpp {

    /**
     * This class implements the ManagerAction interface and can serve as base class
     * for your concrete Action implementations.
     *
     * @since 0.2
     */
    class AbstractManagerAction : public ManagerAction {
    public:
        AbstractManagerAction();

        virtual ~AbstractManagerAction();

        virtual const std::string toString() const;

        const std::string& generateID();

        /**
         *@see
         */
        const std::string& getActionId() const;

    protected:
        /**
         * Sets the action id.<p>
         * If the action id is set and sent to the asterisk server any response
         * returned by the Asterisk server will include the same id. This way
         * the action id can be used to track actions and their corresponding
         * responses and response events.<p>
         * Note that Asterisk-Java uses its own internal action id to match
         * actions with the corresponding responses and events. Though the internal
         * action is never exposed to the application code. So if you want to
         * handle reponses or response events on your own your application must
         * set a unique action id using this method otherwise the action id of
         * the reponse and response event objects passed to your application
         * will be null.
         *
         * @param actionId the user provided action id to set.
         * @see org.asteriskjava.manager.response.ManagerResponse#getActionId()
         * @see org.asteriskjava.manager.event.ResponseEvent#getActionId()
         */
        void setActionId(const std::string& id);

    private:

        std::string actionID;
    };

}

#endif /* ABSTRACTMANAGERACTION_H_ */
