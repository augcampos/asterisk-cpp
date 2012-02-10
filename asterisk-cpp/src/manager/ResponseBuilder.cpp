/*
 * ResponseBuilder.cpp
 *
 *  Created on: Aug 1, 2011
 *      Author: a-campos
 */

#include "asteriskcpp/manager/ResponseBuilder.h"
#include "asteriskcpp/manager/responses/ManagerError.h"

#include <boost/algorithm/string/predicate.hpp>
#include <boost/lexical_cast.hpp>

namespace asteriskcpp {

	ResponseBuilder::ResponseBuilder() {
	}

	ResponseBuilder::~ResponseBuilder() {
	}

	ManagerResponse* ResponseBuilder::buildResponse(ManagerAction* action, const std::string& responseStr) {
		if (boost::istarts_with(responseStr, "Response: Error")) {
			return (new ManagerError(responseStr));
		}

		if (action != NULL) {
			return (action->expectedResponce(responseStr));
		}

		return (new ManagerResponse(responseStr));
	}

}
