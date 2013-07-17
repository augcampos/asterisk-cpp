/*
 * SkypeBuddyAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SKYPEBUDDYACTION_H_
#define SKYPEBUDDYACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SkypeBuddyAction retrieves the detais of a buddy for a Skype for Asterisk user.<p>
     * Available with Skype for Asterisk.
     *
     * @since 1.0.0
     * 
     * @ExpectedResponse(SkypeBuddyResponse)
     */
    

    class SkypeBuddyAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new SkypeBuddiesAction.
         */
        SkypeBuddyAction();

        /**
         * Creates a new SkypeBuddiesAction that retrieves the details of the given buddy for the given user.
         *
         * @param user  the Skype username of the user to retrieve the buddy details for.
         * @param buddy the Skype username of the buddy.
         */
        SkypeBuddyAction(const std::string& buddy);

        virtual ~SkypeBuddyAction();


         virtual ManagerResponse* expectedResponce(const std::string& reponse);
        
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

#endif /*SKYPEBUDDYACTION_H_*/
