/*
 * LogoffAction.h
 *
 *  Created on: Jul 20, 2011
 *      Author: augcampos
 */

#ifndef LOGOFFACTION_H_
#define LOGOFFACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    class LogoffAction : public AbstractManagerAction {
    public:
        LogoffAction();

        virtual ~LogoffAction();
    };

}

#endif /* LOGOFFACTION_H_ */
