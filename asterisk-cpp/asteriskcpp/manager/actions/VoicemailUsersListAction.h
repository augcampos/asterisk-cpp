/*
 * VoicemailUsersListAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef VOICEMAILUSERSLISTACTION_H_
#define VOICEMAILUSERSLISTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Retrieves a list of all defined voicemail users.<p>
     * For each user that is found a VoicemailUserEntryEvent event is sent by Asterisk containing
     * the details. When all peers have been reported a VoicemailUserEntryCompleteEvent is
     * sent.<p>
     * It is implemented in <code>apps/app_voicemail.c</code>
     * <p/>
     * Available since Asterisk 1.6
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.event.VoicemailUserEntryEvent
     * @see org.asteriskjava.manager.event.VoicemailUserEntryCompleteEvent
     * @since 1.0.0
     */

    class VoicemailUsersListAction : public AbstractManagerAction {
    public:


        VoicemailUsersListAction();

        virtual ~VoicemailUsersListAction();

    };

} //NAMESPACE

#endif /*VOICEMAILUSERSLISTACTION_H_*/
