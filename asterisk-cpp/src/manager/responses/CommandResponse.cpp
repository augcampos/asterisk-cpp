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

		boost::split(result, knull, boost::is_any_of(std::string("\n")));
	}

	CommandResponse::~CommandResponse() {

	}

	std::string CommandResponse::getPrivilege() const {
		//TODO: Fix this
		return ("command");
	}

	const std::vector<std::string>& CommandResponse::getResult() {
		return (result);
	}

} /* namespace asteriskcpp */
