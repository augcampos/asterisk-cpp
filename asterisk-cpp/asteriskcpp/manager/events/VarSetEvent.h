/*
 * VarSetEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef VARSETEVENT_H_
#define VARSETEVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A VarSetEvent is triggered when a channel or global variable is set in Asterisk.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/pbx.c</code>
     *
     * @since 1.0.0
     */
    class VarSetEvent : public ManagerEvent {
    public:
        VarSetEvent(const std::string & values);
        virtual ~VarSetEvent();

        /**
         * Returns the name of the channel or <code>null</code> for global variables.
         *
         * @return the name of the channel or <code>null</code> for global variables.
         */
        const std::string& getChannel() const;

        /**
         * Returns the unique id of the channel or <code>null</code> for global variables.
         *
         * @return the unique id of the channel or <code>null</code> for global variables.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the name of the variable that has been set.
         *
         * @return the name of the variable that has been set.
         */
        const std::string& getVariable() const;

        /**
         * Returns the new value of the variable.
         *
         * @return the new value of the variable.
         */
        const std::string& getValue() const;
    };

} /* namespace asteriskcpp */
#endif /* VARSETEVENT_H_ */
