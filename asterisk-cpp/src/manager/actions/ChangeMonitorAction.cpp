/*
 * ChangeMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#include "asteriskcpp/manager/actions/ChangeMonitorAction.h"

namespace asteriskcpp {

    /**
     * Creates a new empty ChangeMonitorAction.
     */
    ChangeMonitorAction::ChangeMonitorAction() {
    }
    
    ChangeMonitorAction::~ChangeMonitorAction() {
    }    

    /**
     * Creates a new ChangeMonitorAction that causes monitoring data for the
     * given channel to be written to the given file(s).
     * 
     * @param channel the name of the channel that is monitored
     * @param file the (base) name of the file(s) to which the voice data is
     *            written
     * @since 0.2
     */
    ChangeMonitorAction::ChangeMonitorAction(const std::string& file) {
        this->setFile(file);
    }

    /**
     * Returns the name of the monitored channel.
     */
    const std::string& ChangeMonitorAction::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    /**
     * Sets the name of the monitored channel.<p>
     * This property is mandatory.
     */
    void ChangeMonitorAction::setChannel(const std::string& channel) {
        setSetterValue(__FUNCTION__, channel);
    }

    /**
     * Returns the name of the file to which the voice data is written.
     */
    const std::string& ChangeMonitorAction::getFile() const {
        return (getGetterValue(__FUNCTION__));
    }

    void ChangeMonitorAction::setFile(const std::string& file) {
        setSetterValue(__FUNCTION__, file);
    }
} //NAMESPACE

