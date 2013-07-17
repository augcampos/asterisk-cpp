/*
 * MailboxStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MAILBOXSTATUSACTION_H_
#define MAILBOXSTATUSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The MailboxStatusAction checks if a mailbox contains waiting messages.<p>
     * The MailboxStatusAction returns a MailboxStatusResponse.
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.response.MailboxStatusResponse
     * 
     * @ExpectedResponse(MailboxStatusResponse)
     */


    class MailboxStatusAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty MailboxStatusAction.
         */
        MailboxStatusAction();

        /**
         * Creates a new MailboxStatusAction that checks for waiting messages in the
         * given mailbox.
         *
         * @param mailbox the name of the mailbox to check.<p>
         *                This can either be only the number of the mailbox or a string
         *                of the form mailboxnumber@context. If no context is specified
         *                "default" is assumed.
         * @since 0.2
         */
        MailboxStatusAction(const std::string& mailbox);

        virtual ~MailboxStatusAction();


        ManagerResponse* expectedResponce(const std::string & response);

        /**
         * Returns the name of the mailbox to query.
         */
        const std::string& getMailbox() const;


        void setMailbox(const std::string& mailbox);
    };

} //NAMESPACE

#endif /*MAILBOXSTATUSACTION_H_*/
