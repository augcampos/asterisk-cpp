/*
 * Reader.h
 *
 *  Created on: Jul 5, 2011
 *      Author: augcampos
 */

#ifndef READER_H_
#define READER_H_

#include <iostream>

#include "../structs/Thread.h"
#include "../net/TCPSocket.h"
#include "Dispatcher.h"

namespace asteriskcpp {

    class Reader : public Thread {
    public:
        Reader();
        void start(TCPSocket* s, Dispatcher* d);
        void stop();
        void run();
        virtual ~Reader();

        void delegeteResponseMessage(const std::string& responseMessage);
        void delegeteEventMessage(const std::string& eventMessage);

    private:
        using Thread::start;
        TCPSocket* connectionSocket;
        Dispatcher* dispatcher;
        std::string unprocessedStr;

        MessageTable* responseMessageTable;
        MessageTable* eventMessageTable;
        DispatchThread* responseThread;
        DispatchThread* eventThread;

        void processIncomming(const std::string& newStr);

    };

}

#endif /* READER_H_ */
