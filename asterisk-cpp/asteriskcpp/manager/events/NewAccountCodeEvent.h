/*
 * NewAccountCodeEvent.h
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#ifndef NEWACCOUNTCODEEVENT_H_
#define NEWACCOUNTCODEEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A NewAccountCodeEvent indicates that the account code used for CDR has
     * changed.<p>
     * Available since Asterisk 1.6.<p>
     * It is implemented in <code>main/cdr.c</code>
     * @since 1.0.0
     */
    class NewAccountCodeEvent : public asteriskcpp::ManagerEvent {
    public:
        NewAccountCodeEvent(const std::string & values);
        virtual ~NewAccountCodeEvent();

        /**
         * Returns the name of the channel.
         * @return the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the unique id of the channel.
         * @return the unique id of the channel.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the new account code.
         * @return the new account code.
         */
        const std::string& getAccountCode() const;

        /**
         * Returns the old account code.
         * @return the old account code.
         */
        const std::string& getOldAccountCode() const;
    };

} /* namespace asteriskcpp */
#endif /* NEWACCOUNTCODEEVENT_H_ */
