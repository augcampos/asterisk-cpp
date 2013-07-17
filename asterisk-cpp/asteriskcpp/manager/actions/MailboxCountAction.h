/*
 * MailboxCountAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MAILBOXCOUNTACTION_H_
#define MAILBOXCOUNTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The MailboxCountAction queries the number of unread and read messages in a
     * mailbox.<p>
     * The MailboxCountAction returns a MailboxStatusResponse.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.response.MailboxCountResponse
     * 
     * @ExpectedResponse(MailboxCountResponse)
     */
    

    class MailboxCountAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty MailboxCountAction.
         */
        MailboxCountAction();

        /**
         * Creates a new MailboxCountAction that queries the number of unread and
         * read messages in the given mailbox.
         *
         * @param mailbox the name of the mailbox to query.<p>
         *                This can either be only the number of the mailbox or a string
         *                of the form mailboxnumber@context. If no context is specified
         *                "default" is assumed.
         * @since 0.2
         */
        MailboxCountAction(const std::string& mailbox);

        virtual ~MailboxCountAction();

        virtual ManagerResponse* expectedResponce(const std::string& reponse);

        /**
         * Returns the name of the mailbox to query.
         */
        const std::string& getMailbox() const;


        void setMailbox(const std::string& mailbox);
    };

} //NAMESPACE

#endif /*MAILBOXCOUNTACTION_H_*/
