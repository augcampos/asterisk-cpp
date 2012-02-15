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
		LOG_TRACE_STR("OUT");
	}

	ASyncResponseCallBack::ASyncResponseCallBack(ManagerAction* a, unsigned int tout, responseCallbackFunction_t f) :
			ResponseCallBack(a, tout) {
		function = f;
	}

	void ASyncResponseCallBack::fireCallBack(ManagerResponse* mr) {
		LOG_TRACE_STR("ASyncResponseCallBack :" + mr->toLog());
		if (function != NULL) {
			(function)(mr);
		}LOG_TRACE_STR("OUT");
	}

	SyncResponseCallBack::SyncResponseCallBack(ManagerAction* a, unsigned int timeOut) :
			ResponseCallBack(a, timeOut) {
	}

	SyncResponseCallBack::~SyncResponseCallBack() {
		boost::lock_guard<boost::mutex> lock(m_mutex);
		m_cond.notify_all();
		LOG_TRACE_STR("OUT");
	}

	void SyncResponseCallBack::stoll() {
		boost::unique_lock<boost::mutex> lock(m_mutex);
		LOG_TRACE_STR("");
		m_cond.wait(lock);
		LOG_TRACE_STR("OUT");
	}
	void SyncResponseCallBack::fireCallBack(ManagerResponse* mr) {
		boost::lock_guard<boost::mutex> lock(m_mutex);
		response = mr;
		LOG_TRACE_STR("SyncResponseCallBack : "+ (*mr).toLog());
		m_cond.notify_all();
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
		LOG_TRACE_STR("OUT");
	}

	ManagerResponsesHandler::~ManagerResponsesHandler() {
		this->stop();
	}

	void ManagerResponsesHandler::addResponsetListener(const std::string& key, ResponseCallBack* bcb) {
		boost::lock_guard<boost::mutex> lock(m_mutex);
		LOG_TRACE_STR("ADD RESPONSE Listener " + key+ "::" + typeid(*bcb).name() + "::" + convertToString(bcb->timeout));
		const std::pair<std::string, ResponseCallBack*> p = std::make_pair(key, bcb);
		listeners.insert(p);
		m_cond.notify_all();
	}

	void ManagerResponsesHandler::removeResponseListener(const std::string& key) {
		LOG_TRACE_STR("REMOVE RESPONSE Listener " + key);
		ResponseCallBack* m = getListener(key);
		listeners.erase(key);
		if (m) {
			//delete (m);
		}LOG_TRACE_STR("OUT" + key);
	}

	bool ManagerResponsesHandler::isEmpty() {
		boost::unique_lock<boost::mutex> lock(m_mutex);
		bool rt = listeners.empty();
		if (rt) {
			m_cond.wait(lock);
		}
		return (rt);
	}

	void ManagerResponsesHandler::stop() {
		if (!Thread::isStoped()) {
			clear();
			Thread::stop();
		}
	}

	void ManagerResponsesHandler::run() {
		boost::posix_time::milliseconds duration(LOOP_INTERVAL);
		boost::this_thread::sleep<boost::posix_time::milliseconds>(duration);
		{
			boost::this_thread::disable_interruption di;
			{

				if (!isEmpty()) {

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
	}

	void ManagerResponsesHandler::clear() {
		boost::lock_guard<boost::mutex> lock(m_mutex);
		for (listenersList_t::const_iterator it = listeners.begin(); it != listeners.end(); it++) {
			removeResponseListener((*it).first);
		}
		m_cond.notify_all();
		LOG_TRACE_STR("OUT");
	}

	ResponseCallBack* ManagerResponsesHandler::getListener(const std::string& key) {
		if (listeners.find(key) != listeners.end())
			return (listeners[key]);

		return (NULL);
	}

	void ManagerResponsesHandler::fireResponseCallback(ManagerResponse *mr) {
		LOG_DEBUG_STR("FIRE RESPONSE " + typeid(*mr).name() + "::" + mr->toLog());
		std::string key = mr->getActionId();

		ResponseCallBack* listner = this->getListener(key);
		if (listner) {
			listner->fireCallBack(mr);
		}
		removeResponseListener(key);

	}

}

