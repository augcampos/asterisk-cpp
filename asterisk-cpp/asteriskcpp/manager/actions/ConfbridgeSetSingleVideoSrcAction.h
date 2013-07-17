/*
 * ConfbridgeSetSingleVideoSrcAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGESETSINGLEVIDEOSRCACTION_H_
#define CONFBRIDGESETSINGLEVIDEOSRCACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ConfbridgeSetSingleVideoSrcAction sets a conference user as the single video source distributed to all other video-capable participants.
     * 
     * @author jmb
     * @version $Id$
     */

    class ConfbridgeSetSingleVideoSrcAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ConfbridgeSetSingleVideoSrcAction.
         */
        ConfbridgeSetSingleVideoSrcAction();

        virtual ~ConfbridgeSetSingleVideoSrcAction();


        /**
         * Sets the id of the conference for which the video source is to be set.
         */
        void setConference(const std::string& conference);

        /**
         * Returns the id of the conference for which the video source is to be set.
         */
        const std::string& getConference() const;

        /**
         * Sets the channel which will be the single video source of the conference.
         */
        void setChannel(const std::string& channel);


        const std::string& getChannel() const;
    };

} //NAMESPACE

#endif /*CONFBRIDGESETSINGLEVIDEOSRCACTION_H_*/
