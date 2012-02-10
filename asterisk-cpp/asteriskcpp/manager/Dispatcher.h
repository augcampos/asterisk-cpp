/*
 * Dispatcher.h
 *
 *  Created on: Jul 13, 2011
 *      Author: augcampos
 */

#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#include "events/ManagerEvent.h"
#include "responses/ManagerResponse.h"
#include "AsteriskVersion.h"

namespace asteriskcpp {

	class Dispatcher {
	public:
		virtual ~Dispatcher() {
		}

		virtual void dispatchAsteriskVersion(AsteriskVersion* version)=0;
		virtual void dispatchResponse(const std::string& response)=0;
		virtual void dispatchEvent(const std::string& event)=0;
	};

}

#endif /* DISPATCHER_H_ */
