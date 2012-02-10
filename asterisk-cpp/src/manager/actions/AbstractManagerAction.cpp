/*
 * AbstractManagerAction.cpp
 *
 *  Created on: Aug 26, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/AbstractManagerAction.h"
#include "asteriskcpp/utils/StringUtils.h"

#define ACTION "Action"
#define ACTION_ID "ActionID"

static int lastId;

namespace asteriskcpp {

	AbstractManagerAction::~AbstractManagerAction() {

	}

	std::string AbstractManagerAction::getActionId() const {
		return (this->actionID);
	}

	void AbstractManagerAction::setActionId(const std::string & id) {
		this->actionID = id;
	}

	const std::string AbstractManagerAction::generateID() {
		const std::string rt = convertToString(lastId++);
		setActionId(rt);
		return (rt);
	}

	std::string AbstractManagerAction::toString() {
		std::stringstream stream;
		stream << makeStdLine(ACTION, this->getAction());
		stream << makeStdLine(ACTION_ID, this->getActionId());
		stream << PropertyMap::toString();
		return (stream.str());
	}

} //NS
