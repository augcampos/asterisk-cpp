/*
 * SkypeBuddiesAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SKYPEBUDDIESACTION_H_
#define SKYPEBUDDIESACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SkypeBuddiesAction retrieves the buddy list of a Skype for Asterisk user
     * including the full name and status of each buddy.<p>
     * For each agent a SkypeBuddyEntryEvent is generated. After the full buddy list has been
     * reported a SkypeBuddyListCompleteEvent is generated.<p>
     * Available with Skype for Asterisk.
     *
     * @see org.asteriskjava.manager.event.SkypeBuddyEntryEvent
     * @see org.asteriskjava.manager.event.SkypeBuddyListCompleteEvent
     * @since 1.0.0
     */

    class SkypeBuddiesAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new SkypeBuddiesAction.
         */
        SkypeBuddiesAction();

        /**
         * Creates a new SkypeBuddiesAction that retrieves the buddy list for the given user.
         *
         * @param user the Skype username of the user to retrieve the buddy list for.
         */
        SkypeBuddiesAction(const std::string& user);

        virtual ~SkypeBuddiesAction();


        /**
         * Returns the Skype username of the user to retrieve the buddy list for.<p>
         * This property is mandatory.
         *
         * @return the Skype username of the user to retrieve the buddy list for.
         */
        const std::string& getUser() const;

        /**
         * Sets the Skype username of the user to retrieve the buddy list for.
         *
         * @param user the Skype username of the user to retrieve the buddy list for.
         */
        void setUser(const std::string& user);
    };

} //NAMESPACE

#endif /*SKYPEBUDDIESACTION_H_*/
