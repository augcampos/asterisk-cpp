/*
 * ExtensionStateAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ExtensionStateAction.h"
#include "asteriskcpp/manager/responses/ExtensionStateResponse.h"

namespace asteriskcpp {

    /**
     * Creates a new ExtensionStateAction.
     */
    ExtensionStateAction::ExtensionStateAction() {
    }

    ManagerResponse* ExtensionStateAction::expectedResponce(const std::string & response) {
        return (new ExtensionStateResponse(response));
    }
    
    /**
     * Creates a new ExtensionStateAction that queries the state of the given extension in
     * the given context.
     *
     * @param exten the extension to query.
     * @param context the name of the context that contains the extension to query.
     * @since 1.0.0
     */
    ExtensionStateAction::ExtensionStateAction(const std::string& context) {
        this->setContext(context);
    }

    /**
     * Returns the extension to query.
     *
     * @return the extension to query.
     */
    const std::string& ExtensionStateAction::getExten() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the extension to query.
     *
     * @param exten the extension to query.
     */
    void ExtensionStateAction::setExten(const std::string& exten) {
        setSetterValue(__FUNCTION__, exten);
    }

    /**
     * Returns the name of the context that contains the extension to query.
     *
     * @return the name of the context that contains the extension to query.
     */
    const std::string& ExtensionStateAction::getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ExtensionStateAction::setContext(const std::string& context) {
        setSetterValue(__FUNCTION__, context);
    }
} //NAMESPACE

