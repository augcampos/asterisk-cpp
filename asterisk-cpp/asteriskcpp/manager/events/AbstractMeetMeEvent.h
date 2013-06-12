/*
 * AbstractMeetMeEvent.h
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#ifndef ABSTRACTMEETMEEVENT_H_
#define ABSTRACTMEETMEEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * Abstract base class providing common properties for MeetMe
     * (Asterisk's conference system) events.<p>
     * MeetMe events are implemented in <code>apps/app_meetme.c</code>
     *
     */
    class AbstractMeetMeEvent : public ManagerEvent {
    public:
        AbstractMeetMeEvent(const std::string& values);
        virtual ~AbstractMeetMeEvent();

        /**
         * Returns the name of the channel.<p>
         * This property is available since Asterisk 1.4.
         *
         * @return the name of the channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the unique id of the channel.<p>
         * This property is available since Asterisk 1.4.
         *
         * @return the unique id of the channel.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the conference number.
         *
         * @return the conference number.
         */
        const std::string& getMeetMe() const;

        /**
         * Returns the index of the user in the conference.<p>
         * This can be used for the "meetme (mute|unmute|kick)" commands.
         *
         * @return the index of the user in the conference.
         */
        int getUserNum() const;

    };

} /* namespace asterisk_cpp */
#endif /* ABSTRACTMEETMEEVENT_H_ */
