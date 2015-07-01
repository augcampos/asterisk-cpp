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

    typedef void (*onManagerEventCallback_t)(const ManagerEvent& me);

    class ASyncEventCallBack : public ManagerEventListener {
    public:
        ASyncEventCallBack(onManagerEventCallback_t f);
        virtual ~ASyncEventCallBack();
        void onManagerEvent(const ManagerEvent& me);
    protected:
        onManagerEventCallback_t function;
    };

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
