/*
 * ModuleLoadAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MODULELOADACTION_H_
#define MODULELOADACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ModuleLoadAction loads, unloads or reloads Asterisk modules.<p>
     * Available since Asterisk 1.6
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */

    class ModuleLoadAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new ModuleLoadAction.
         */
        ModuleLoadAction();

        /**
         * Creates a new ModuleLoadAction with the given parameters.
         *
         * @param module   the name of the module including the ".so" extension or subsystem
         *                 to perform the operation on or <code>null</code> combined with loadType "reload"
         *                 to reload all modules.
         * @param loadType the operation to perform ("load", "unload" or "reload").
         */
        ModuleLoadAction(const std::string& loadType);

        virtual ~ModuleLoadAction();


        /**
         * Returns the name of the module or subsystem to perform the operation on.
         *
         * @return the name of the module or subsystem to perform the operation on.
         */
        const std::string& getModule() const;

        /**
         * Sets the name of the module including the ".so" extension or subsystem ("cdr", "enum", "dnsmgr",
         * "extconfig", "manager", "rtp" or "http") to perform the operation on.
         *
         * @param module the name of the module including the ".so" extension or subsystem
         *               to perform the operation on or <code>null</code> combined with loadType "reload"
         *               to reload all modules.
         * @see #SUBSYSTEM_CDR
         * @see #SUBSYSTEM_ENUM
         * @see #SUBSYSTEM_DNSMGR
         * @see #SUBSYSTEM_EXTCONFIG
         * @see #SUBSYSTEM_MANAGER
         * @see #SUBSYSTEM_RTP
         * @see #SUBSYSTEM_HTTP
         */
        void setModule(const std::string& module);

        /**
         * Returns the operation to perform.
         *
         * @return the operation to perform.
         */
        const std::string& getLoadType() const;


        void setLoadType(const std::string& loadType);
    };

} //NAMESPACE

#endif /*MODULELOADACTION_H_*/
