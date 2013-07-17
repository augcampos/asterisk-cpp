/*
 * ZapDndOffAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ZAPDNDOFFACTION_H_
#define ZAPDNDOFFACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ZapDNDOnAction switches a zap channel "Do Not Disturb" status off.
     * 
     * @author augcampos
     * @version $Id$
     */

    class ZapDndOffAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ZapDndOffAction.
         */
        ZapDndOffAction();

        /**
         * Creates a new ZapDndOffAction that disables "Do Not Disturb" status for
         * the given zap channel.
         * 
         * @param zapChannel the number of the zap channel
         * @since 0.2
         */
        ZapDndOffAction(int zapChannel);

        virtual ~ZapDndOffAction();


        /**
         * Returns the number of the zap channel to switch to dnd off.
         */
        int getZapChannel() const;


        void setZapChannel(int channel);
    };

} //NAMESPACE

#endif /*ZAPDNDOFFACTION_H_*/
