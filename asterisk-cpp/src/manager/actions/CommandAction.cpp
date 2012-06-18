/*
 * CommandAction.cpp
 *
 *  Created on: Sep 1, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/CommandAction.h"
#include "asteriskcpp/manager/responses/CommandResponse.h"

namespace asteriskcpp {

	CommandAction::CommandAction() :
			AbstractManagerAction("Command") {
	}

	CommandAction::CommandAction(const std::string & command) :
			AbstractManagerAction("Command") {
		this->setCommand(command);
	}

	CommandAction::~CommandAction() {
	}

	const std::string& CommandAction::getCommand() const {
		return (getGetterValue(__FUNCTION__));
	}

	void CommandAction::setCommand(std::string command) {
		setSetterValue(__FUNCTION__, command);
	}

	ManagerResponse *CommandAction::expectedResponce(const std::string & response) {
		return (new CommandResponse(response));
	}

} /* namespace asteriskcpp */
