/*
 * CommandResponse.cpp
 *
 *  Created on: Sep 1, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/responses/CommandResponse.h"
#include <boost/algorithm/string.hpp>

namespace asteriskcpp {

CommandResponse::CommandResponse(const std::string & responseStr) :
		ManagerResponse(responseStr) {
	std::string knull(this->getProperty(""));
	std::cout << "[NNN = ]" << knull << std::endl;
	boost::split(this->result, knull, boost::is_any_of(std::string("\n")));

	std::cout << "[SSS = ]" << this->result.size() << std::endl;

}

CommandResponse::~CommandResponse() {
}

std::string CommandResponse::getPrivilege() const {
	//TODO: Fix this
	return ("command");
}

std::vector<std::string> CommandResponse::getResult() const {
	return (this->result);
}

} /* namespace asteriskcpp */
