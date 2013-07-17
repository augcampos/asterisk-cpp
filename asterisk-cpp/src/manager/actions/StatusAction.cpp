/*
 * StatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/StatusAction.h"

namespace asteriskcpp {

    StatusAction::StatusAction() {
    }

    StatusAction::StatusAction(const std::string& channel) {
        this->setChannel(channel);
    }

    const std::string& StatusAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void StatusAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& StatusAction::getVariables() const {
        return (getGetterValue(__FUNCTION__));
    }

    void StatusAction::setVariables(const std::string& variables) {
        setSetterValue(__FUNCTION__, variables);
    }

    void StatusAction::setVariables(std::vector<std::string>& variables) {

        std::string rt;
        for (std::vector<std::string>::iterator it = variables.begin(); it != variables.end(); ++it) {
            // Extra stuff removed
            rt.append(*it).append(",");
        }


        setSetterValue(__FUNCTION__, rt);
    }
} //NAMESPACE

