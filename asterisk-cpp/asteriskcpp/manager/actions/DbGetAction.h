/*
 * DbGetAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef DBGETACTION_H_
#define DBGETACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Retrieves an entry in the Asterisk database for a given family and key.<p>
     * If an entry is found a DBGetResponseEvent is sent by Asterisk containing the
     * value, otherwise a ManagerError indicates that no entry matches.<p>
     * It is implemented in <code>main/db.c</code>.<p>
     * Available since Asterisk 1.2
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.event.DbGetResponseEvent
     * @since 0.2
     */

    class DbGetAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty DbGetAction.
         */
        DbGetAction();

        /**
         * Creates a new DbGetAction that retrieves the value of the database entry
         * with the given key in the given family.
         *
         * @param family the family of the key
         * @param key    the key of the entry to retrieve
         * @since 0.2
         */
        DbGetAction(const std::string& key);

        virtual ~DbGetAction();


        /**
         * Returns the family of the key.
         *
         * @return the family of the key.
         */
        const std::string& getFamily() const;

        /**
         * Sets the family of the key.
         *
         * @param family the family of the key.
         */
        void setFamily(const std::string& family);

        /**
         * Returns the the key of the entry to retrieve.
         *
         * @return the key of the entry to retrieve.
         */
        const std::string& getKey() const;


        void setKey(const std::string& key);
    };

} //NAMESPACE

#endif /*DBGETACTION_H_*/
