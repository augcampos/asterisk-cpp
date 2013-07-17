/* 
 * File:   MailboxStatusResponse.cpp
 * Author: augcampos
 * 
 * Created on July 12, 2013, 3:30 AM
 */

#include "asteriskcpp/manager/responses/MailboxStatusResponse.h"

namespace asteriskcpp {

    MailboxStatusResponse::MailboxStatusResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    MailboxStatusResponse::~MailboxStatusResponse() {
    }

    const std::string& MailboxStatusResponse::getMailbox() const {
        return (getGetterValue(__FUNCTION__));
    }

    bool MailboxStatusResponse::getWaiting() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }
}