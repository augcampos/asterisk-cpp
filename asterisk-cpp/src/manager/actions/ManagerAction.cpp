/*
 * ManagerAction.cpp
 *
 *  Created on: Aug 19, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ManagerAction.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

	ManagerAction::ManagerAction(const std::string action_name) :
			action(action_name) {

	}

	const std::string& ManagerAction::getAction() {
		return (this->action);
	}

	ManagerResponse *ManagerAction::expectedResponce(const std::string & response) {
		return (new ManagerResponse(response));
	}

}

