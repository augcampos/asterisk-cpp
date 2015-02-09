/* 
 * File:   ModuleCheckResponse.h
 * Author: augcampos
 *
 * Created on July 16, 2013, 2:01 AM
 */

#ifndef MODULECHECKRESPONSE_H
#define	MODULECHECKRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Corresponds to a ModuleCheckAction and contains the version of the module.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.action.ModuleCheckAction
     * @since 1.0.0
     */
    class ModuleCheckResponse : public ManagerResponse {
    public:
        ModuleCheckResponse(const std::string& responseStr);
        virtual ~ModuleCheckResponse();

        /**
         * Returns the version (svn revision) of the module.
         *
         * @return the version (svn revision) of the module.
         */
        int getVersion() const;
    private:

    };

}
#endif	/* MODULECHECKRESPONSE_H */

