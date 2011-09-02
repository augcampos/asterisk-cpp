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

class LogoffAction: public AbstractManagerAction {
public:
	virtual ~LogoffAction();

	/**
	 * Returns the name of this action, i.e. "Login".
	 */
	std::string getAction();

};

}

#endif /* LOGOFFACTION_H_ */
