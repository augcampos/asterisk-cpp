/* 
 * File:   MailboxCountResponse.cpp
 * Author: augcampos
 * 
 * Created on July 11, 2013, 11:44 PM
 */

#include "asteriskcpp/manager/responses/MailboxCountResponse.h"

namespace asteriskcpp {

    MailboxCountResponse::MailboxCountResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    MailboxCountResponse::~MailboxCountResponse() {
    }

    const std::string& MailboxCountResponse::getMailbox() const {
        return (getGetterValue(__FUNCTION__));
    }

    int MailboxCountResponse::getNewMessages() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int MailboxCountResponse::getOldMessages() const {
        return (getGetterValue<int>(__FUNCTION__));
    }
}