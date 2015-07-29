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
#include "../structs/Thread.h"

#include <queue>

namespace asteriskcpp {

    class Dispatcher {
    public:

        virtual ~Dispatcher() {
        }

        virtual void dispatchAsteriskVersion(AsteriskVersion* version) = 0;
        virtual void dispatchResponse(const std::string& response) = 0;
        virtual void dispatchEvent(const std::string& event) = 0;
        virtual void notifyDisconnect() = 0;
    };

    class MessageTable {
    private:
        std::queue<std::string> messageQueue;
        boost::mutex mutex;
        boost::condition_variable condition;

    public:
        MessageTable() {}
        ~MessageTable();
        void put(std::string message);
        std::string take();
    };

    class DispatchThread : public Thread {
    private:
        boost::mutex m_mutex;
        boost::condition_variable m_cond;

        MessageTable* messageTable;

    public:
        DispatchThread(MessageTable* mt, Dispatcher* f);
        virtual ~DispatchThread();

        virtual void stop();
        virtual void run();

    protected:
        Dispatcher* dispatcher;
        virtual void fireDispatch(std::string message) = 0;
    };

    class ResponseDispatchThread : public DispatchThread {
    public:
        ResponseDispatchThread(MessageTable* mt, Dispatcher* f)
            : DispatchThread(mt, f) {}
        virtual ~ResponseDispatchThread() {}
    protected:
        virtual void fireDispatch(std::string message) {
            this->dispatcher->dispatchResponse(message);
        }
    };

    class EventDispatchThread : public DispatchThread {
    public:
        EventDispatchThread(MessageTable* mt, Dispatcher* f)
            : DispatchThread(mt, f) {}
        virtual ~EventDispatchThread() {}
    protected:
        virtual void fireDispatch(std::string message) {
            this->dispatcher->dispatchEvent(message);
        }
    };
}

#endif /* DISPATCHER_H_ */
