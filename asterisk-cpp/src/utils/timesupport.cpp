// Copyright 2009 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "asteriskcpp/utils/timesupport.h"
#include <ctype.h>
#include <string.h>
#include "boost/date_time/posix_time/posix_time.hpp"

namespace asteriskcpp {
// Implement strptime under windows
// weekday name.
// month name.
// month [1, 12].
// day [1, 31].
// hour [0, 23].
// minute [0, 59]
// seconds [0, 60]. 60 is for leap year.
// year [1900, 9999].
// year [0, 99].
// arbitray whitespace.
// '%'.
// All the other format are not supported.
	time_t mkgmtime(const struct std::tm* tmTime) {
		// Month-to-day offset for non-leap-years.
		static const int month_day[12] = { };
		// Most of the calculation is easy; leap years are the main difficulty.

		int month = tmTime->tm_mon % 12;
		int year = tmTime->tm_year + tmTime->tm_mon / 12;
		if (month < 0) {
			// Negative values % 12 are still negative.
			month += 12;
			--year;
		}
		// This is the number of Februaries since 1900.
		const int year_for_leap = (month > 1) ? year + 1 : year;
		time_t rt = tmTime->tm_sec
				+ 60 * (tmTime->tm_min
						+ 60 * (tmTime->tm_hour
								+ 24 * (month_day[month] + tmTime->tm_mday - 1
										+ 365 * (year - 70) + (year_for_leap - 69) / 4
										- (year_for_leap - 1) / 100 + (year_for_leap + 299) / 400))); // Except 400s.
		return (rt < 0 ? -1 : rt);
	}

	bool parseRfcTime(const char *buf, struct std::tm* tmTime) {
		memset(tmTime, 0, sizeof(*tmTime));
		return (strptime(buf, "%a, %e %b %Y %H:%M:%S", tmTime) || // RFC 822/1123
				strptime(buf, "%a, %e-%b-%y %H:%M:%S", tmTime) || // RFC 850/1036
				strptime(buf, "%a %b %e %H:%M:%S %Y", tmTime)); // asctime()
	}

// Covert the time to W3C Datetime formats.
// See http://www.w3.org/TR/NOTE-datetime
	const std::string formatW3CTime(const time_t & time) {
		char buffer[80];
		std::strftime(buffer, 80, "%Y-%m-%dT%H:%M:%SZ", // like 2001-12-31T23:59:59Z
				std::gmtime(&time));
		return (buffer);
	}

	std::string formatHttpDate(time_t t) {
		// Convert 'time_t' to struct tm (GMT)
		tm *gmt_p = std::gmtime(&t);
		// Convert struct tm to HTTP-date string
		char buff[256];
		std::strftime(buff, sizeof(buff), "%a, %d %b %Y %H:%M:%S GMT", gmt_p);
		return (buff);
	}

	std::string getCurrentTimeStamp() {
		boost::posix_time::ptime pt = boost::posix_time::second_clock::local_time();
		return (boost::posix_time::to_iso_string(pt));
	}

}
