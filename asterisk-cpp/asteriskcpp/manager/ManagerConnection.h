/*
 * Connection.h
 *
 *  Created on: Jul 4, 2011
 *      Author: augcampos
 */

#ifndef CONNECTION_H_
#define CONNECTION_H_

#include "asteriskcpp/net/IPAddress.h"
#include "asteriskcpp/net/TCPSocket.h"
#include "asteriskcpp/manager/Reader.h"
#include "asteriskcpp/manager/Dispatcher.h"
#include "asteriskcpp/manager/ManagerEventsHandler.h"
#include "asteriskcpp/manager/ManagerResponsesHandler.h"
#include "asteriskcpp/manager/actions/ManagerAction.h"
#include "asteriskcpp/manager/EventBuilder.h"
#include "asteriskcpp/manager/ResponseBuilder.h"

namespace asteriskcpp {

class ManagerConnection: public Dispatcher, private ManagerEventsHandler, private ManagerResponsesHandler {
public:
	enum State {
		DISCONNECTED = 0, CONNECTED = 1, AUTHENTICATED = 2
	};

	ManagerConnection();
	virtual ~ManagerConnection();

	bool connect(const std::string& server, unsigned int port=5038);
	void disconnect();
	bool login(const std::string& user, const std::string& pass);
	void logoff();

	bool isConnected() const;
	bool isAuthenticated() const;
	State getState() const;

	void sendAction(ManagerAction& action);
	void sendAction(ManagerAction& action, responseCallbackFunction_t rcbf);
	ManagerResponse* syncSendAction(ManagerAction& action);
	ManagerResponse* syncSendAction(ManagerAction& action, unsigned int timeout);

protected:
	void send(const std::string& data);

	void dispatchAsteriskVersion(AsteriskVersion* version);
	void dispatchResponse(const std::string& response);
	void dispatchEvent(const std::string& event);

private:
	State state;
	TCPSocket* socket;
	Reader reader;
	EventBuilder eventBuilder;
	ResponseBuilder responseBuilder;
	AsteriskVersion* asteriskVersion;
	unsigned int defaultActionTimeout;

	void changeState(State newState);
	std::string extractActionID(const std::string& response);

};

}

#endif /* CONNECTION_H_ */
