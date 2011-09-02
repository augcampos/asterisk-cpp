/*
 * CommandAction.cpp
 *
 *  Created on: Sep 1, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/CommandAction.h"
#include "asteriskcpp/manager/responses/CommandResponse.h"

namespace asteriskcpp {

CommandAction::CommandAction() {
}

CommandAction::CommandAction(const std::string & command) {
	this->setCommand(command);
}

CommandAction::~CommandAction() {
}

std::string CommandAction::getAction() {
	return ("Command");
}

std::string CommandAction::getCommand() const {
	return (getProperty("command"));
}

void CommandAction::setCommand(std::string command) {
	setProperty("command", command);
}

ManagerResponse *CommandAction::expectedResponce(const std::string & response) {
	std::cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << std::endl;
	std::cout << response << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	ManagerResponse *rt = new CommandResponse(response);
	(*rt).toLog();
	std::cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << std::endl;
	return (rt);
}

} /* namespace asteriskcpp */
