/*
 * AsteriskVersion.h
 *
 *  Created on: Jul 9, 2011
 *      Author: augcampos
 */

#ifndef ASTERISKVERSION_H_
#define ASTERISKVERSION_H_

#include <string>

namespace asteriskcpp {

    class AsteriskVersion {
    public:

        enum ManagerType {
            ASTERISK = 0, OPENPBX, CALLWEAVER, ASTMANPROXY
        };
        void setManagerValues(const std::string& value);

        std::string toString() const;
    private:
        ManagerType type;
        float managerVersion;
    };

}

#endif /* ASTERISKVERSION_H_ */
