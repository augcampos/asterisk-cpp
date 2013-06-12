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

namespace asteriskcpp {
    static int lastId;

    AbstractManagerAction::AbstractManagerAction() {
    }

    AbstractManagerAction::~AbstractManagerAction() {

    }

    const std::string& AbstractManagerAction::getActionId() const {
        return (this->actionID);
    }

    void AbstractManagerAction::setActionId(const std::string& id) {
        this->actionID = id;
    }

    const std::string& AbstractManagerAction::generateID() {
        this->actionID = convertToString(lastId++);
        return (this->actionID);
    }

    const std::string& AbstractManagerAction::toString() {
        std::stringstream stream;
        stream << makeStdLine(ACTION, this->getAction());
        stream << makeStdLine(ACTION_ID, this->getActionId());
        stream << PropertyMap::toString();

        this->to_string = stream.str();
        return (this->to_string);
    }

}

//NS
