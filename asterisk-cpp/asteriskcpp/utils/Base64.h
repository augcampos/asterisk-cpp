/*
 * Base64.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef BASE64_H_
#define BASE64_H_

#include <string>
#include <iostream>

namespace asteriskcpp {

    class Base64 {
    public:
        static std::string encode(unsigned char const* bytes_to_encode, unsigned int in_len);
        static std::string encode(std::string const& decoded_string);
        static std::string decode(std::string const& encoded_string);
    };

} /* namespace asteriskcpp */
#endif /* BASE64_H_ */
