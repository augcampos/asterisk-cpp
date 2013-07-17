/*
 * MailboxCountAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/MailboxCountAction.h"
#include "asteriskcpp/manager/responses/MailboxCountResponse.h"

namespace asteriskcpp {

    MailboxCountAction::MailboxCountAction() {
    }

    MailboxCountAction::MailboxCountAction(const std::string& mailbox) {
        this->setMailbox(mailbox);
    }

    ManagerResponse *MailboxCountAction::expectedResponce(const std::string & response) {
        return (new MailboxCountResponse(response));
    }

    const std::string& MailboxCountAction::getMailbox() const {
        return (getGetterValue(__FUNCTION__));
    }

    void MailboxCountAction::setMailbox(const std::string& mailbox) {
        setSetterValue(__FUNCTION__, mailbox);
    }
} //NAMESPACE

