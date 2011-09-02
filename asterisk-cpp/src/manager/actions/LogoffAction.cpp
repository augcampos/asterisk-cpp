/*
 * LogoffAction.cpp
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */
#include "asteriskcpp/manager/actions/LogoffAction.h"

namespace asteriskcpp {

LogoffAction::~LogoffAction() {
}

std::string LogoffAction::getAction() {
	return ("Logoff");
}

} //NS

