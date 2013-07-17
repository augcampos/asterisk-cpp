/*
 * ConfbridgeListRoomsAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef CONFBRIDGELISTROOMSACTION_H_
#define CONFBRIDGELISTROOMSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Lists data about all active conferences. ConfbridgeListRoomsEvent will follow as separate events,
     * followed by a final event called ConfbridgeListRoomsComplete.
     *
     * @since 1.0.0
     */

    class ConfbridgeListRoomsAction : public AbstractManagerAction {
    public:

        virtual ~ConfbridgeListRoomsAction();

    };

} //NAMESPACE

#endif /*CONFBRIDGELISTROOMSACTION_H_*/
