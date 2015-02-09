/*
 * DbGetAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/DbGetAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty DbGetAction.
     */
    DbGetAction::DbGetAction() {
    }
    
    DbGetAction::~DbGetAction() {
    }    

    /**
     * Creates a new DbGetAction that retrieves the value of the database entry
     * with the given key in the given family.
     *
     * @param family the family of the key
     * @param key    the key of the entry to retrieve
     * @since 0.2
     */
    DbGetAction::DbGetAction(const std::string& key) {
        this->setKey(key);
    }

    /**
     * Returns the family of the key.
     *
     * @return the family of the key.
     */
    const std::string& DbGetAction::getFamily() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the family of the key.
     *
     * @param family the family of the key.
     */
    void DbGetAction::setFamily(const std::string& family) {
        setSetterValue(__FUNCTION__, family);
    }

    /**
     * Returns the the key of the entry to retrieve.
     *
     * @return the key of the entry to retrieve.
     */
    const std::string& DbGetAction::getKey() const {
        return (getGetterValue(__FUNCTION__));
    }

    void DbGetAction::setKey(const std::string& key) {
        setSetterValue(__FUNCTION__, key);
    }
} //NAMESPACE

