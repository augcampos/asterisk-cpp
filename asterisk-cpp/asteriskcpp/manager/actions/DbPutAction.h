/*
 * DbPutAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef DBPUTACTION_H_
#define DBPUTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Adds or updates an entry in the Asterisk database for a given family, key,
     * and value.<p>
     * Available since Asterisk 1.2
     * 
     * @author augcampos
     * @version $Id$
     * @since 0.2
     */

    class DbPutAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty DbPutAction.
         */
        DbPutAction();

        /**
         * Creates a new DbPutAction that sets the value of the database entry with
         * the given key in the given family.
         * 
         * @param family the family of the key
         * @param key the key of the entry to set
         * @param val the value to set
         * @since 0.2
         */
        DbPutAction(const std::string& val);

        virtual ~DbPutAction();


        /**
         * Returns the family of the key to set.
         * 
         * @return the family of the key to set.
         */
        const std::string& getFamily() const;

        /**
         * Sets the family of the key to set.
         * 
         * @param family the family of the key to set.
         */
        void setFamily(const std::string& family);

        /**
         * Returns the the key to set.
         * 
         * @return the key to set.
         */
        const std::string& getKey() const;

        /**
         * Sets the key to set.
         * 
         * @param key the key to set.
         */
        void setKey(const std::string& key);

        /**
         * Returns the value to set.
         * 
         * @return the value to set.
         */
        const std::string& getVal() const;

        /**
         * Sets the value to set.
         * 
         * @param val the value to set.
         */
        void setVal(const std::string& val);


        const std::string& getValue() const;
    };

} //NAMESPACE

#endif /*DBPUTACTION_H_*/
