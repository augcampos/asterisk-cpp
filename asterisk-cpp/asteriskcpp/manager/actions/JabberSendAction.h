/*
 * JabberSendAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef JABBERSENDACTION_H_
#define JABBERSENDACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The JabberSendAction sends a Jabber (XMPP) message to a recipient.<p>
     * Available since Asterisk 1.6.0
     *
     * @author augcampos
     * @version $Id$
     * @since 1.0.0
     */

    class JabberSendAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new JabberSendAction.
         */
        JabberSendAction();

        /**
         * Creates a new JabberSendAction.
         *
         * @param jabber     the client or transport Asterisk uses to connect to Jabber.
         * @param screenName the JID of the recipient.
         * @param message    the message to send to the recipient.
         */
        JabberSendAction(const std::string& message);

        virtual ~JabberSendAction();



        const std::string& getJabber() const;

        /**
         * Sets the client or transport Asterisk uses to connect to Jabber.
         *
         * @param jabber the client or transport Asterisk uses to connect to Jabber.
         */
        void setJabber(const std::string& jabber);


        const std::string& getScreenName() const;

        /**
         * Sets the JID of the recipient.
         *
         * @param screenName the JID of the recipient.
         */
        void setScreenName(const std::string& screenName);


        const std::string& getMessage() const;


        void setMessage(const std::string& message);
    };

} //NAMESPACE

#endif /*JABBERSENDACTION_H_*/
