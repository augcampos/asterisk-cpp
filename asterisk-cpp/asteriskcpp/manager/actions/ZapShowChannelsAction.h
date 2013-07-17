/*
 * ZapShowChannelsAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ZAPSHOWCHANNELSACTION_H_
#define ZAPSHOWCHANNELSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ZapShowChannelsAction requests the state of all zap channels.<p>
     * For each zap channel a ZapShowChannelsEvent is generated. After all zap
     * channels have been listed a ZapShowChannelsCompleteEvent is generated.
     * 
     * @see org.asteriskjava.manager.event.ZapShowChannelsEvent
     * @see org.asteriskjava.manager.event.ZapShowChannelsCompleteEvent
     * @author augcampos
     * @version $Id$
     */

    class ZapShowChannelsAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new ZapShowChannelsAction.
         */
        ZapShowChannelsAction();

        virtual ~ZapShowChannelsAction();

    };

} //NAMESPACE

#endif /*ZAPSHOWCHANNELSACTION_H_*/
