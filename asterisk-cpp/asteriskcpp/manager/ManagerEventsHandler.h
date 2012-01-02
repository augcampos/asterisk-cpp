/*
 * ManagerEventsHandler.h
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#ifndef MANAGEREVENTSHANDLER_H_
#define MANAGEREVENTSHANDLER_H_

#include "ManagerEventListener.h"
#include <set>
#include <typeinfo>
#include <string>

namespace asteriskcpp {

class ManagerEventsHandler {
	typedef std::set<const ManagerEventListener*> EventListenersList;
public:
	virtual ~ManagerEventsHandler();
	void addEventListener(const ManagerEventListener& mel);
	void removeEventListener(const ManagerEventListener& mel);

protected:
	EventListenersList listeners;
	void fireEvent(ManagerEvent* me);

private:
	void internalFireEvent(ManagerEvent* me);

};

}

#endif /* MANAGEREVENTSHANDLER_H_ */
