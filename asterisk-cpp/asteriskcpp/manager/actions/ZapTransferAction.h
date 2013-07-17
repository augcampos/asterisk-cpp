/*
 * ZapTransferAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ZAPTRANSFERACTION_H_
#define ZAPTRANSFERACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ZapTransferAction transfers a zap channel.
     * 
     * @author augcampos
     * @version $Id$
     */

    class ZapTransferAction : public AbstractManagerAction {
    public:

        ZapTransferAction();

        virtual ~ZapTransferAction();


        /**
         * Returns the number of the zap channel to transfer.
         */
        int getZapChannel() const;


        void setZapChannel(int channel);
    };

} //NAMESPACE

#endif /*ZAPTRANSFERACTION_H_*/
