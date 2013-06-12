/*
 * ReloadEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef RELOADEVENT_H_
#define RELOADEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A ReloadEvent is triggerd when the <code>reload</code> console command is executed or the
     * Asterisk server is started.<p>
     * It is implemented in <code>manager.c</code>
     *
     */
    class ReloadEvent : public ManagerEvent {
    public:
        ReloadEvent(const std::string & values);
        virtual ~ReloadEvent();

        /**
         * Returns the name of the module that has been reloaded.<p>
         * Available since Asterisk 1.6.
         *
         * @return the name of the module that has been reloaded.
         * @since 1.0.0
         */
        const std::string& getModule() const;

        /**
         * Returns the new status of the module.<p>
         * Available since Asterisk 1.6.
         *
         * @return "Enabled" if the module is endabled, "Disabled" if it is disabled.
         * @since 1.0.0
         * @see #STATUS_ENABLED
         * @see #STATUS_DISABLED
         * @see #isEnabled()
         * @see #isDisabled()
         */
        const std::string& getStatus() const;

        const std::string& getMessage() const;

        /**
         * Returns whether the module is now enabled.<p>
         * Available since Asterisk 1.6.
         *
         * @return <code>true</code> the module is now enabled, <code>false</code> if it is disabled.
         *         For Asterisk versions up to 1.4 that do not support the "Status" property <code>false</code> is returned.
         * @see #getStatus()
         * @since 1.0.0
         */
        bool isEnabled() const;

        /**
         * Returns whether the module is now disabled.<p>
         * Available since Asterisk 1.6.
         *
         * @return <code>true</code> the module is now disabled, <code>false</code> if it is enabled.
         *         For Asterisk versions up to 1.4 that do not support the "Status" property <code>false</code> is returned.
         * @see #getStatus()
         * @since 1.0.0
         */
        bool isDisabled() const;
    };

} /* namespace asteriskcpp */
#endif /* RELOADEVENT_H_ */
