/*
 * SkypeRemoveBuddyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SKYPEREMOVEBUDDYACTION_H_
#define SKYPEREMOVEBUDDYACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SkypeRemoveBuddyAction removes a buddy from the buddy list of a Skype for Asterisk user.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     */

    class SkypeRemoveBuddyAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new SkypeRemoveBuddyAction.
         */
        SkypeRemoveBuddyAction();

        /**
         * Creates a new SkypeRemoveBuddyAction that removes the given buddy from the given Skype for
         * Asterisk user's buddy list.
         *
         * @param user  the Skype username of the user to add the buddy to.
         * @param buddy the Skype username of the buddy.
         */
        SkypeRemoveBuddyAction(const std::string& user,const std::string& buddy);

        virtual ~SkypeRemoveBuddyAction();


        /**
         * Returns the Skype username of the Skype for Asterisk user.<p>
         * This property is mandatory.
         *
         * @return the Skype username of the Skype for Asterisk user.
         */
        const std::string& getUser() const;

        /**
         * Sets the Skype username of the Skype for Asterisk user.
         *
         * @param user the Skype username of the Skype for Asterisk user.
         */
        void setUser(const std::string& user);

        /**
         * Returns the Skype username of the buddy.
         *
         * @return the Skype username of the buddy.
         */
        const std::string& getBuddy() const;

        /**
         * Sets the Skype username of the buddy.<p>
         * This property is mandatory.
         *
         * @param buddy the Skype username of the buddy.
         */
        void setBuddy(const std::string& buddy);
    };

} //NAMESPACE

#endif /*SKYPEREMOVEBUDDYACTION_H_*/
