/*
 * CoreShowChannelsAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CORESHOWCHANNELSACTION_H_
#define CORESHOWCHANNELSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The CoreShowChannelsAction requests the state of all active channels.<p>
     * It is simmilar to StatusAction but with more information about that channel
     * For each active channel a CoreShowChannelEvent is generated. After the state of all
     * channels has been reported a CoreShowChannelsCompleteEvent is generated.<p>
     * This action only works properly in 1.6.2 later than beta3.
     *
     * @author sebastian gutierrez
     * @see org.asteriskjava.manager.event.CoreShowChannelEvent
     * @see org.asteriskjava.manager.event.CoreShowChannelsCompleteEvent
     * @since 1.0.0
     */

    class CoreShowChannelsAction : public AbstractManagerAction {
    public:


        CoreShowChannelsAction();

        virtual ~CoreShowChannelsAction();

    };

} //NAMESPACE

#endif /*CORESHOWCHANNELSACTION_H_*/
