/*
 * ListDialplanEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/ListDialplanEvent.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

    ListDialplanEvent::ListDialplanEvent(const std::string & values) :
    ResponseEvent(values) {
    }

    ListDialplanEvent::~ListDialplanEvent() {
    }

    const std::string& ListDialplanEvent::getContext() const {
        return (getProperty("Context"));
    }

    const std::string& ListDialplanEvent::getExtension() const {
        return (getProperty("Extension"));
    }

    const std::string& ListDialplanEvent::getExtensionLabel() const {
        return (getProperty("ExtensionLabel"));
    }

    int ListDialplanEvent::getPriority() const {
        return (convertFromString<int>(getProperty("Priority")));
    }

    bool ListDialplanEvent::isHint() const {
        return (getProperty<bool>("Hint"));
    }

    const std::string& ListDialplanEvent::getApplication() const {
        return (getProperty("Application"));
    }

    const std::string& ListDialplanEvent::getAppData() const {
        return (getProperty("AppData"));
    }

    const std::string& ListDialplanEvent::getRegistrar() const {
        return (getProperty("Registrar"));
    }

}/* namespace asterisk_cpp */
