/*
 * LoginAction.cpp
 *
 *  Created on: Jul 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/LoginAction.h"

namespace asteriskcpp {

LoginAction::LoginAction() {
}

LoginAction::LoginAction(const std::string & username, const std::string & secret) {
	this->setUsername(username);
	this->setSecret(secret);
}

LoginAction::LoginAction(const std::string & username, const std::string & authType, const std::string & key) {
	this->setUsername(username);
	this->setAuthType(authType);
	this->setKey(key);
}

LoginAction::LoginAction(const std::string & username, const std::string & authType, const std::string & key, const std::string & events) {
	this->setUsername(username);
	this->setUsername(username);
	this->setAuthType(authType);
	this->setKey(key);
	this->setEvents(events);
}

LoginAction::~LoginAction() {
}

std::string LoginAction::getAction() {
	return ("Login");
}

std::string LoginAction::getUsername() const {
	return (getProperty("Username"));
}
void LoginAction::setUsername(const std::string& username) {
	setProperty("Username", username);
}

std::string LoginAction::getSecret() const {
	return (getProperty("Secret"));
}
void LoginAction::setSecret(const std::string& secret) {
	setProperty("Secret", secret);
}

std::string LoginAction::getAuthType() const {
	return (getProperty("AuthType"));
}
void LoginAction::setAuthType(const std::string& authType) {
	setProperty("AuthType", authType);
}

std::string LoginAction::getKey() const {
	return (getProperty("Key"));
}
void LoginAction::setKey(const std::string& key) {
	setProperty("Key", key);
}

std::string LoginAction::getEvents() const {
	return (getProperty("Events"));
}

void LoginAction::setEvents(const std::string& events) {
	setProperty("Events", events);
}

}
