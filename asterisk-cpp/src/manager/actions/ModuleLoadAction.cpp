/*
 * ModuleLoadAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ModuleLoadAction.h"

namespace asteriskcpp {

    ModuleLoadAction::ModuleLoadAction() {
    }
    
    ModuleLoadAction::~ModuleLoadAction() {
    }    

    ModuleLoadAction::ModuleLoadAction(const std::string& loadType) {
        this->setLoadType(loadType);
    }

    const std::string& ModuleLoadAction::getModule() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ModuleLoadAction::setModule(const std::string& module) {
        setSetterValue(__FUNCTION__, module);
    }

    const std::string& ModuleLoadAction::getLoadType() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ModuleLoadAction::setLoadType(const std::string& loadType) {
        setSetterValue(__FUNCTION__, loadType);
    }
} //NAMESPACE

