/*
 * DbDelAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef DBDELACTION_H_
#define DBDELACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Deletes an entry in the Asterisk database for a given family and key.<p>
     * Available since Asterisk 1.2 with BRIStuff patches and since Asterisk 1.6
     * 
     * @author gmi
     */

    class DbDelAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty DbDelAction.
         */
        DbDelAction();

        /**
         * Creates a new DbDelAction that deletes the value of the database
         * 
         * @param family the family of the key
         * @param key the key of the entry to delete
         */
        DbDelAction(const std::string& key);

        virtual ~DbDelAction();


        /**
         * Returns the family of the key to delete
         * 
         * @return the family of the key to delete
         */
        const std::string& getFamily() const;

        /**
         * Sets the family of the key to delete
         * 
         * @param family the family of the key to delete
         */
        void setFamily(const std::string& family);

        /**
         * Returns the the key to delete
         * 
         * @return the key to delete
         */
        const std::string& getKey() const;


        void setKey(const std::string& key);
    };

} //NAMESPACE

#endif /*DBDELACTION_H_*/
