/*
 * ManagerError.cpp
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/responses/ManagerError.h"

namespace asteriskcpp {

ManagerError::ManagerError(const std::string& responseStr) :
		ManagerResponse(responseStr) {

}
ManagerError::~ManagerError() {

}
} //NS
