/*
 * RedirectAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef REDIRECTACTION_H_
#define REDIRECTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Redirects a given channel (and an optional additional channel) to a new
     * extension.<p>
     * The additional channel is usually used when redirecting two bridged channel
     * for example to a MeetMe room.<p>
     * Note that BRIstuffed versions of Asterisk behave slightly different:
     * While the standard version only allows redirecting the two channels to the same
     * context, extension, priority the BRIstuffed version uses context, extension, 
     * priority only for the first channel and extraContext, extraExtension, 
     * extraPriority for the second channel. The standard version ignores the 
     * extraContext, extraExtension, extraPriority properties.  
     * 
     * @author augcampos
     * @version $Id$
     */

    class RedirectAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty RedirectAction.
         */
        RedirectAction();

        /**
         * Creates a new RedirectAction that redirects the given channel to the
         * given context, extension, priority triple.
         * 
         * @param channel the name of the channel to redirect
         * @param context the destination context
         * @param exten the destination extension
         * @param priority the destination priority
         * @since 0.2
         */
        RedirectAction(const std::string& channel , const std::string& context, const std::string& exten, int priority);

        /**
         * Creates a new RedirectAction that redirects the given channels to the
         * given context, extension, priority triple.<p>
         * This constructor only works standard versions of Asterisk, i.e. non-BRIstuffed
         * versions.
         * When used with a BRIstuffed version (and not setting extraContext, extraExten and
         * extraPriority) the second channel is just hung up.  
         * 
         * @param channel the name of the first channel to redirect
         * @param extraChannel the name of the second channel to redirect
         * @param context the destination context
         * @param exten the destination extension
         * @param priority the destination priority
         * @since 0.2
         */
        RedirectAction(const std::string& channel ,  const std::string& extraChannel, const std::string& context, const std::string& exten, int priority);

        /**
         * Creates a new RedirectAction that redirects the given channels to the
         * given context, extension, priority triples.<p>
         * This constructor works for BRIstuffed versions of Asterisk, if used
         * with a standard version the extraContext, extraExten and
         * extraPriroity attributes are ignored.
         * 
         * @param channel the name of the first channel to redirect
         * @param extraChannel the name of the second channel to redirect
         * @param context the destination context for the first channel
         * @param exten the destination extension for the first channel
         * @param priority the destination priority for the first channel
         * @param extraContext the destination context for the second channel
         * @param extraExten the destination extension for the second channel
         * @param extraPriority the destination priority for the second channel
         * @since 0.3
         */
        RedirectAction(const std::string& channel ,  const std::string& extraChannel, const std::string& context, const std::string& exten, int priority, const std::string& extraExten, int extraPriority);

        virtual ~RedirectAction();


        /**
         * Returns name of the channel to redirect.
         * 
         * @return the name of the channel to redirect
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to redirect.
         * 
         * @param channel the name of the channel to redirect
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the name of the additional channel to redirect.
         * 
         * @return the name of the additional channel to redirect
         */
        const std::string& getExtraChannel() const;

        /**
         * Sets the name of the additional channel to redirect.
         * 
         * @param extraChannel the name of the additional channel to redirect
         */
        void setExtraChannel(const std::string& extraChannel);

        /**
         * Returns the destination context.
         * 
         * @return the destination context
         */
        const std::string& getContext() const;

        /**
         * Sets the destination context.
         * 
         * @param context the destination context
         */
        void setContext(const std::string& context);

        /**
         * Returns the destination extension.
         * 
         * @return the destination extension
         */
        const std::string& getExten() const;

        /**
         * Sets the destination extension.
         * 
         * @param exten the destination extension
         */
        void setExten(const std::string& exten);

        /**
         * Returns the destination priority.
         * 
         * @return the destination priority
         */
        int getPriority() const;

        /**
         * Sets the destination priority.
         * 
         * @param priority the destination priority
         */
        void setPriority(int priority);

        /**
         * Returns the destination context for the additional channel.<p>
         * This property is only used by BRIstuffed Asterisk servers.
         * 
         * @return the destination context for the additional channel.
         */
        const std::string& getExtraContext() const;

        /**
         * Sets the destination context for the additional channel.<p>
         * This property is only used by BRIstuffed Asterisk servers.
         * 
         * @param extraContext the destination context for the additional channel.
         */
        void setExtraContext(const std::string& extraContext);

        /**
         * Sets the destination extension for the additional channel.<p>
         * This property is only used by BRIstuffed Asterisk servers.
         * 
         * @return the destination extension for the additional channel.
         */
        const std::string& getExtraExten() const;

        /**
         * Sets the destination extension for the additional channel.<p>
         * This property is only used by BRIstuffed Asterisk servers.
         * 
         * @param extraExten the destination extension for the additional channel.
         */
        void setExtraExten(const std::string& extraExten);

        /**
         * Returns the destination priority for the additional channel.<p>
         * This property is only used by BRIstuffed Asterisk servers.
         * 
         * @return the destination priority for the additional channel.
         */
        int getExtraPriority() const;


        void setExtraPriority(int extraPriority);
    };

} //NAMESPACE

#endif /*REDIRECTACTION_H_*/
