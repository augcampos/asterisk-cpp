/*
 * ManagerResponsesHandler.h
 *
 *  Created on: Jul 14, 2011
 *      Author: augcampos
 */

#ifndef MANAGERRESPONSESHANDLER_H_
#define MANAGERRESPONSESHANDLER_H_

#include <map>
#include <typeinfo>
#include <string>
#include <ctime>
#include <memory>
#include <boost/thread/thread.hpp>
#include <boost/date_time.hpp>
#include "asteriskcpp/manager/responses/ManagerResponse.h"
#include "asteriskcpp/structs/Thread.h"
#include "asteriskcpp/manager/actions/ManagerAction.h"
#include "asteriskcpp/utils/LogHandler.h"

namespace asteriskcpp {

    class ResponseCallBack {
    public:
        boost::system_time timeout;
        bool isTimeout;
        ResponseCallBack(ManagerAction* a, unsigned int tout);
        virtual ~ResponseCallBack();

        void fireTimeout();
        virtual void fireCallBack(ManagerResponse* mr) = 0;
        ManagerAction* getAction() const;

    protected:
        ManagerAction* action;
        void setAction(ManagerAction *action);
    };

    typedef void (*responseCallbackFunction_t)(ManagerResponse*);

    class ASyncResponseCallBack : public ResponseCallBack {
    public:
        ASyncResponseCallBack(ManagerAction* a, unsigned int tout, responseCallbackFunction_t f);
        virtual ~ASyncResponseCallBack();
        virtual void fireCallBack(ManagerResponse* mr);

    protected:
        responseCallbackFunction_t function;
    };

    class SyncResponseCallBack : public ResponseCallBack {
        boost::mutex m_mutex;
        boost::condition_variable m_cond;
        bool isReady;
        bool isStollEnd;

    public:
        virtual ~SyncResponseCallBack();

        ManagerResponse *response;
        SyncResponseCallBack(ManagerAction* a, unsigned int timeOut);
        ManagerResponse* stoll();
        virtual void fireCallBack(ManagerResponse* mr);
    };

    class ManagerResponsesHandler : public Thread {
        boost::mutex m_mutex;
        typedef std::map<std::string, ResponseCallBack*> listenersList_t;
        boost::condition_variable m_cond;

    public:
        virtual ~ManagerResponsesHandler();
        void addResponsetListener(const std::string& key, ResponseCallBack* bcb);
        void removeResponseListener(const std::string& key);
        bool isEmpty();

        virtual void stop();
        virtual void run();

        ResponseCallBack* getListener(const std::string& key);

    protected:
        listenersList_t listeners;
        void clear();
        void fireResponseCallback(ManagerResponse* mr);
        virtual void notifyResponseMessage(const std::string& responseMessage) {};

    };

}

#endif /* MANAGERRESPONSESHANDLER_H_ */
