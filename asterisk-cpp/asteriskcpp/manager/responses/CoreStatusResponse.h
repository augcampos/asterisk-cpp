/* 
 * File:   CoreStatusResponse.h
 * Author: augcampos
 *
 * Created on June 27, 2013, 4:04 AM
 */

#ifndef CORESTATUSRESPONSE_H
#define	CORESTATUSRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Corresponds to a CoreStatusAction and contains the current status summary of the
     * Asterisk server.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.action.CoreStatusAction
     * @since 1.0.0
     */
    class CoreStatusResponse : public ManagerResponse {
    public:
        CoreStatusResponse(const std::string& responseStr);
        virtual ~CoreStatusResponse();

        /**
         * Returns the time the server (core module) was last reloaded. The format is %H:%M:%S.
         *
         * @return the time the server (core module) was last reloaded.
         */
        const std::string& getCoreReloadTime() const;

        /**
         * Returns the date the server (core module) was last reloaded. The format is Y-%m-%d.<p>
         * Available since Asterisk 1.6.3
         *
         * @return the date the server (core module) was last reloaded.
         */
        const std::string& getCoreReloadDate() const;

        /**
         * Returns the and time the server (core module) was last reloaded.<p>
         * If either the date or time property is <code>null</code> (e.g. on Asterisk prior to 1.6.3) this method
         * returns <code>null</code>.
         *
         * @return the and time the server (core module) was last reloaded or <code>null</code> if not available.
         * @see #getCoreReloadDate()
         * @see #getCoreReloadTime()
         * @see #getCoreReloadDateTimeAsDate(java.util.TimeZone)
         */
        const std::string& getCoreReloadDateTimeAsDate() const;

        /**
         * Returns the date the server (core module) was last reloaded.<p>
         * If either the date or time property is <code>null</code> (e.g. on Asterisk prior to 1.6.3) this method
         * returns <code>null</code>.
         *
         * @param tz the time zone of the Asterisk server, <code>null</code> to use the default time zone.
         * @return the date the server (core module) was last reloaded or <code>null</code> if not available.
         * @see #getCoreReloadDate()
         * @see #getCoreReloadTime()
         */
        long getCoreReloadDateTimeAsDate(long timezone) const;

        /**
         * Returns the date the server was started. The format is Y-%m-%d.<p>
         * Available since Asterisk 1.6.3
         *
         * @return the date the server was started.
         */
        const std::string& getCoreStartupDate() const;

        /**
         * Returns the time the server was started. The format is %H:%M:%S.
         *
         * @return the time the server was started.
         */
        const std::string& getCoreStartupTime() const;

        /**
         * Returns the date and time the server was started.<p>
         * If either the date or time property is <code>null</code> (e.g. on Asterisk prior to 1.6.3) this method
         * returns <code>null</code>.
         *
         * @return the date the server was started or <code>null</code> if not available.
         * @see #getCoreStartupDate()
         * @see #getCoreStartupTime()
         * @see #getCoreStartupDateTimeAsDate(java.util.TimeZone)
         */
        long getCoreStartupDateTimeAsDate() const;

        /**
         * Returns the date and time the server was started.<p>
         * If either the date or time property is <code>null</code> (e.g. on Asterisk prior to 1.6.3) this method
         * returns <code>null</code>.
         *
         * @param tz the time zone of the Asterisk server, <code>null</code> to use the default time zone.
         * @return the date the server was started or <code>null</code> if not available.
         * @see #getCoreStartupDate()
         * @see #getCoreStartupTime()
         */
        long getCoreStartupDateTimeAsDate(long timezone) const;

        /**
         * Returns the number of currently active channels on the server.
         *
         * @return the number of currently active channels on the server.
         */
        const int getCoreCurrentCalls() const;

    };

}
#endif	/* CORESTATUSRESPONSE_H */

