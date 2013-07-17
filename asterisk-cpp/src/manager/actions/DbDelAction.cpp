/*
 * DbDelAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/DbDelAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty DbDelAction.
     */
    DbDelAction::DbDelAction() {
    }

    /**
     * Creates a new DbDelAction that deletes the value of the database
     * 
     * @param family the family of the key
     * @param key the key of the entry to delete
     */
    DbDelAction::DbDelAction(const std::string& key) {
        this->setKey(key);
    }

    /**
     * Returns the family of the key to delete
     * 
     * @return the family of the key to delete
     */
    const std::string& DbDelAction::getFamily() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the family of the key to delete
     * 
     * @param family the family of the key to delete
     */
    void DbDelAction::setFamily(const std::string& family) {
        setSetterValue(__FUNCTION__, family);
    }

    /**
     * Returns the the key to delete
     * 
     * @return the key to delete
     */
    const std::string& DbDelAction::getKey() const {
        return (getGetterValue(__FUNCTION__));
    }

    void DbDelAction::setKey(const std::string& key) {
        setSetterValue(__FUNCTION__, key);
    }
} //NAMESPACE

