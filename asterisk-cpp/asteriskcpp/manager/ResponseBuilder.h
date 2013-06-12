/*
 * ResponseBuilder.h
 *
 *  Created on: Aug 1, 2011
 *      Author: a-campos
 */

#ifndef RESPONSEBUILDER_H_
#define RESPONSEBUILDER_H_

#include "responses/ManagerResponse.h"
#include "actions/ManagerAction.h"

namespace asteriskcpp {

    class ResponseBuilder {
    public:
        ResponseBuilder();
        virtual ~ResponseBuilder();
        virtual ManagerResponse* buildResponse(ManagerAction* action, const std::string& responseStr);
    };

}

#endif /* RESPONSEBUILDER_H_ */
