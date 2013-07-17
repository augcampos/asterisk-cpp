/* 
 * File:   CoreSettingsResponse.h
 * Author: augcampos
 *
 * Created on June 27, 2013, 2:38 AM
 */

#ifndef CORESETTINGSRESPONSE_H
#define	CORESETTINGSRESPONSE_H


#include "ManagerResponse.h"
namespace asteriskcpp {

    /**
     * Corresponds to a CoreSettingsAction and contains the current settings summary of the
     * Asterisk server.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.action.CoreSettingsAction
     * @since 1.0.0
     */
    class CoreSettingsResponse : public ManagerResponse {
    public:
        CoreSettingsResponse(const std::string& responseStr);
        virtual ~CoreSettingsResponse();


        /**
         * Returns the version of the Asterisk Manager Interface (AMI). For Asterisk 1.6 this is "1.1".
         *
         * @return the version of the Asterisk Manager Interface (AMI).
         */
        const std::string& getAmiVersion() const;

        /**
         * Returns the version of the Asterisk server. For example "1.6.0-beta9".
         *
         * @return the version of the Asterisk server.
         */
        const std::string& getAsteriskVersion() const;

        const std::string& getSystemName() const;

        int getCoreMaxCalls() const;

        double getCoreMaxLoadAvg() const;

        const std::string& getCoreRunUser() const;

        const std::string& getCoreRunGroup() const;

        int getCoreMaxFilehandles() const;

        /**
         * Checks whether the realtime subsystem is enabled.
         *
         * @return <code>true</code> if the realtime subsystem is enabled, <code>false</code> otherwise.
         */
        bool isCoreRealtimeEnabled() const;

        /**
         * Checks whether the CDR(call detail records) subsystem is enabled.
         *
         * @return <code > true < / code> if the CDR subsystem is enabled, <code > false < / code > otherwise.
         */
        bool isCoreCdrEnabled() const;

        /**
         * Checks whether the HTTP subsystem is enabled.
         *
         * @return <code>true</code> if the HTTP subsystem is enabled, <code>false</code> otherwise.
         */
        bool isCoreHttpEnabled() const;

    };
}
#endif	/* CORESETTINGSRESPONSE_H */

