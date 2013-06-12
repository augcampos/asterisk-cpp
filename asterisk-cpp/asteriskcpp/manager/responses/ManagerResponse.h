/*
 * ManagerResponse.h
 *
 *  Created on: Jul 13, 2011
 *      Author: augcampos
 */

#ifndef MANAGERRESPONSE_H_
#define MANAGERRESPONSE_H_

#include <map>
#include "../../structs/PropertyMap.h"

namespace asteriskcpp {

    /**
     * Represents a response received from the Asterisk server as the result of a
     * previously sent ManagerAction.<p>
     * The response can be linked with the action that caused it by looking the
     * action id attribute that will match the action id of the corresponding
     * action.
     *
     * @see org.asteriskjava.manager.action.ManagerAction
     */
    class ManagerResponse : public PropertyMap {
    public:

        enum Type {
            Type_SUCCESS, Type_ERROR
        };
        ManagerResponse(const std::string& responseStr);
        virtual ~ManagerResponse();

        Type getType();

        bool inline isTypeSuccess() {
            return (this != NULL && (getType() == Type_SUCCESS));
        }

        /**
         * Returns a Map with all attributes of this response.<p>
         * The keys are all lower case!
         *
         * @see #getAttribute(String)
         */
        std::map<const std::string, const std::string> getAttributes() const;

        /**
         * Returns the value of the attribute with the given key.<p>
         * This is particulary important when a response contains special
         * attributes that are dependent on the action that has been sent.<p>
         * An example of this is the response to the GetVarAction.
         * It contains the value of the channel variable as an attribute
         * stored under the key of the variable name.<p>
         * Example:
         * <pre>
         * GetVarAction action = new GetVarAction();
         * action.setChannel("SIP/1310-22c3");
         * action.setVariable("ALERT_INFO");
         * ManagerResponse response = connection.sendAction(action);
         * String alertInfo = response.getAttribute("ALERT_INFO");
         * </pre>
         * As all attributes are internally stored in lower case the key is
         * automatically converted to lower case before lookup.
         *
         * @param key the key to lookup.
         * @return the value of the attribute stored under this key or
         *         <code>null</code> if there is no such attribute.
         */
        std::string getAttribute(const std::string& key) const;

        std::string getActionId() const;

    private:
        Type type;
    };

}

#endif /* MANAGERRESPONSE_H_ */
