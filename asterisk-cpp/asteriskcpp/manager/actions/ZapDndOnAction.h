/*
 * ZapDndOnAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ZAPDNDONACTION_H_
#define ZAPDNDONACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ZapDNDOnAction switches a zap channel "Do Not Disturb" status on.
     * 
     * @author augcampos
     * @version $Id$
     */

    class ZapDndOnAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ZapDndOnAction.
         */
        ZapDndOnAction();

        /**
         * Creates a new ZapDndOnAction that enables "Do Not Disturb" status for
         * the given zap channel.
         * 
         * @param zapChannel the number of the zap channel
         * @since 0.2
         */
        ZapDndOnAction(int zapChannel);

        virtual ~ZapDndOnAction();


        /**
         * Returns the number of the zap channel to switch to dnd on.
         */
        int getZapChannel() const;


        void setZapChannel(int channel);
    };

} //NAMESPACE

#endif /*ZAPDNDONACTION_H_*/
