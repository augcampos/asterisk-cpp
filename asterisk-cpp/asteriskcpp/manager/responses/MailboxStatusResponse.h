/* 
 * File:   MailboxStatusResponse.h
 * Author: augcampos
 *
 * Created on July 12, 2013, 3:30 AM
 */

#ifndef MAILBOXSTATUSRESPONSE_H
#define	MAILBOXSTATUSRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * A MailboxStatusResponse is sent in response to a MailboxStatusAction and indicates if a set
     * of mailboxes contains waiting messages.
     * 
     * @see org.asteriskjava.manager.action.MailboxStatusAction
     * 
     * @author augcampos
     * @version $Id$
     */
    class MailboxStatusResponse : public ManagerResponse {
    public:
        MailboxStatusResponse(const std::string& responseStr);
        virtual ~MailboxStatusResponse();

        /**
         * Returns the names of the mailboxes, separated by ",".
         * @return the names of the mailbox.
         */
        const std::string& getMailbox() const;

        /**
         * Returns Boolean.TRUE if at least one of the given mailboxes contains new messages;
         * Boolean.FALSE otherwise.
         */
        bool getWaiting() const;
    private:

    };

}
#endif	/* MAILBOXSTATUSRESPONSE_H */

