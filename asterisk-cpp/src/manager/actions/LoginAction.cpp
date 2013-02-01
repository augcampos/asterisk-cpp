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

	LoginAction::LoginAction(const std::string & username, const std::string & authType, const std::string & key, const std::string & events)  {
		this->setUsername(username);
		this->setUsername(username);
		this->setAuthType(authType);
		this->setKey(key);
		this->setEvents(events);
	}

	LoginAction::~LoginAction() {
	}

	const std::string& LoginAction::getUsername() const {
		return (getGetterValue(__FUNCTION__));
	}
	void LoginAction::setUsername(const std::string& username) {
		setSetterValue(__FUNCTION__, username);
	}

	const std::string& LoginAction::getSecret() const {
		return (getGetterValue(__FUNCTION__));
	}
	void LoginAction::setSecret(const std::string& secret) {
		setSetterValue(__FUNCTION__, secret);
	}

	const std::string& LoginAction::getAuthType() const {
		return (getGetterValue(__FUNCTION__));
	}
	void LoginAction::setAuthType(const std::string& authType) {
		setSetterValue(__FUNCTION__, authType);
	}

	const std::string& LoginAction::getKey() const {
		return (getGetterValue(__FUNCTION__));
	}
	void LoginAction::setKey(const std::string& key) {
		setSetterValue(__FUNCTION__, key);
	}

	const std::string& LoginAction::getEvents() const {
		return (getGetterValue(__FUNCTION__));
	}

	void LoginAction::setEvents(const std::string& events) {
		setSetterValue(__FUNCTION__, events);
	}

}
