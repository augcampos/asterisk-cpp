/*
 * RedirectAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/RedirectAction.h"

namespace asteriskcpp {

    RedirectAction::RedirectAction() {
    }
    
    RedirectAction::~RedirectAction() {
    }    

    RedirectAction::RedirectAction(const std::string& channel, const std::string& context, const std::string& exten, int priority) {
        this->setChannel(channel);
        this->setExten(exten);
        this->setContext(context);
        this->setPriority(priority);
    }

    RedirectAction::RedirectAction(const std::string& channel, const std::string& extraChannel, const std::string& context, const std::string& exten, int priority) {
        this->setChannel(channel);
        this->setExtraChannel(extraChannel);
        this->setExten(exten);
        this->setContext(context);
        this->setPriority(priority);
    }

    RedirectAction::RedirectAction(const std::string& channel, const std::string& extraChannel, const std::string& context,
            const std::string& exten, int priority, const std::string& extraExten, int extraPriority) {
        this->setChannel(channel);
        this->setExtraChannel(extraChannel);
        this->setExten(exten);
        this->setContext(context);
        this->setPriority(priority);
        this->setExtraExten(extraExten);
        this->setExtraPriority(extraPriority);
    }

    const std::string& RedirectAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void RedirectAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    const std::string& RedirectAction::getExtraChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    void RedirectAction::setExtraChannel(const std::string& extraChannel) {
        setSetterValue(__FUNCTION__, extraChannel);
    }

    const std::string& RedirectAction::getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    void RedirectAction::setContext(const std::string& context) {
        setSetterValue(__FUNCTION__, context);
    }

    const std::string& RedirectAction::getExten() const {
        return (getGetterValue(__FUNCTION__));
    }

    void RedirectAction::setExten(const std::string& exten) {
        setSetterValue(__FUNCTION__, exten);
    }

    int RedirectAction::getPriority() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void RedirectAction::setPriority(int priority) {
        setSetterValue<int>(__FUNCTION__, priority);
    }

    const std::string& RedirectAction::getExtraContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    void RedirectAction::setExtraContext(const std::string& extraContext) {
        setSetterValue(__FUNCTION__, extraContext);
    }

    const std::string& RedirectAction::getExtraExten() const {
        return (getGetterValue(__FUNCTION__));
    }

    void RedirectAction::setExtraExten(const std::string& extraExten) {
        setSetterValue(__FUNCTION__, extraExten);
    }

    int RedirectAction::getExtraPriority() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    void RedirectAction::setExtraPriority(int extraPriority) {
        setSetterValue<int>(__FUNCTION__, extraPriority);
    }
} //NAMESPACE

