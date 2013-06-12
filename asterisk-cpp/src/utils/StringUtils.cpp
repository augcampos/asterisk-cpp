/*
 * StringUtils.cpp
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

    std::string search_and_replace(const std::string& str, const std::string &oldsubstr, const std::string &newsubstr) {
        std::string::size_type startidx;
        std::string tmp(str);
        while ((startidx = tmp.find(oldsubstr)) != std::string::npos) {
            tmp.replace(startidx, oldsubstr.size(), newsubstr);
        }
        return (tmp);

    }

    time_t stringToTime(const std::string& str, const std::string& format) {
        struct tm result;
        strptime(str.c_str(), format.c_str(), &result);
        return (mktime(&result));
    }

    bool stringToBool(const std::string& str) {
        return ((str.compare("true") == 0 || str.compare("yes") == 0));
    }

    std::string str2Log(const std::string& str) {
        return (search_and_replace(search_and_replace(str, "\r", "\\r"), "\n", "\\n"));
    }
}
