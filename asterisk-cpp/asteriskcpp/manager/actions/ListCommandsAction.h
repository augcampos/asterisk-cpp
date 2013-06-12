/*
 * ListCommandsAction.h
 *
 *  Created on: Jul 21, 2011
 *      Author: augcampos
 */

#ifndef LISTCOMMANDSACTION_H_
#define LISTCOMMANDSACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ListCommandsAction returns possible commands in the Manager interface.
     * <p>
     * Use the getAttributes method on the ManagerResponse for a map of commands and explanations.
     *
     * @see org.asteriskjava.manager.response.ManagerResponse#getAttributes()
     */
    class ListCommandsAction : public AbstractManagerAction {
    public:
        ListCommandsAction();

        virtual ~ListCommandsAction();
    };

}

#endif /* LISTCOMMANDSACTION_H_ */
