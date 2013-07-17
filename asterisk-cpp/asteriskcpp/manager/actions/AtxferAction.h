/*
 * AtxferAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ATXFERACTION_H_
#define ATXFERACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Starts an attended transfer. This action seems to be a bit of a hack. See
     * <a href="http://bugs.digium.com/view.php?id=12158">http://bugs.digium.com/view.php?id=12158</a>
     * for details.<p>
     * Available since Asterisk 1.6
     *
     * @version $Id$
     * @since 1.0.0
     */

    class AtxferAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty AtxferAction.
         */
        AtxferAction();

        /**
         * Creates a new AtxferAction that initiates an attended transfer of the given channel to the
         * given context, extension, priority triple.
         *
         * @param channel  the name of the channel to transfer
         * @param context  the destination context
         * @param exten    the destination extension
         * @param priority the destination priority
         */
        AtxferAction(const std::string& exten, int priority);

        virtual ~AtxferAction();


        /**
         * Returns name of the channel to transfer.
         *
         * @return the name of the channel to transfer
         */
        const std::string& getChannel() const;

        /**
         * Sets name of the channel to transfer.
         *
         * @param channel the name of the channel to transfer
         */
        void setChannel(const std::string& channel);

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


        void setPriority(int priority);
    };

} //NAMESPACE

#endif /*ATXFERACTION_H_*/
