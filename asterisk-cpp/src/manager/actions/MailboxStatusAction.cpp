/*
 * MailboxStatusAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/MailboxStatusAction.h"
#include "asteriskcpp/manager/responses/MailboxStatusResponse.h"

namespace asteriskcpp {

    MailboxStatusAction::MailboxStatusAction() {
    }
    
    MailboxStatusAction::~MailboxStatusAction() {
    }    

    MailboxStatusAction::MailboxStatusAction(const std::string& mailbox) {
        this->setMailbox(mailbox);
    }

    ManagerResponse* MailboxStatusAction::expectedResponce(const std::string & response) {
        return (new MailboxStatusResponse(response));
    }

    const std::string& MailboxStatusAction::getMailbox() const {
        return (getGetterValue(__FUNCTION__));
    }

    void MailboxStatusAction::setMailbox(const std::string& mailbox) {
        setSetterValue(__FUNCTION__, mailbox);
    }
} //NAMESPACE

