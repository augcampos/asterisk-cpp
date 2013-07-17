/*
 * ZapHangupAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ZAPHANGUPACTION_H_
#define ZAPHANGUPACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ZapHangupAction hangs up a zap channel.
     * 
     * @author augcampos
     * @version $Id$
     */

    class ZapHangupAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ZapHangupAction.
         */
        ZapHangupAction();

        /**
         * Creates a new ZapHangupAction that hangs up the given zap channel.
         * 
         * @param zapChannel the number of the zap channel to hang up
         * @since 0.2
         */
        ZapHangupAction(int zapChannel);

        virtual ~ZapHangupAction();


        /**
         * Returns the number of the zap channel to hangup.
         */
        int getZapChannel() const;


        void setZapChannel(int channel);
    };

} //NAMESPACE

#endif /*ZAPHANGUPACTION_H_*/
