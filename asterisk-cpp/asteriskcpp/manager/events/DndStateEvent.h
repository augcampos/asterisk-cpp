/*
 * DndStateEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef DNDSTATEEVENT_H_
#define DNDSTATEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    class DndStateEvent : public ManagerEvent {
    public:

        DndStateEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~DndStateEvent() {
        }

        /**
         * Returns the name of the channel. The channel name is of the form
         * "Zap/&lt;channel number&gt;".
         */
        const std::string& getChannel() const {
            return (getProperty("Channel"));
        }

        /**
         * Returns DND state of the channel.
         *
         * @return bool.TRUE if do not disturb is on, bool.FALSE if it is off.
         */
        int getState() const {
            return (getProperty<bool>("State"));
        }
    };

}

#endif /* DNDSTATEEVENT_H_ */
