/*
 * MeetMeMuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MEETMEMUTEACTION_H_
#define MEETMEMUTEACTION_H_

#include "AbstractMeetMeMuteAction.h"

namespace asteriskcpp {

    /**
     * The MeetMeMuteAction mutes a user in a conference.<p>
     * Defined in <code>apps/app_meetme.c</code><p>
     * Available since Asterisk 1.4.
     * 
     * @author augcampos
     * @version $Id$
     */

    class MeetMeMuteAction : public AbstractMeetMeMuteAction {
    public:

        /**
         * Creates a new empty MeetMeMuteAction.
         */
        MeetMeMuteAction();

        /**
         * Creates a new MeetMeMuteAction.
         * 
         * @param meetMe the conference number.
         * @param userNum the index of the user in the conference.
         */
        MeetMeMuteAction(const std::string& meetMe, int userNum);

        virtual ~MeetMeMuteAction();

    };

} //NAMESPACE

#endif /*MEETMEMUTEACTION_H_*/
