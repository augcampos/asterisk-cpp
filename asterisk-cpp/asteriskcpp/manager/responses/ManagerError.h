/*
 * ManagerError.h
 *
 *  Created on: Aug 20, 2011
 *      Author: augcampos
 */

#ifndef MANAGERERROR_H_
#define MANAGERERROR_H_

#include "ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Represents an "Response: Error" response received from the asterisk server.
     * The cause for the error is given in the message attribute.
     *
     */
    class ManagerError : public ManagerResponse {
    public:
        ManagerError(const std::string& responseStr);
        virtual ~ManagerError();
    };

}

#endif /* MANAGERERROR_H_ */
