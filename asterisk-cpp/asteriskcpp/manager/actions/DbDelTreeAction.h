/*
 * DbDelTreeAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef DBDELTREEACTION_H_
#define DBDELTREEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Recursivly deletes entries in the Asterisk database for a given family and key.<p>
     * Available since Asterisk 1.6
     *
     * @author gmi
     * @since 1.0.0
     */

    class DbDelTreeAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty DbDelTreeAction.
         */
        DbDelTreeAction();

        /**
         * Creates a new DbDelTreeAction.
         *
         * @param family the family of the key
         * @param key the key of the entries to delete
         */
        DbDelTreeAction(const std::string& key);

        virtual ~DbDelTreeAction();


        /**
         * Returns the family of the key to delete.
         *
         * @return the family of the key to delete
         */
        const std::string& getFamily() const;

        /**
         * Sets the family of the key to delete.
         *
         * @param family the family of the key to delete
         */
        void setFamily(const std::string& family);

        /**
         * Returns the the key to delete.
         *
         * @return the key to delete
         */
        const std::string& getKey() const;


        void setKey(const std::string& key);
    };

} //NAMESPACE

#endif /*DBDELTREEACTION_H_*/
