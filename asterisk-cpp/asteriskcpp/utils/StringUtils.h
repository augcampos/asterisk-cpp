/*
 * StringUtils.h
 *
 *  Created on: Jul 7, 2011
 *      Author: augcampos
 */

#ifndef STRINGUTILS_H_
#define STRINGUTILS_H_

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#ifdef WIN32
#include "timesupport.h"
#endif

namespace asteriskcpp {

    template<class T>
    static std::string convertToString(const T& t) {
        std::ostringstream stream;
        stream << t;
        return (stream.str());
    }

    template<class T>
    static T convertFromString(const std::string& s) {
        std::istringstream stream(s);
        T t;
        stream >> t;
        return (t);
    }

    std::string search_and_replace(const std::string& str, const std::string &oldsubstr, const std::string &newsubstr);

    time_t stringToTime(const std::string& str, const std::string& format);

    bool stringToBool(const std::string& str);

    std::string str2Log(const std::string& str);

}

#endif /* STRINGUTILS_H_ */
