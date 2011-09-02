/*
 * ManagerAction.cpp
 *
 *  Created on: Aug 19, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ManagerAction.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

ManagerResponse *ManagerAction::expectedResponce(const std::string & response) {
	return (new ManagerResponse(response));
}
}

