/*
 * DbGetResponseEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef DBGETRESPONSEEVENT_H_
#define DBGETRESPONSEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A DBGetResponseEvent is sent in response to a DBGetAction and contains the
     * entry that was queried.<p>
     * Available since Asterisk 1.2
     *
     * @see org.asteriskjava.manager.action.DbGetAction
     * @since 0.2
     */
    class DbGetResponseEvent : public ResponseEvent {
    public:

        DbGetResponseEvent(const std::string & values) :
        ResponseEvent(values) {
        }

        virtual ~DbGetResponseEvent() {
        }

        /**
         * Returns the family of the database entry that was queried.
         *
         * @return the family of the database entry that was queried.
         */
        const std::string& getFamily() const {
            return (getProperty("Family"));
        }

        /**
         * Returns the key of the database entry that was queried.
         *
         * @return the key of the database entry that was queried.
         */
        const std::string& getKey() const {
            return (getProperty("Key"));
        }

        /**
         * Returns the value of the database entry that was queried.
         *
         * @return the value of the database entry that was queried.
         */
        const std::string& getVal() const {
            return (getProperty("Val"));
        }
    };

}

#endif /* DBGETRESPONSEEVENT_H_ */
