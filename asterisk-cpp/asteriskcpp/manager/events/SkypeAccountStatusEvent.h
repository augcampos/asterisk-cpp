/*
 * SkypeAccountStatusEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef SKYPEACCOUNTSTATUSEVENT_H_
#define SKYPEACCOUNTSTATUSEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A SkypeAccountStatusEvent is sent when a Skype for Asterisk user logs in or out
     * of the Skype community.<p>
     * It is implemented in <code>chan_skye.c</code>.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     */
    class SkypeAccountStatusEvent : public ManagerEvent {
    public:
        SkypeAccountStatusEvent(const std::string & values);
        virtual ~SkypeAccountStatusEvent();

        /**
         * Returns the name of the Skype user.
         *
         * @return the name of the Skype user.
         */
        const std::string& getUsername() const;

        /**
         * Returns the Skype user status.
         *
         * @return the Skype user status.
         */
        const std::string& getStatus() const;
    };

} /* namespace asteriskcpp */
#endif /* SKYPEACCOUNTSTATUSEVENT_H_ */
