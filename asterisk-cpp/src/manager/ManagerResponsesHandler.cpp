/*
 * ManagerResponsesHandler.cpp
 *
 *  Created on: Jul 14, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/ManagerResponsesHandler.h"
#include "asteriskcpp/utils/LogHandler.h"
#include "asteriskcpp/utils/StringUtils.h"

#define LOOP_INTERVAL 500

namespace asteriskcpp {

ResponseCallBack::ResponseCallBack(ManagerAction* a, unsigned int tout) {
	setAction(a);
	timeout = boost::get_system_time() + boost::posix_time::milliseconds(tout);
}
ResponseCallBack::~ResponseCallBack() {
}

ASyncResponseCallBack::ASyncResponseCallBack(ManagerAction* a, unsigned int tout, responseCallbackFunction_t f) :
		ResponseCallBack(a, tout) {
	function = f;
}

void ASyncResponseCallBack::fireCallBack(ManagerResponse* mr) {
	LOG_TRACE_STR("ASyncResponseCallBack :" + (*mr).toLog());
	if (function != NULL
	)
		(function)(mr);
}

SyncResponseCallBack::SyncResponseCallBack(ManagerAction* a, unsigned int timeOut) :
		ResponseCallBack(a, timeOut) {
}
void SyncResponseCallBack::stoll() {
	boost::unique_lock<boost::mutex> lock(m_mutex);
	m_cond.wait(lock);
}
void SyncResponseCallBack::fireCallBack(ManagerResponse* mr) {
	boost::unique_lock<boost::mutex> lock(m_mutex);
	response = mr;
	LOG_TRACE_STR("SyncResponseCallBack : "+ (*mr).toLog());
	m_cond.notify_one();
}

ManagerAction *ResponseCallBack::getAction() const {
	return (action);
}

void ResponseCallBack::setAction(ManagerAction *action) {
	this->action = action;
}

void ResponseCallBack::fireTimeout() {
	std::string msg = "Response: Error\r\nActionID: " + action->getActionId() + "\r\nMessage: Time Out\r\n\r\n";
	ManagerResponse* rto = new ManagerResponse(msg);
	fireCallBack(rto);
	delete (rto);
}

void ManagerResponsesHandler::addResponsetListener(const std::string& key, ResponseCallBack* bcb) {
	boost::unique_lock<boost::mutex> lock(m_mutex);
	LOG_TRACE_STR("ADD RESPONSE Listener " + key+ "::" + typeid(*bcb).name() + "::" + convertToString(bcb->timeout));
	const std::pair<std::string, ResponseCallBack*> p = std::make_pair(key, bcb);
	listeners.insert(p);
	m_cond.notify_one();

}

void ManagerResponsesHandler::removeResponseListener(const std::string& key) {
	boost::unique_lock<boost::mutex> lock(m_mutex);
	LOG_TRACE_STR("REMOVE RESPONSE Listener " + key);
	ResponseCallBack* m = getListener(key);
	listeners.erase(key);
	if (m)
		delete (m);
}

void ManagerResponsesHandler::stop() {
	clear();
	Thread::stop();
}

void ManagerResponsesHandler::run() {
	boost::posix_time::milliseconds duration(LOOP_INTERVAL);
	boost::this_thread::sleep<boost::posix_time::milliseconds>(duration);
	{
		boost::this_thread::disable_interruption di;
		{
			if (listeners.empty()) {
				boost::unique_lock<boost::mutex> lock(m_mutex);
				m_cond.wait(lock);
			}

			for (listenersList_t::const_iterator it = listeners.begin(); it != listeners.end(); it++) {
				ResponseCallBack* m = (*it).second;
				if (boost::get_system_time() >= m->timeout) {
					m->fireTimeout();
					removeResponseListener((*it).first);
				}
			}

		}
	}
}

void ManagerResponsesHandler::clear() {
	for (listenersList_t::const_iterator it = listeners.begin(); it != listeners.end(); it++) {
		removeResponseListener((*it).first);
	}
	m_cond.notify_one();
}

ResponseCallBack* ManagerResponsesHandler::getListener(const std::string& key) {
	if (listeners.find(key) != listeners.end())
		return (listeners[key]);

	return (NULL);
}

void ManagerResponsesHandler::fireResponseCallback(ManagerResponse *mr) {
	LOG_DEBUG_STR("FIRE RESPONSE " + typeid(*mr).name() + "::" + mr->toLog());
	std::string key = mr->getActionId();

	ResponseCallBack* listner = getListener(key);
	if (listner) {
		listner->fireCallBack(mr);
	}
	removeResponseListener(key);

}

}

