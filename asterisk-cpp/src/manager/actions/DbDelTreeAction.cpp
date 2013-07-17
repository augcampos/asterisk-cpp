/*
 * DbDelTreeAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/DbDelTreeAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty DbDelTreeAction.
     */
    DbDelTreeAction::DbDelTreeAction() {
    }

    /**
     * Creates a new DbDelTreeAction.
     *
     * @param family the family of the key
     * @param key the key of the entries to delete
     */
    DbDelTreeAction::DbDelTreeAction(const std::string& key) {
        this->setKey(key);
    }

    /**
     * Returns the family of the key to delete.
     *
     * @return the family of the key to delete
     */
    const std::string& DbDelTreeAction::getFamily() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the family of the key to delete.
     *
     * @param family the family of the key to delete
     */
    void DbDelTreeAction::setFamily(const std::string& family) {
        setSetterValue(__FUNCTION__, family);
    }

    /**
     * Returns the the key to delete.
     *
     * @return the key to delete
     */
    const std::string& DbDelTreeAction::getKey() const {
        return (getGetterValue(__FUNCTION__));
    }

    void DbDelTreeAction::setKey(const std::string& key) {
        setSetterValue(__FUNCTION__, key);
    }
} //NAMESPACE

