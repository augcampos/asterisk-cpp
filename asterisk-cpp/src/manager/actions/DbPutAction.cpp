/*
 * DbPutAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/DbPutAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty DbPutAction.
     */
    DbPutAction::DbPutAction() {
    }
    
    DbPutAction::~DbPutAction() {
    }    

    /**
     * Creates a new DbPutAction that sets the value of the database entry with
     * the given key in the given family.
     * 
     * @param family the family of the key
     * @param key the key of the entry to set
     * @param val the value to set
     * @since 0.2
     */
    DbPutAction::DbPutAction(const std::string& val) {
        this->setVal(val);
    }

    /**
     * Returns the family of the key to set.
     * 
     * @return the family of the key to set.
     */
    const std::string& DbPutAction::getFamily() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the family of the key to set.
     * 
     * @param family the family of the key to set.
     */
    void DbPutAction::setFamily(const std::string& family) {
        setSetterValue(__FUNCTION__, family);
    }

    /**
     * Returns the the key to set.
     * 
     * @return the key to set.
     */
    const std::string& DbPutAction::getKey() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the key to set.
     * 
     * @param key the key to set.
     */
    void DbPutAction::setKey(const std::string& key) {
        setSetterValue(__FUNCTION__, key);
    }

    /**
     * Returns the value to set.
     * 
     * @return the value to set.
     */
    const std::string& DbPutAction::getVal() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the value to set.
     * 
     * @param val the value to set.
     */
    void DbPutAction::setVal(const std::string& val) {
        setSetterValue(__FUNCTION__, val);
    }

    const std::string& DbPutAction::getValue() const {
        return (getGetterValue(__FUNCTION__));
    }
} //NAMESPACE

