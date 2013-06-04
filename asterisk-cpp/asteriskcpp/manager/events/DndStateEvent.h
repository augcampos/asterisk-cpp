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

	class DndStateEvent: public ManagerEvent {
	public:
		inline static std::string getEventName() {
			return ("DndStateEvent");
		}
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
		 * @return Boolean.TRUE if do not disturb is on, Boolean.FALSE if it is off.
		 */
		int getState() const {
			return (getProperty<bool>("State"));
		}
	};

}

#endif /* DNDSTATEEVENT_H_ */
