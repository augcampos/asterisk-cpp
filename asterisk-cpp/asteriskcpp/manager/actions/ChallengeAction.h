/*
 * ChallengeAction.h
 *
 *  Created on: Aug 27, 2011
 *      Author: augcampos
 */

#ifndef CHALLENGEACTION_H_
#define CHALLENGEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ChallengeAction requests a challenge from the server to use when logging
     * in using challenge/response. Sending this action to the asterisk server
     * results in a ChallengeResponse being received from the server.
     *
     * @see org.asteriskjava.manager.action.LoginAction
     * @see org.asteriskjava.manager.response.ChallengeResponse
     */

    class ChallengeAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new ChallengeAction that requests a new login challenge for use
         * with the given digest algorithm.
         *
         * @param authType the digest alogrithm to use.
         * @since 0.2
         */
        ChallengeAction(const std::string& authType);

        virtual ~ChallengeAction();

        /**
         * Returns the digest alogrithm to use.
         */
        const std::string& getAuthType() const;

        /**
         * Sets the digest alogrithm to use. Currently asterisk only supports "MD5".
         */
        void setAuthType(const std::string& authType);
    };

} /* namespace asterisk_cpp */
#endif /* CHALLENGEACTION_H_ */
