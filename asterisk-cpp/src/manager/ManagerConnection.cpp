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
#include "asteriskcpp/utils/MD5.h"
#include "asteriskcpp/manager/actions/ChallengeAction.h"
#include "asteriskcpp/manager/actions/LoginAction.h"
#include "asteriskcpp/manager/actions/LogoffAction.h"
#include "asteriskcpp/manager/responses/ChallengeResponse.h"

#define DEFAULT_TIMEOUT  2000
#define DEFAULT_HOSTNAME "localhost"
#define DEFAULT_PORT  5038

static const char* status[] = { "Disconnected", "Connected", "Authenticated" };

namespace asteriskcpp {

ManagerConnection::ManagerConnection() :
		state(DISCONNECTED), hostname(DEFAULT_HOSTNAME), port(DEFAULT_PORT), ssl(false), defaultResponseTimeout(DEFAULT_TIMEOUT) {
}

ManagerConnection::~ManagerConnection() {
	disconnect();
}

bool ManagerConnection::connect(const std::string& server, unsigned int port) {
	this->setHostname(server);
	if (port > 0) {
		this->setPort(port);
	}
	return this->connect();
}

bool ManagerConnection::connect() {
	try {
		LOG_INFO_STR((boost::format("Connecting to %1%:%2% ") % this->getHostname() % this->getPort()).str());
		IPAddress ip(this->getHostname(), this->getPort());
		this->socket = new TCPSocket(ip);
		LOG_INFO_STR("Success");
		this->setState(CONNECTED);
		return (true);
	} catch (Exception& E) {
		LOG_ERROR_STR((boost::format("Fail %1%:%2% - %3%") % this->getHostname() % this->getPort() % E.getMessage()).str());
	}
	disconnect();
	return (false);
}

void ManagerConnection::disconnect() {
	this->setState(DISCONNECTED);
	if (this->socket != NULL) {
		delete (socket);
	}
}

void ManagerConnection::send(const std::string& data) {
	LOG_DEBUG_STR(str2Log(data));
	this->socket->writeData(data.c_str(), (unsigned int) (data.length()));
	LOG_TRACE_STR("OUT");
}

void ManagerConnection::sendAction(ManagerAction & action) {
	sendAction(action, NULL);
}

void ManagerConnection::sendAction(ManagerAction & action, responseCallbackFunction_t rcbf) {
	ASyncResponseCallBack *asrcb = new ASyncResponseCallBack(&action, defaultResponseTimeout, rcbf);
	addResponsetListener(action.generateID(), asrcb);
	send(action.toString());
}

ManagerResponse* ManagerConnection::syncSendAction(ManagerAction & action) {
	return (syncSendAction(action, defaultResponseTimeout));
}

ManagerResponse* ManagerConnection::syncSendAction(ManagerAction & action, unsigned int timeout) {
	LOG_TRACE_STR("IN");
	SyncResponseCallBack srcb(&action, timeout);
	addResponsetListener(action.generateID(), &srcb);
	send(action.toString());
	srcb.stoll();
	return (srcb.response);
}

ManagerConnection::State ManagerConnection::getState() const {
	return (state);
}

void ManagerConnection::dispatchAsteriskVersion(AsteriskVersion *version) {
	LOG_DEBUG_STR("SET ASTERISK VERSTION "+ (*version).toString())
	asteriskVersion = version;
}

unsigned int ManagerConnection::getDefaultResponseTimeout() const {
	return defaultResponseTimeout;
}

std::string ManagerConnection::getHostname() const {
	return hostname;
}

std::string ManagerConnection::getPassword() const {
	return password;
}

unsigned int ManagerConnection::getPort() const {
	return port;
}

std::string ManagerConnection::getUsername() const {
	return username;
}

bool ManagerConnection::isSsl() const {
	return ssl;
}

void ManagerConnection::setDefaultResponseTimeout(unsigned int defaultResponseTimeout) {
	this->defaultResponseTimeout = defaultResponseTimeout;
}

void ManagerConnection::setHostname(std::string hostname) {
	this->hostname = hostname;
}

void ManagerConnection::setPassword(std::string password) {
	this->password = password;
}

void ManagerConnection::setPort(unsigned int port) {
	this->port = port;
}

void ManagerConnection::setSsl(bool ssl) {
	this->ssl = ssl;
}

void ManagerConnection::setState(State newState) {
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
		} else {
			this->reader.stop();
			ManagerResponsesHandler::stop();
		}
	}
		break;
	case AUTHENTICATED: {

	}
		break;
	}
	this->state = newState;
}

void ManagerConnection::setUsername(std::string username) {
	this->username = username;
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
	if (!actionId.empty()) {
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

bool ManagerConnection::login() {
	return this->login(NULL);
}

bool ManagerConnection::login(const std::string& eventMask) {
	if (!this->isConnected()) {
		LOG_ERROR_STR("Must connect before Login!!");
		return (false);
	} else if (this->isAuthenticated()) {
		LOG_ERROR_STR("Already Logged in!!");
		return (false);
	}

	if (this->getUsername().empty() || this->getPassword().empty()) {
		LOG_ERROR_STR("Must Provide UserName as Password!!");
		return (false);
	}

	LoginAction* la = NULL;
	ChallengeAction challengeAction("MD5");
	ChallengeResponse* carp = (ChallengeResponse*) this->syncSendAction(challengeAction);
	if (carp->isTypeSuccess()) {
		std::string challenge(carp->getChallenge());
		if (!challenge.empty()) {
			MD5* md = new MD5();
			md->update(challenge.c_str(), challenge.length());
			md->update(this->getPassword().c_str(), this->getPassword().length());
			md->finalize();
			la = new LoginAction(this->getUsername(), "MD5", md->hexdigest());
			delete (md);
		}
	}
	delete (carp);

	if (!la) {
		la = new LoginAction(this->getUsername(), this->getPassword());
	}

	if (!eventMask.empty()) {
		la->setEvents(eventMask);
	}

	ManagerResponse *mr = this->syncSendAction(*la);
	bool rt(mr->isTypeSuccess());
	if (rt) {
		this->setState(AUTHENTICATED);
	}
	delete (la);
	delete (mr);
	return (rt);
}

bool ManagerConnection::login(const std::string& user, const std::string& pass, const std::string& eventMask) {
	this->setUsername(user);
	this->setPassword(pass);
	return this->login(eventMask);
}

void ManagerConnection::logoff() {
	if (this->isAuthenticated()) {
		LogoffAction la;
		ManagerResponse *mr = syncSendAction(la);
		if (mr->getType() == ManagerResponse::Type_SUCCESS) {
			this->setState(CONNECTED);
		}

		delete (mr);
	}
}

bool ManagerConnection::isConnected() const {
	return (this->state == CONNECTED);
}

bool ManagerConnection::isAuthenticated() const {
	return (this->state == AUTHENTICATED);
}

}

