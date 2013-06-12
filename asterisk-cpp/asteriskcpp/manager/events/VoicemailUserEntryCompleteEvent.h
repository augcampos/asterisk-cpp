/*
 * VoicemailUserEntryCompleteEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef VOICEMAILUSERENTRYCOMPLETEEVENT_H_
#define VOICEMAILUSERENTRYCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A VoicemailUserEntryCompleteEvent is triggered after the details of all voicemail users has
     * been reported in response to a VoicemailUsersListAction.<p>
     * It is implemented in <code>apps/app_voicemail.c</code>
     * <p>
     * Available since Asterisk 1.6
     *
     * @see VoicemailUserEntryEvent
     * @see org.asteriskjava.manager.action.VoicemailUsersListAction
     * @since 1.0.0
     */
    class VoicemailUserEntryCompleteEvent : public ResponseEvent {
    public:
        VoicemailUserEntryCompleteEvent(const std::string & values);
        virtual ~VoicemailUserEntryCompleteEvent();
    };

} /* namespace asteriskcpp */
#endif /* VOICEMAILUSERENTRYCOMPLETEEVENT_H_ */
