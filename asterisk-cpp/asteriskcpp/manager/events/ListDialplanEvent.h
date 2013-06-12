/*
 * ListDialplanEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef LISTDIALPLANEVENT_H_
#define LISTDIALPLANEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A ShowDialplanCompleteEvent is triggered for each priority in the dialplan
     * in response to a ShowDialplanAction.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/pbx.c</code>
     *
     * @see org.asteriskjava.manager.action.ShowDialplanAction
     * @see ShowDialplanCompleteEvent
     * @since 1.0.0
     */
    class ListDialplanEvent : public ResponseEvent {
    public:
        ListDialplanEvent(const std::string & values);
        virtual ~ListDialplanEvent();

        /**
         * Returns the context.
         *
         * @return the context.
         */
        const std::string& getContext() const;

        /**
         * Returns the extension or extension pattern.
         *
         * @return the extension or extension pattern.
         */
        const std::string& getExtension() const;

        /**
         * Returns the extension label.
         * @return the extension label or <code>null</code> if none.
         */
        const std::string& getExtensionLabel() const;

        /**
         * Returns the priority.
         *
         * @return the priority or <code>null</code> if this is a hint.
         */
        int getPriority() const;

        /**
         * Checks whether this is a hint.
         * @return <code>true</code> if this is a hint, <code>false</code> otherwise.
         */
        bool isHint() const;

        /**
         * Returns the application configured to handle this priority.
         *
         * @return the application configured to handle this priority.
         */
        const std::string& getApplication() const;

        /**
         * Returns the parameters of the application configured to handle this priority.
         *
         * @return the parameters of the application configured to handle this priority
         *         or <code>null</code> if none.
         */
        const std::string& getAppData() const;

        /**
         * Returns the registrar that registered this priority.<p>
         * Typical values are "features" for the parkedcalls context, "pbx_config" for priorities
         * defined in <code>extensions.conf</code> or "app_dial" for the
         * app_dial_gosub_virtual_context context.
         *
         * @return the registrar that registered this priority.
         */
        const std::string& getRegistrar() const;

    };

} /* namespace asterisk_cpp */
#endif /* LISTDIALPLANEVENT_H_ */
