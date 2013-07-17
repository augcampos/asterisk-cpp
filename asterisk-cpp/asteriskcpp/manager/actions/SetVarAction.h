/*
 * SetVarAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SETVARACTION_H_
#define SETVARACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SetVarAction sets the value of a global or local channel variable.<p>
     * Setting global variables is supported since Asterisk 1.2.
     * 
     * @author Asteria Solutions Group, Inc. <http://www.asteriasgi.com>
     * @author augcampos
     * @version $Id$
     */

    class SetVarAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty SetVarAction.
         */
        SetVarAction();

        /**
         * Creates a new SetVarAction that sets the given global variable to a new value.
         * 
         * @param variable the name of the global variable to set
         * @param value the new value
         * @since 0.2
         */
        SetVarAction(const std::string& variable, const std::string& value);

        /**
         * Creates a new SetVarAction that sets the given channel variable of the
         * given channel to a new value.
         * 
         * @param channel the name of the channel to set the variable on
         * @param variable the name of the channel variable
         * @param value the new value
         * @since 0.2
         */
        SetVarAction(const std::string& channel, const std::string& variable, const std::string& value);

        virtual ~SetVarAction();


        /**
         * Returns the name of the channel.
         * 
         * @return the name of channel.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel.
         * 
         * @param channel the name of the channel to set.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the name of the variable to set.
         * 
         * @return the name of the variable to set.
         */
        const std::string& getVariable() const;

        /**
         * Sets the name of the variable to set.
         * 
         * @param variable the name of the variable to set.
         */
        void setVariable(const std::string& variable);

        /**
         * Returns the value to store.
         * 
         * @return the value to store.
         */
        const std::string& getValue() const;


        void setValue(const std::string& value);
    };

} //NAMESPACE

#endif /*SETVARACTION_H_*/
