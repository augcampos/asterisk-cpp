/*
 * PropertyMap.h
 *
 *  Created on: Jul 11, 2011
 *      Author: augcampos
 */

#ifndef PROPERTYMAP_H_
#define PROPERTYMAP_H_

#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include "asteriskcpp/utils/StringUtils.h"

/*
 * Comparator for case-insensitive comparison in STL assos. containers
 * case-independent (ci) compare_less binary function
 */
struct ci_less: std::binary_function<std::string&, std::string&, bool> {

	struct nocase_compare: public std::binary_function<unsigned char, unsigned char, bool> {
		bool operator()(const unsigned char& c1, const unsigned char& c2) const {
			return (tolower(c1) < tolower(c2));
		}
	};
	bool operator()(const std::string & s1, const std::string & s2) const {
		return (std::lexicographical_compare(s1.begin(), s1.end(), // source range
				s2.begin(), s2.end(), // dest range
				nocase_compare())); // comparison
	}
};

typedef std::map<const std::string, std::string, ci_less> propertyMap;
typedef const std::pair<const std::string, std::string> propertyPair;
typedef std::list<std::string> propertyIndex;

namespace asteriskcpp {

	class PropertyMap {
	public:
		PropertyMap();
		PropertyMap(const std::string& str);
		virtual ~PropertyMap();

		virtual std::string toString() const ;
		std::string toLog() const;

		const std::string& getProperty(const std::string& key) const;
		template<class T> T getProperty(const std::string& key) const {
			return (convertFromString<T>(getProperty(key)));
		}
	protected:
		propertyIndex index;
		propertyMap values;

		void setProperty(const std::string& key, const std::string& value);
		template<class T> void setProperty(const std::string& key, const T& t) {
			setProperty(key, convertToString(t));
		}

		static std::string makeStdLine(const std::string& key, const std::string& value);

		void convertStr(const std::string& propertyStr);
	private:

		void addProperty(const std::string& key, const std::string& value);
		void editProperty(const std::string& key, const std::string& value);

	};

}

#endif /* PROPERTYMAP_H_ */
