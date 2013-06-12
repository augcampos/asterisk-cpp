/*
 * LoginAction.h
 *
 *  Created on: Jul 5, 2011
 *      Author: augcampos
 */

#ifndef LOGINACTION_H_
#define LOGINACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The LoginAction authenticates the connection.<p>
     * A successful login is the precondition for sending any other action except
     * for the ChallengeAction.<p>
     * An unsuccessful login results in an ManagerError being received from the
     * server with a message set to "Authentication failed" and the socket being
     * closed by Asterisk.
     *
     * @see org.asteriskjava.manager.action.ChallengeAction
     * @see org.asteriskjava.manager.response.ManagerError
     */
    class LoginAction : public AbstractManagerAction {
    public:
        /**
         * Creates a new empty LoginAction.
         */
        LoginAction();

        /**
         * Creates a new LoginAction that performs a cleartext login.<p>
         * You should not use cleartext login if you are concerned about security,
         * using {@see ChallengeAction} and login with a password hash instead.
         *
         * @param username the username as configured in Asterisk's
         *            <code>manager.conf</code>
         * @param secret the user's password as configured in Asterisk's
         *            <code>manager.conf</code>
         * @since 0.2
         */
        LoginAction(const std::string& username, const std::string& secret);

        /**
         * Creates a new LoginAction that performs a login via challenge/response.
         *
         * @param username the username as configured in Asterisk's
         *            <code>manager.conf</code>
         * @param authType the digest alogrithm, must match the digest algorithm
         *            that was used with the corresponding ChallengeAction.
         * @param key the hash of the user's password and the challenge
         * @since 0.2
         */
        LoginAction(const std::string& username, const std::string& authType, const std::string& key);

        /**
         * Creates a new LoginAction that performs a login via challenge/response.
         *
         * @param username the username as configured in Asterisk's
         *            <code>manager.conf</code>
         * @param authType the digest alogrithm, must match the digest algorithm
         *            that was used with the corresponding ChallengeAction.
         * @param key the hash of the user's password and the challenge
         * @param events the event mask. Set to "on" if all events should be send,
         *            "off" if not events should be sent or a combination of
         *            "system", "call" and "log" (separated by ',') to specify what
         *            kind of events should be sent.
         * @since 0.2
         */
        LoginAction(const std::string& username, const std::string& authType, const std::string& key, const std::string& events);

        virtual ~LoginAction();

        /**
         * Returns the username.
         */
        const std::string& getUsername() const;

        /**
         * Sets the username as configured in asterik's <code>manager.conf</code>.
         */
        void setUsername(const std::string& username);

        /**
         * Returns the secret.
         */
        const std::string& getSecret() const;

        /**
         * Sets the secret to use when using cleartext login.<p>
         * The secret contains the user's password as configured in Asterisk's
         * <code>manager.conf</code>.<p>
         * The secret and key properties are mutually exclusive.
         */
        void setSecret(const std::string& secret);

        /**
         * Returns the digest alogrithm when using challenge/response.
         */
        const std::string& getAuthType() const;

        /**
         * Sets the digest alogrithm when using challenge/response.<p>
         * The digest algorithm is used to create the key based on the challenge and
         * the user's password.<p>
         * Currently Asterisk supports only "MD5".
         */
        void setAuthType(const std::string& authType);

        /**
         * @return Returns the key.
         */
        const std::string& getKey() const;

        /**
         * @param key The key to set.
         */
        void setKey(const std::string& key);

        /**
         * Returns the event mask.
         *
         * @return the event mask.
         */
        const std::string& getEvents() const;

        /**
         * Sets the event mask.
         *
         * @param events the event mask. Set to "on" if all events should be send,
         *            "off" if not events should be sent or a combination of
         *            "system", "call" and "log" (separated by ',') to specify what
         *            kind of events should be sent.
         */
        void setEvents(const std::string& events);
    };

}

#endif /* LOGINACTION_H_ */
