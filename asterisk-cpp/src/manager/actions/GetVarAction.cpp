/*
 * GetVarAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/GetVarAction.h"
#include "asteriskcpp/manager/responses/GetVarResponse.h"

namespace asteriskcpp {

    /**
     * Creates a new empty GetVarAction.
     */
    GetVarAction::GetVarAction() {
    }

    GetVarAction::~GetVarAction() {
    }    
    
    GetVarAction::GetVarAction(const std::string& variable) {
        this->setVariable(variable);
    }

   
    GetVarAction::GetVarAction(const std::string& channel,const std::string& variable) {
        this->setChannel(channel);
        this->setVariable(variable);
    }

    ManagerResponse *GetVarAction::expectedResponce(const std::string & response) {
        return (new GetVarResponse(response));
    }
    
    const std::string& GetVarAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

  
    void GetVarAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

  
    const std::string& GetVarAction::getVariable() const {
        return (getGetterValue(__FUNCTION__));
    }

    void GetVarAction::setVariable(const std::string& variable) {
        setSetterValue(__FUNCTION__, variable);
    }
} //NAMESPACE

