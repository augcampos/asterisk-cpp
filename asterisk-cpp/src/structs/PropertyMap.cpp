/*
 * PropertyMap.cpp
 *
 *  Created on: Jul 11, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/structs/PropertyMap.h"
#include <vector>
#include <boost/algorithm/string.hpp>
#include <boost/regex.hpp>

#define SEP ": "
#define NEWLINE "\r\n"

namespace asteriskcpp {

PropertyMap::PropertyMap() {
}

PropertyMap::PropertyMap(const std::string & str) {
	convertStr(str);
}

PropertyMap::~PropertyMap() {
}

std::string PropertyMap::toString() {
	std::stringstream stream;
	for (propertyIndex::iterator it = index.begin(); it != index.end(); it++) {
		stream << makeStdLine(*it, getProperty(*it));
	}
	stream << NEWLINE;
	return (stream.str());
}

std::string PropertyMap::toLog() {
	return (str2Log(toString()));
}

void PropertyMap::setProperty(const std::string& key, const std::string& value) {
	propertyMap::const_iterator it = values.find(key);
	if (it != values.end())
		editProperty(key, value);
	else
		addProperty(key, value);
}

std::string PropertyMap::getProperty(const std::string& key) const {
	propertyMap::const_iterator it = values.find(key);
	if (it != values.end())
		return ((it)->second);
	else
		return ("");
}

void PropertyMap::convertStr(const std::string& propertyStr) {
	std::string knull;
	std::vector<std::string> lines;
	boost::split(lines, propertyStr, boost::is_any_of(NEWLINE));
	for (std::vector<std::string>::const_iterator it = lines.begin(); it != lines.end(); it++) {
		size_t sep = (*it).find(SEP);
		if (knull.size() == 0 && sep != (*it).npos) {
			setProperty((*it).substr(0, sep), (*it).substr(sep + 2));
		} else {
			knull.append(*it);
		}
	}
	if (knull.size())
		setProperty("", knull);
}

void PropertyMap::addProperty(const std::string& key, const std::string& value) {
	const std::pair<std::string, std::string> p = std::make_pair(key, value);
	index.push_back(key);
	values.insert(p);
}

std::string PropertyMap::makeStdLine(const std::string & key, const std::string & value) {
	return (std::string(key + SEP + value + NEWLINE));
}

void PropertyMap::editProperty(const std::string& key, const std::string& value) {
	values[key] = value;
}

}
