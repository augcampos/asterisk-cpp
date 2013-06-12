/*
 * HoldedCallEvent.h
 *
 *  Created on: Aug 23, 2011
 *      Author: augcampos
 */

#ifndef HOLDEDCALLEVENT_H_
#define HOLDEDCALLEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A HoldedCallEvent is triggered when a channel is put on hold.<p>
     * It is implemented in <code>res/res_features.c</code>
     *
     */
    class HoldedCallEvent : public asteriskcpp::ManagerEvent {
    public:

        HoldedCallEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~HoldedCallEvent() {

        }

        /**
         * Returns the unique id of the channel that put the other channel on hold.
         */
        const std::string& getUniqueId1() const {
            return (getProperty("UniqueId1"));
        }

        /**
         * Returns the unique id of the channel that has been put on hold.
         */
        const std::string& getUniqueId2() const {
            return (getProperty("UniqueId2"));
        }

        /**
         * Returns the name of the channel that put the other channel on hold.
         */
        const std::string& getChannel1() const {
            return (getProperty("Channel1"));
        }

        /**
         * Returns the name of the channel that has been put on hold.
         */
        const std::string& getChannel2() const {
            return (getProperty("Channel2"));
        }

    };

} /* namespace asterisk_cpp */
#endif /* HOLDEDCALLEVENT_H_ */
