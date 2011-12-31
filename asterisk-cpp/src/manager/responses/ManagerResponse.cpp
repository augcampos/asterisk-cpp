/*
 * ManagerResponse.cpp
 *
 *  Created on: Jul 13, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/responses/ManagerResponse.h"

#define ACTION_ID "ActionID"
#define TYPE_SUCCESS "Success"
#define TYPE_ERROR "Error"

namespace asteriskcpp {

ManagerResponse::~ManagerResponse() {
}

ManagerResponse::ManagerResponse(const std::string& responseStr) {
	convertStr(responseStr);
}

ManagerResponse::Type ManagerResponse::getType() {
	std::string sType = getProperty("Response");
	if (sType == TYPE_ERROR) {
		return (ManagerResponse::Type_ERROR);
	}
	return (ManagerResponse::Type_SUCCESS);

}

std::string ManagerResponse::getActionId() const {
	return (getProperty(ACTION_ID));
}

}
