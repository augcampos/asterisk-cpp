/*
 * AbstractMeetMeMuteAction.h
 *
 *  Created on: Aug 26, 2011
 *      Author: augcampos
 */

#ifndef ABSTRACTMEETMEMUTEACTION_H_
#define ABSTRACTMEETMEMUTEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Abstract base class for mute and unmute actions.
     *
     */
    class AbstractMeetMeMuteAction : public AbstractManagerAction {
    public:
        AbstractMeetMeMuteAction();
        AbstractMeetMeMuteAction(const std::string& meetMe, int userNum);
        virtual ~AbstractMeetMeMuteAction();

        /**
         * Returns the conference number.
         *
         * @return the conference number.
         */
        const std::string& getMeetMe() const;

        /**
         * Sets the conference number.<p>
         * This property is mandatory.
         *
         * @param meetMe the conference number.
         */
        void setMeetMe(const std::string& meetMe);

        /**
         * Returns the index of the user in the conference.
         *
         * @return the index of the user in the conference.
         */
        int getUserNum() const;

        /**
         * Sets the index of the user in the conference.<p>
         * This property is mandatory.
         *
         * @param userNum the index of the user in the conference.
         */
        void setUserNum(int userNum);

    };

} /* namespace asterisk_cpp */
#endif /* ABSTRACTMEETMEMUTEACTION_H_ */
