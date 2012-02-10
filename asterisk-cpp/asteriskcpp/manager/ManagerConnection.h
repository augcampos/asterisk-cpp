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

		bool connect();
		bool connect(const std::string& server, unsigned int port = 0);
		void disconnect();
		bool login();
		bool login(const std::string& eventMask);
		bool login(const std::string& user, const std::string& pass, const std::string& eventMask = "");
		void logoff();

		bool isConnected() const;
		bool isAuthenticated() const;

		void sendAction(ManagerAction& action);
		void sendAction(ManagerAction& action, responseCallbackFunction_t rcbf);
		ManagerResponse* syncSendAction(ManagerAction& action);
		ManagerResponse* syncSendAction(ManagerAction& action, unsigned int timeout);

		State getState() const;
		unsigned int getDefaultResponseTimeout() const;
		std::string getHostname() const;
		std::string getPassword() const;
		unsigned int getPort() const;
		std::string getUsername() const;
		bool isSsl() const;
		void setDefaultResponseTimeout(unsigned int defaultResponseTimeout);
		void setHostname(std::string hostname);
		void setPassword(std::string password);
		void setPort(unsigned int port);
		void setSsl(bool ssl);
		void setUsername(std::string username);

	protected:
		void send(const std::string& data);

		void dispatchAsteriskVersion(AsteriskVersion* version);
		void dispatchResponse(const std::string& response);
		void dispatchEvent(const std::string& event);

	private:

		TCPSocket* socket;
		Reader reader;
		EventBuilder eventBuilder;
		ResponseBuilder responseBuilder;
		AsteriskVersion* asteriskVersion;

		State state;
		/* Config attributes */
		/**
		 * Hostname of the Asterisk server to connect to.
		 */
		std::string hostname;

		/**
		 * TCP port to connect to.
		 */
		unsigned int port;

		/**
		 * <code>true</code> to use SSL for the connection, <code>false</code>
		 * for a plain text connection.
		 */
		bool ssl;

		/**
		 * The username to use for login as defined in Asterisk's
		 * <code>manager.conf</code>.
		 */
		std::string username;

		/**
		 * The password to use for login as defined in Asterisk's
		 * <code>manager.conf</code>.
		 */
		std::string password;

		/**
		 * The default timeout to wait for a ManagerResponse after sending a
		 * ManagerAction.
		 */
		unsigned int defaultResponseTimeout;

		void setState(State state);
		std::string extractActionID(const std::string& response);

	};

}

#endif /* CONNECTION_H_ */
