/*
 * Writer.h
 *
 *  Created on: Jul 7, 2011
 *      Author: augcampos
 */

#ifndef WRITER_H_
#define WRITER_H_

#include "../structs/Thread.h"
#include "../net/TCPSocket.h"
#include "../structs/SynchronisedQueue.h"

namespace asteriskcpp {

    class Writer : public Thread {
    public:
        Writer();
        virtual ~Writer();

        void start(TCPSocket* s, SynchronisedQueue<std::string>* wq);
        void run();

    private:
        using Thread::start;
        TCPSocket* m_connectionSocket;
        SynchronisedQueue<std::string>* m_WriteQueue;
    };

}

#endif /* WRITER_H_ */
