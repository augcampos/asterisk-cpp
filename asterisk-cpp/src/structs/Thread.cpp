/*
 * Thread.cpp
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/structs/Thread.h"
#include <iostream>
#include "asteriskcpp//utils/LogHandler.h"

namespace asteriskcpp {

Thread::Thread() {
	m_thread = NULL;
}

Thread::~Thread() {
	if (m_thread != NULL) {
		delete (m_thread);
	}
}

void Thread::start() {
	setMustStop(false);

	// Create thread and start it with myself as argument. Pass myself as reference since I don't want a copy
	m_thread = new boost::thread(boost::ref(*this));
}

void Thread::stop() {
	// Signal the thread to stop (thread-safe)
	setMustStop(true);

	// Wait for the thread to finish.
	if (m_thread != NULL) {
		m_thread->interrupt();
		m_thread->join();
	}
}

void Thread::run() {
	LOG_WARN_STR("This thread is running a empty method!!");
}

void Thread::operator ()() {
	do {
		run();
	} while (m_mustStop == false);

}

void Thread::setMustStop(volatile bool stop) {
	m_mustStopMutex.lock();
	m_mustStop = stop;
	m_mustStopMutex.unlock();
}

}

