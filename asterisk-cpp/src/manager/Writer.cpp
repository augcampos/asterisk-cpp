/*
 * Writer.cpp
 *
 *  Created on: Jul 7, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/Writer.h"
#include "asteriskcpp/utils/LogHandler.h"
#include "asteriskcpp/utils/StringUtils.h"

namespace asteriskcpp {

    Writer::Writer() {

    }

    Writer::~Writer() {
    }

    void Writer::start(TCPSocket* s, SynchronisedQueue<std::string>* wq) {
        m_connectionSocket = s;
        m_WriteQueue = wq;
        Thread::start();
    }

    void Writer::run() {
        std::string s_data = m_WriteQueue->Dequeue();
        LOG_DEBUG_DATA("[SND:" << str2Log(s_data) << ":SND]");
        m_connectionSocket->writeData(s_data.c_str(), (unsigned int) s_data.size());
    }

}

