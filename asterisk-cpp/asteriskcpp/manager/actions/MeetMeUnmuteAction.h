/*
 * MeetMeUnmuteAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MEETMEUNMUTEACTION_H_
#define MEETMEUNMUTEACTION_H_

#include "AbstractMeetMeMuteAction.h"

namespace asteriskcpp {

    /**
     * The MeetMeUnmuteAction unmutes a user in a conference.<p>
     * Defined in <code>apps/app_meetme.c</code><p>
     * Available since Asterisk 1.4.
     * 
     * @author augcampos
     * @version $Id$
     */

    class MeetMeUnmuteAction : public AbstractMeetMeMuteAction {
    public:

        /**
         * Creates a new empty MeetMeUnmuteAction.
         */
        MeetMeUnmuteAction();

        /**
         * Creates a new MeetMeUnmuteAction.
         * 
         * @param meetMe the conference number.
         * @param userNum the index of the user in the conference.
         */
        MeetMeUnmuteAction(const std::string& meetMe, int userNum);

        virtual ~MeetMeUnmuteAction();

    };

} //NAMESPACE

#endif /*MEETMEUNMUTEACTION_H_*/
