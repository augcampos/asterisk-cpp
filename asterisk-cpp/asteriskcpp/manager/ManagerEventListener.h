/*
 * ManagerEventListener.h
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#ifndef MANAGEREVENTLISTENER_H_
#define MANAGEREVENTLISTENER_H_

#include "events/ManagerEvent.h"

namespace asteriskcpp {

    class ManagerEventListener {
    public:
        virtual ~ManagerEventListener();
        virtual void onManagerEvent(const ManagerEvent& me) = 0;
    };

}

#endif /* MANAGEREVENTLISTENER_H_ */

