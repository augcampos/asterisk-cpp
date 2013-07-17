/*
 * GetConfigAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/GetConfigAction.h"
#include "asteriskcpp/manager/responses/GetConfigResponse.h"

namespace asteriskcpp {

    /**
     * Creates a new GetConfigAction.
     */
    GetConfigAction::GetConfigAction() {
    }

     ManagerResponse* GetConfigAction::expectedResponce(const std::string & response) {
        return (new GetConfigResponse(response));
    }
    
    /**
     * Creates a new GetConfigAction with the given filename.
     *
     * @param filename the name of the file to get.
     */
    GetConfigAction::GetConfigAction(const std::string& filename) {
        this->setFilename(filename);
    }

    /**
     * Returns the filename.
     */
    const std::string& GetConfigAction::getFilename() const {
        return (getGetterValue(__FUNCTION__));
    }

    void GetConfigAction::setFilename(const std::string& filename) {
        setSetterValue(__FUNCTION__, filename);
    }
} //NAMESPACE

