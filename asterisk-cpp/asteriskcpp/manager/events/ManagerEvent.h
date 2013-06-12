/*
 * ManagerEvent.h
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#ifndef MANAGEREVENT_H_
#define MANAGEREVENT_H_

#include "../../structs/PropertyMap.h"
#include <ctime>

namespace asteriskcpp {

    /**
     * Abstract base class for all Events that can be received from the Asterisk
     * server.
     * <p/>
     * Events contain data pertaining to an event generated from within the Asterisk
     * core or an extension module.
     * <p/>
     * There is one concrete subclass of ManagerEvent per each supported Asterisk
     * Event.
     */
    class ManagerEvent : public PropertyMap {
    public:
        ManagerEvent();
        ManagerEvent(const std::string& values);
        virtual ~ManagerEvent();

        virtual const std::string getEventName() const;

        unsigned long getInternalNumber() const;

        /**
         * Returns the point in time this event was received from the Asterisk
         * server.
         * <p/>
         * Pseudo events that are not directly received from the asterisk server
         * (for example ConnectEvent and DisconnectEvent) may return
         * <code>null</code>.
         */
        std::time_t getDateReceived() const;

        /**
         * Returns the AMI authorization class of this event.
         * <p/>
         * This is one or more of system, call, log, verbose, command, agent or
         * user. Multiple privileges are separated by comma.
         * <p/>
         * Note: This property is not available from Asterisk 1.0 servers.
         *
         * @since 0.2
         */
        const std::string& getPrivilege() const;

        /**
         * Returns the timestamp for this event.
         * <p/>
         * The timestamp property is available in Asterisk since 1.4 if enabled in
         * <code>manager.conf</code> by setting <code>timestampevents = yes</code>.
         * <p/>
         * In contains the time the event was generated in seconds since the epoch.
         * <p/>
         * Example: 1159310429.569108
         *
         * @return the timestamp for this event.
         * @since 0.3
         */
        double getTimestamp() const;

        /**
         * Returns the name of the Asterisk server from which this event has been received.
         * <p/>
         * This property is only available when using to AstManProxy.
         *
         * @return the name of the Asterisk server from which this event has been received
         *         or <code>null</code> when directly connected to an Asterisk server
         *         instead of AstManProxy.
         * @since 1.0.0
         */
        const std::string& getServer() const;

        /**
         * Returns the name of the file in Asterisk's source code that triggered this event. For example
         * <code>pbx.c</code>.<p>
         * This property is only available if debugging for the Manager API has been turned on in Asterisk. This can be
         * done by calling <code>manager debug on</code> on Asterisk's command line interface or by adding
         * <code>debug=on</code> to Asterisk's <code>manager.conf</code>. This feature is availble in Asterisk since 1.6.0.
         *
         * @return the name of the file in that triggered this event or <code>null</code> if debgging is turned off.
         * @see #getFunc()
         * @see #getLine()
         * @since 1.0.0
         */
        const std::string& getFile() const;

        /**
         * Returns the line number in Asterisk's source code where this event was triggered.<p>
         * This property is only available if debugging for the Manager API has been turned on in Asterisk. This can be
         * done by calling <code>manager debug on</code> on Asterisk's command line interface or by adding
         * <code>debug=on</code> to Asterisk's <code>manager.conf</code>. This feature is availble in Asterisk since 1.6.0.
         *
         * @return the line number where this event was triggered or <code>null</code> if debgging is turned off.
         * @see #getFile()
         * @see #getFunc()
         * @since 1.0.0
         */
        int getLine() const;

        /**
         * Returns the name of the C function in Asterisk's source code that triggered this event. For example
         * <code>pbx_builtin_setvar_helper</code><p>
         * This property is only available if debugging for the Manager API has been turned on in Asterisk. This can be
         * done by calling <code>manager debug on</code> on Asterisk's command line interface or by adding
         * <code>debug=on</code> to Asterisk's <code>manager.conf</code>. This feature is availble in Asterisk since 1.6.0.
         *
         * @return the name of the C function that triggered this event or <code>null</code> if debgging is turned off.
         * @see #getFile()
         * @see #getLine()
         * @since 1.0.0
         */
        const std::string& getFunc() const;

        /**
         * Returns the sequence numbers of this event. Sequence numbers are only incremented while debugging is enabled.<p>
         * This property is only available if debugging for the Manager API has been turned on in Asterisk. This can be
         * done by calling <code>manager debug on</code> on Asterisk's command line interface or by adding
         * <code>debug=on</code> to Asterisk's <code>manager.conf</code>. This feature is availble in Asterisk since 1.6.0.
         *
         * @return the sequence number of this event or <code>null</code> if debgging is turned off.
         * @see #getFile()
         * @see #getLine()
         * @since 1.0.0
         */
        unsigned long getSequenceNumber() const;

        const std::string& getUniqueID() const;
    protected:
        time_t received;
        unsigned long internalNumber;
    };

}

#endif /* MANAGEREVENT_H_ */
