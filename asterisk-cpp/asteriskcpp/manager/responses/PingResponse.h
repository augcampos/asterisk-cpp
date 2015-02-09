/* 
 * File:   PingResponse.h
 * Author: augcampos
 *
 * Created on July 16, 2013, 2:28 AM
 */

#ifndef PINGRESPONSE_H
#define	PINGRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Corresponds to a PingAction and contains an additional (yet useless) ping property.
     *
     * @author srt
     * @see org.asteriskjava.manager.action.PingAction
     */
    class PingResponse : public ManagerResponse{
    public:
        PingResponse(const std::string& responseStr);
        virtual ~PingResponse();

        /**
         * Returns always "Pong".
         *
         * @return always "Pong".
         */
        const std::string& getPing() const;

        /**
         * Timestamp for the response.
         * @return Timestamp as a String, e.g 1353747825.795863
         * @since 1.0.0
         */
        const std::string& getTimestamp() const;
    private:

    };
}
#endif	/* PINGRESPONSE_H */

