/* 
 * File:   GetVarResponse.h
 * Author: augcampos
 *
 * Created on July 11, 2013, 3:34 AM
 */

#ifndef GETVARRESPONSE_H
#define	GETVARRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Corresponds to a GetVarAction and contains the value of the requested variable.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.action.GetVarAction
     * @since 1.0.0
     */
    class GetVarResponse : public ManagerResponse {
    public:
        GetVarResponse(const std::string& responseStr);
        virtual ~GetVarResponse();

        /**
         * Returns the name of the requested variable.
         *
         * @return the name of the requested variable.
         */
        const std::string& getVariable() const;

        /**
         * Returns the value of the requested variable.
         *
         * @return the value of the requested variable.
         */
        const std::string& getValue() const;
    private:

    };
}
#endif	/* GETVARRESPONSE_H */

