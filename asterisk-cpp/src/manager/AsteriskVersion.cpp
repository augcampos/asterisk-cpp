/*
 * AsteriskVersion.cpp
 *
 *  Created on: Jul 9, 2011
 *      Author: augcampos
 */
#include "asteriskcpp/manager/AsteriskVersion.h"
#include "asteriskcpp/utils/StringUtils.h"

#include <boost/algorithm/string/predicate.hpp>

namespace asteriskcpp {

    void AsteriskVersion::setManagerValues(const std::string& value) {
        if (boost::istarts_with(value, "Asterisk Call Manager Proxy/")) {
        } else if (boost::istarts_with(value, "Asterisk Call Manager/")) {
            type = ASTERISK;
        } else if (boost::istarts_with(value, "Asterisk Manager Proxy/")) {
        } else if (boost::istarts_with(value, "OpenPBX Call Manager/")) {
        } else if (boost::istarts_with(value, "CallWeaver Call Manager/")) {
        }

        std::string ver = value.substr(value.length() - 3);
        managerVersion = convertFromString<float>(ver);
    }

    std::string AsteriskVersion::toString() const {
        std::ostringstream rt;
        rt << "Asterisk Version: Manager " << type << ": " << managerVersion;
        return (rt.str());
    }

}

