/*
 * ModuleCheckAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ModuleCheckAction.h"
#include "asteriskcpp/manager/responses/ModuleCheckResponse.h"

namespace asteriskcpp {

    /**
     * Creates a new ModuleCheckAction.
     */
    ModuleCheckAction::ModuleCheckAction() {
    }
    
    ModuleCheckAction::~ModuleCheckAction() {
    }    

    ManagerResponse* ModuleCheckAction::expectedResponce(const std::string & response) {
        return (new ModuleCheckResponse(response));
    }

    /**
     * Creates a new ModuleCheckAction with the given parameters.
     *
     * @param module the name of the module (including or not including the ".so" extension).
     */
    ModuleCheckAction::ModuleCheckAction(const std::string& module) {
        this->setModule(module);
    }

    /**
     * Returns the name of the module to check.
     *
     * @return the name of the module to check.
     */
    const std::string& ModuleCheckAction::getModule() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ModuleCheckAction::setModule(const std::string& module) {
        setSetterValue(__FUNCTION__, module);
    }
} //NAMESPACE

