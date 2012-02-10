/*
 * ListCommandsAction.cpp
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ListCommandsAction.h"

namespace asteriskcpp {

	ListCommandsAction::~ListCommandsAction() {
	}

	std::string ListCommandsAction::getAction() {
		return ("ListCommands");
	}

} //NS

