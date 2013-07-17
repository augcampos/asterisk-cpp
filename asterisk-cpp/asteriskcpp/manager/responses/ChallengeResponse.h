/*
 * ChallengeResponse.h
 *
 *  Created on: Dec 31, 2011
 *      Author: augcampos
 */

#ifndef CHALLENGERESPONSE_H_
#define CHALLENGERESPONSE_H_

#include "ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Corresponds to a ChallengeAction and contains the challenge needed to log in using
     * challenge/response.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.action.ChallengeAction
     * @see org.asteriskjava.manager.action.LoginAction
     */
    class ChallengeResponse : public ManagerResponse {
    public:
        ChallengeResponse(const std::string& responseStr);
        virtual ~ChallengeResponse();

        /**
         * Returns the challenge to use when creating the key for log in.
         *
         * @return the challenge to use when creating the key for log in.
         * @see org.asteriskjava.manager.action.LoginAction#setKey(String)
         */
        std::string getChallenge() const;
    };

}
#endif /* CHALLENGERESPONSE_H_ */
