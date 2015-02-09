/* 
 * File:   ExtensionStateResponse.h
 * Author: augcampos
 *
 * Created on July 11, 2013, 2:54 AM
 */

#ifndef EXTENSIONSTATERESPONSE_H
#define	EXTENSIONSTATERESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Response to an {@link org.asteriskjava.manager.action.ExtensionStateAction}.  
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.action.ExtensionStateAction
     */
    class ExtensionStateResponse : public ManagerResponse {
    public:
        ExtensionStateResponse(const std::string& responseStr);
        virtual ~ExtensionStateResponse();


        const std::string& getExten() const;
        const std::string& getContext() const;
        const int getHint() const;
        const int getStatus() const;

    private:

    };
}
#endif	/* EXTENSIONSTATERESPONSE_H */

