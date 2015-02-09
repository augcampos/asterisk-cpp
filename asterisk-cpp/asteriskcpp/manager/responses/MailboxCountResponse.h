/* 
 * File:   MailboxCountResponse.h
 * Author: augcampos
 *
 * Created on July 11, 2013, 11:44 PM
 */

#ifndef MAILBOXCOUNTRESPONSE_H
#define	MAILBOXCOUNTRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * A MailboxCountResponse is sent in response to a MailboxCountAction and contains the number of old
     * and new messages in a mailbox.
     * 
     * @see org.asteriskjava.manager.action.MailboxCountAction
     * 
     * @author augcampos
     * @version $Id$
     */
    class MailboxCountResponse : public ManagerResponse {
    public:
        MailboxCountResponse(const std::string& responseStr);
        virtual ~MailboxCountResponse();

        /**
         * Returns the name of the mailbox.
         */
        const std::string& getMailbox() const;

        /**
         * Returns the number of new messages in the mailbox.
         */
        int getNewMessages() const;

        /**
         * Returns the number of old messages in the mailbox.
         */
        int getOldMessages() const;
    private:

    };

}
#endif	/* MAILBOXCOUNTRESPONSE_H */

