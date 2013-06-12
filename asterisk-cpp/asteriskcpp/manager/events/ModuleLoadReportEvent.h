/*
 * ModuleLoadReportEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef MODULELOADREPORTEVENT_H_
#define MODULELOADREPORTEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ModuleLoadReportEvent is triggerd when Asterisk has completed loading its modules.<p>
     * It is implemented in <code>main/loader.c</code>
     *
     * @since 1.0.0
     */
    class ModuleLoadReportEvent : public ManagerEvent {
    public:
        ModuleLoadReportEvent(const std::string & values);
        virtual ~ModuleLoadReportEvent();

        /**
         * Returns the load status. Currently this is always "Done".
         *
         * @return the load status.
         * @see #MODULE_LOAD_STATUS_DONE
         */
        const std::string& getModuleLoadStatus() const;

        /**
         * Returns whether loading the pre-load modules has been completed or all modules
         * have been loaded.
         *
         * @return "Preload" or "All"
         * @see #MODULE_SELECTION_PRELOAD
         * @see #MODULE_SELECTION_ALL
         */
        const std::string& getModuleSelection() const;

        bool isPreload() const;
        bool isAll() const;

        /**
         * Returns the number of modules that have been loaded.
         *
         * @return the number of modules that have been loaded.
         */
        int getModuleCount() const;
    };

} /* namespace asteriskcpp */
#endif /* MODULELOADREPORTEVENT_H_ */
