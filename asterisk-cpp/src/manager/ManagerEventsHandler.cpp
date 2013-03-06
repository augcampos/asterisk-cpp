/*
 * ManagerEventsHandler.cpp
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/ManagerEventsHandler.h"
#include <boost/thread.hpp>
#include <boost/bind.hpp>
#include <string.h>
#include "asteriskcpp/utils/LogHandler.h"
#include "asteriskcpp/exceptions/Exception.h"

namespace asteriskcpp {

    ASyncEventCallBack::ASyncEventCallBack(onManagerEventCallback_t f) {
        function = f;
    }

    ASyncEventCallBack::~ASyncEventCallBack() {

    }

    void ASyncEventCallBack::onManagerEvent(const ManagerEvent& me) {
        LOG_TRACE_STR("ASyncEventCallBack :" + me.toLog());
        if (function != NULL) {
            (function) (me);
        }
        LOG_TRACE_STR("OUT");
    }

    ManagerEventsHandler::~ManagerEventsHandler() {

    }

    void ManagerEventsHandler::addEventListener(const ManagerEventListener& mel) {
        listeners.insert(&mel);
    }

    void ManagerEventsHandler::removeEventListener(const ManagerEventListener& mel) {
        listeners.erase(&mel);
    }

    void ManagerEventsHandler::fireEvent(const ManagerEvent& me) {
        boost::thread t(boost::bind(&ManagerEventsHandler::internalFireEvent, this, me));
    }

    void ManagerEventsHandler::internalFireEvent(ManagerEvent& me) {
        LOG_DEBUG_STR("FIRE EVENT " +  me.getEventName() + ":: " + me.toLog());

        for (EventListenersList::const_iterator iter = listeners.begin(); iter != listeners.end(); ++iter) {
            try {
                (const_cast<ManagerEventListener *> (*iter))->onManagerEvent(me);
            } catch (Exception& E) {
                LOG_ERROR_STR(E.getMessage());
            }
        }
    }

}
