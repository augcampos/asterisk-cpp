/*
 * Connection.cpp
 *
 *  Created on: Jul 4, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/ManagerConnection.h"
#include <exception>
#include <boost/format.hpp>
#include <boost/regex.hpp>
#include "asteriskcpp/exceptions/Exception.h"
#include "asteriskcpp/utils/LogHandler.h"
#include "asteriskcpp/utils/StringUtils.h"
#include "asteriskcpp/manager/actions/LoginAction.h"
#include "asteriskcpp/manager/actions/LogoffAction.h"

#define DEFAULT_TIMEOUT 2000

static const char* status[] = { "Disconnected", "Connected", "Authenticated" };

namespace asteriskcpp {

ManagerConnection::ManagerConnection() :
		state(DISCONNECTED), defaultActionTimeout(DEFAULT_TIMEOUT) {
}

ManagerConnection::~ManagerConnection() {
	disconnect();
}

bool ManagerConnection::connect(const std::string& server, unsigned int port) {
	try {
		LOG_INFO_STR((boost::format("Connecting to %1%:%2% ") % server % port).str());
		IPAddress ip(server, port);
		socket = new TCPSocket(ip);
		LOG_INFO_STR("Success");
		changeState(CONNECTED);
		return (true);
	} catch (Exception& E) {
		LOG_ERROR_STR((boost::format("Fail %1%:%2% - %3%") % server % port % E.getMessage()).str());
	}
	disconnect();
	return (false);
}

void ManagerConnection::disconnect() {
	changeState(DISCONNECTED);
	if (socket != NULL) {
		delete (socket);
	}
}

void ManagerConnection::send(const std::string& data) {
	LOG_DEBUG_STR(str2Log(data));
	this->socket->writeData(data.c_str(), (unsigned int) data.size());
}

void ManagerConnection::sendAction(ManagerAction& action) {
	//TODO: call sendAction(action, NULL) // to set the correct response
	send(action.toString());
}

void ManagerConnection::sendAction(ManagerAction& action, responseCallbackFunction_t rcbf) {
	ASyncResponseCallBack *asrcb = new ASyncResponseCallBack(&action, defaultActionTimeout, rcbf);
	addResponsetListener(action.getActionId(), asrcb);
	sendAction(action);
}

ManagerResponse* ManagerConnection::syncSendAction(ManagerAction& action) {
	return (syncSendAction(action, defaultActionTimeout));
}

ManagerResponse* ManagerConnection::syncSendAction(ManagerAction& action, unsigned int timeout) {
	SyncResponseCallBack *srcb = new SyncResponseCallBack(&action, timeout);
	addResponsetListener(action.generateID(), srcb);
	sendAction(action);
	srcb->stoll();
	return (&(*srcb->response));
}

ManagerConnection::State ManagerConnection::getState() const {
	return (state);
}

void ManagerConnection::dispatchAsteriskVersion(AsteriskVersion* version) {
	LOG_DEBUG_STR("SET ASTERISK VERSTION "+ (*version).toString())
	asteriskVersion = version;
}

std::string ManagerConnection::extractActionID(const std::string& response) {
	//ActionID?:\\ (\\w+)
	boost::regex expr("actionid:\\s+(\\S+)", boost::regex_constants::icase);
	boost::smatch matches;

	try {
		if (boost::regex_search(response, matches, expr)) {
			if (matches.size() > 0) {
				std::string match(matches[1].first, matches[1].second);
				return (match);
			}
		}
	} catch (boost::regex_error& e) {
		LOG_WARN_STR( e.what());
	}
	return ("");
}

void ManagerConnection::dispatchResponse(const std::string& response) {
	LOG_TRACE_STR(str2Log(response));

	ManagerAction *action = NULL;
	std::string actionId = extractActionID(response);
	if (actionId != "") {
		ResponseCallBack *cb = ManagerResponsesHandler::listeners[actionId];
		if (cb != NULL) {
			action = cb->getAction();
		}
	}

	this->fireResponseCallback(this->responseBuilder.buildResponse(action, response));
}

void ManagerConnection::dispatchEvent(const std::string& event) {
	LOG_TRACE_STR(str2Log(event));
	this->fireEvent(this->eventBuilder.buildEvent(event));
}

bool ManagerConnection::login(const std::string& user, const std::string& pass) {
	if (!this->isConnected()) {
		LOG_ERROR_STR("Must connect before Login!!");
		return (false);
	} else if (this->isAuthenticated()) {
		LOG_ERROR_STR("Already Logged in!!");
		return (false);
	}

	LoginAction la(user, pass);
	ManagerResponse *mr = syncSendAction(la);
	bool rt(mr->getType() == ManagerResponse::Type_SUCCESS);
	if (rt)
		this->changeState(AUTHENTICATED);

	delete (mr);
	return (rt);
}

void ManagerConnection::logoff() {
	if (this->isAuthenticated()) {
		LogoffAction la;
		ManagerResponse *mr = syncSendAction(la);

		if (mr->getType() == ManagerResponse::Type_SUCCESS)
			this->changeState(CONNECTED);

		delete (mr);
	}
}

bool ManagerConnection::isConnected() const {
	return (this->state == CONNECTED);
}

bool ManagerConnection::isAuthenticated() const {
	return (this->state == AUTHENTICATED);
}

void ManagerConnection::changeState(State newState) {
	if (this->state == newState)
		return;

	LOG_DEBUG_DATA(status[state] << " => " << status[newState]);

	switch (newState) {
	case DISCONNECTED: {
		this->reader.stop();
		ManagerResponsesHandler::stop();
	}
		break;
	case CONNECTED: {
		if (state == DISCONNECTED) {
			this->reader.start(socket, this);
			ManagerResponsesHandler::start();
		}
	}
		break;
	case AUTHENTICATED: {

	}
		break;
	}
	this->state = newState;
}

}

