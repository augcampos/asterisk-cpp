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

    const std::string& ManagerAction::getAction() {
        if (this->action.empty()) {
            char str[128];
            int i;
            const char *realname = typeid (*this).name();
            sscanf(realname, "N11asteriskcpp%d%s", &i, str);
            this->action.assign(str, i - 6);
        }

        return (this->action);
    }

    ManagerResponse *ManagerAction::expectedResponce(const std::string & response) {
        return (new ManagerResponse(response));
    }

}

