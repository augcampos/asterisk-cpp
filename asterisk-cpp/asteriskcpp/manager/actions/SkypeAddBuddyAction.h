/*
 * SkypeAddBuddyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SKYPEADDBUDDYACTION_H_
#define SKYPEADDBUDDYACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SkypeAddBuddyAction adds a buddy to the buddy list of a Skype for Asterisk user.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     */

    class SkypeAddBuddyAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new SkypeAddBuddyAction.
         */
        SkypeAddBuddyAction();

        /**
         * Creates a new SkypeAddBuddyAction that adds the given buddy to the given Skype for
         * Asterisk user's buddy list.
         *
         * @param user  the Skype username of the user to add the buddy to.
         * @param buddy the Skype username of the buddy.
         */
        SkypeAddBuddyAction(const std::string& user, const std::string& buddy);

        /**
         * Creates a new SkypeAddBuddyAction that adds the given buddy to the given Skype for
         * Asterisk user's buddy list with a custom auth message.
         *
         * @param user    the Skype username of the user to add the buddy to.
         * @param buddy   the Skype username of the buddy.
         * @param authMsg the auth message.
         */
        SkypeAddBuddyAction(const std::string& user, const std::string& buddy, const std::string& authMsg);

        virtual ~SkypeAddBuddyAction();


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

        /**
         * Returns the auth message.
         *
         * @return the auth message.
         */
        const std::string& getAuthMsg() const;

        /**
         * Sets the auth message.
         *
         * @param authMsg the auth message.
         */
        void setAuthMsg(const std::string& authMsg);
    };

} //NAMESPACE

#endif /*SKYPEADDBUDDYACTION_H_*/
