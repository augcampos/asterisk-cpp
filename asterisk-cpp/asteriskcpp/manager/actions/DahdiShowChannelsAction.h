/*
 * DahdiShowChannelsAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef DAHDISHOWCHANNELSACTION_H_
#define DAHDISHOWCHANNELSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The DahdiShowChannelsAction requests the state of all Dahdi channels.<p>
     * For each Dahdi channel aDahdiShowChannelsEvent is generated. After all Dahdi
     * channels have been listed a DahdiShowChannelsCompleteEvent is generated.
     * 
     * @see org.asteriskjava.manager.event.DahdiShowChannelsEvent
     * @see org.asteriskjava.manager.event.DahdiShowChannelsCompleteEvent
     * @author augcampos
     * @version $Id$
     */

    class DahdiShowChannelsAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new DahdiShowChannelsAction.
         */
        DahdiShowChannelsAction();

        virtual ~DahdiShowChannelsAction();

    };

} //NAMESPACE

#endif /*DAHDISHOWCHANNELSACTION_H_*/
