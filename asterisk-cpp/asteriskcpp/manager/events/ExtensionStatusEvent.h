/*
 * ExtensionStatusEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef EXTENSIONSTATUSEVENT_H_
#define EXTENSIONSTATUSEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    class ExtensionStatusEvent : public ManagerEvent {
    public:

        enum Status {
            NOT_INUSE = 0, INUSE = 1, BUSY = 1 << 1, UNAVAILABLE = 1 << 2, RINGING = 1 << 3
        };

        ExtensionStatusEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~ExtensionStatusEvent() {
        }

        /**
         * Returns the extension.
         */
        const std::string& getExten() const {
            return (getProperty("Exten"));
        }

        /**
         * Returns the context of the extension.
         */
        const std::string& getContext() const {
            return (getProperty("Context"));
        }

        /**
         * Returns the hint assigned to the extension. The hint is used to map a channel (e.g. "SIP/123") to an
         * extension (e.g. "123").<p>
         * Available since Asterisk 1.6.
         *
         * @return the hint (channel name) assigned to the extension.
         * @since 1.0.0
         */
        const std::string& getHint() const {
            return (getProperty("Hint"));
        }

        /**
         * Returns the state of the extension.<p>
         * Possible values are:
         * <ul>
         * <li>RINGING
         * <li>INUSE | RINGING
         * <li>INUSE
         * <li>NOT_INUSE
         * <li>BUSY
         * <li>UNAVAILABLE
         * </li>
         */
        int getStatus() const {
            return (convertFromString<int>(getProperty("Status")));
        }

        /**
         * Returns the Caller*ID in the form <code>"Some Name" &lt;1234&gt;</code>.
         * <p/>
         * This property is only available on BRIstuffed Asterisk servers.
         *
         * @return the Caller*ID.
         * @since 0.3
         */
        const std::string& getCallerId() const {
            return (getProperty("CallerId"));
        }

    };

}

#endif /* EXTENSIONSTATUSEVENT_H_ */
