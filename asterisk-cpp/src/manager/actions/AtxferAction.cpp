/*
 * AtxferAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/AtxferAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty AtxferAction.
     */
    AtxferAction::AtxferAction() {
    }

    AtxferAction::~AtxferAction() {
    }

    /**
     * Creates a new AtxferAction that initiates an attended transfer of the given channel to the
     * given context, extension, priority triple.
     *
     * @param channel  the name of the channel to transfer
     * @param context  the destination context
     * @param exten    the destination extension
     * @param priority the destination priority
     */
    AtxferAction::AtxferAction(const std::string& exten, int priority) {
        this->setExten(exten);
        this->setPriority(priority);
    }

    /**
     * Returns name of the channel to transfer.
     *
     * @return the name of the channel to transfer
     */
    const std::string& AtxferAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets name of the channel to transfer.
     *
     * @param channel the name of the channel to transfer
     */
    void AtxferAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    /**
     * Returns the destination context.
     *
     * @return the destination context
     */
    const std::string& AtxferAction::getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the destination context.
     *
     * @param context the destination context
     */
    void AtxferAction::setContext(const std::string& context) {
        setSetterValue(__FUNCTION__, context);
    }

    /**
     * Returns the destination extension.
     *
     * @return the destination extension
     */
    const std::string& AtxferAction::getExten() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the destination extension.
     *
     * @param exten the destination extension
     */
    void AtxferAction::setExten(const std::string& exten) {
        setSetterValue(__FUNCTION__, exten);
    }

    /**
     * Returns the destination priority.
     *
     * @return the destination priority
     */
    int AtxferAction::getPriority() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void AtxferAction::setPriority(int priority) {
        setSetterValue<int>(__FUNCTION__, priority);
    }
} //NAMESPACE

