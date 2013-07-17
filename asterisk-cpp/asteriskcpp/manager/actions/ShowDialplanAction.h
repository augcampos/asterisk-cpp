/*
 * ShowDialplanAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SHOWDIALPLANACTION_H_
#define SHOWDIALPLANACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Retrieves a list of all priorities defined in the dialplan.<p>
     * For each priority a ListDialplanEvent is sent by Asterisk containing
     * the details. When all priorities have been reported a ShowDialplanCompleteEvent is
     * sent.<p>
     * Available since Asterisk 1.6
     *
     * @author augcampos
     * @version $Id$
     * @see org.asteriskjava.manager.event.ListDialplanEvent
     * @see org.asteriskjava.manager.event.ShowDialplanCompleteEvent
     * @since 1.0.0
     */

    class ShowDialplanAction : public AbstractManagerAction {
    public:


        ShowDialplanAction();

        virtual ~ShowDialplanAction();

    };

} //NAMESPACE

#endif /*SHOWDIALPLANACTION_H_*/
