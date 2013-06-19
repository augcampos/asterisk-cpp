/*
 * ManagerAction.cpp
 *
 *  Created on: Aug 19, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ManagerAction.h"
#include "asteriskcpp/utils/StringUtils.h"
#include <stdio.h>

#include <cxxabi.h>

namespace asteriskcpp {

    ManagerAction::ManagerAction() {
    }

    const std::string ManagerAction::getAction() const {
        return (this->getClassName().substr(0, this->getClassName().size() - 6));
    }

    ManagerResponse *ManagerAction::expectedResponce(const std::string & response) {
        return (new ManagerResponse(response));
    }

}

