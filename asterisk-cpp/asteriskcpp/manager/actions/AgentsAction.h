/* 
 * File:   AgentsAction.h
 * Author: augcampos
 *
 * Created on June 20, 2013, 2:18 AM
 */

#ifndef AGENTSACTION_H
#define	AGENTSACTION_H

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /*
     *  Copyright 2004-2006 Stefan Reuter
     *
     *  Licensed under the Apache License, Version 2.0 (the "License");
     *  you may not use this file except in compliance with the License.
     *  You may obtain a copy of the License at
     *
     *      http://www.apache.org/licenses/LICENSE-2.0
     *
     *  Unless required by applicable law or agreed to in writing, software
     *  distributed under the License is distributed on an "AS IS" BASIS,
     *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
     *  See the License for the specific language governing permissions and
     *  limitations under the License.
     *
     */
    class AgentsAction : public AbstractManagerAction {
    public:
        /**
         * Creates a new AgentsAction.
         */
        AgentsAction();
        virtual ~AgentsAction();


        //TODO: implement implements EventGeneratingAction / getActionCompleteEventClass

    };
}
#endif	/* AGENTSACTION_H */

