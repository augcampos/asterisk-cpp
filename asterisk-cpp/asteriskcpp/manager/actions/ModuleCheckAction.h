/*
 * ModuleCheckAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MODULECHECKACTION_H_
#define MODULECHECKACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ModuleLoadAction checks if an Asterisk module is loaded and reports its version.<p>
     * The ModuleLoadAction returns a {@link org.asteriskjava.manager.response.ModuleCheckResponse} with
     * the version of the module if the module is loaded and a {@link org.asteriskjava.manager.response.ManagerError}
     * if the module is not loaded.<p>
     * Available since Asterisk 1.6
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     * 
     * @ExpectedResponse(ModuleCheckResponse)
     */


    class ModuleCheckAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new ModuleCheckAction.
         */
        ModuleCheckAction();

        /**
         * Creates a new ModuleCheckAction with the given parameters.
         *
         * @param module the name of the module (including or not including the ".so" extension).
         */
        ModuleCheckAction(const std::string& module);

        virtual ~ModuleCheckAction();

        ManagerResponse* expectedResponce(const std::string & response);

        /**
         * Returns the name of the module to check.
         *
         * @return the name of the module to check.
         */
        const std::string& getModule() const;


        void setModule(const std::string& module);
    };

} //NAMESPACE

#endif /*MODULECHECKACTION_H_*/
