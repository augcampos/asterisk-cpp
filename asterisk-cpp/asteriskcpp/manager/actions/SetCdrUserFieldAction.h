/*
 * SetCdrUserFieldAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SETCDRUSERFIELDACTION_H_
#define SETCDRUSERFIELDACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SetCDRUserFieldAction causes the user field of the call detail record for
     * the given channel to be changed.<p>
     * Depending on the value of the append property the value is appended or
     * overwritten.<p>
     * The SetCDRUserFieldAction is implemented in
     * <code>apps/app_setcdruserfield.c</code>
     * 
     * @author augcampos
     * @version $Id$
     */

    class SetCdrUserFieldAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty SetCdrUserFieldAction.
         */
        SetCdrUserFieldAction();

        /**
         * Creates a new SetCdrUserFieldAction that sets the user field of the call
         * detail record for the given channel to the given value.
         * 
         * @param channel the name of the channel
         * @param userField the new value of the userfield
         * @since 0.2
         */
        SetCdrUserFieldAction(const std::string& channel, const std::string& userField);

        /**
         * Creates a new SetCDRUserFieldAction that sets the user field of the call
         * detail record for the given channel to the given value.
         * 
         * @param channel the name of the channel
         * @param userField the new value of the userfield
         * @param append true to append the value to the cdr user field or false to
         *            overwrite
         * @since 0.2
         */
        SetCdrUserFieldAction(const std::string& channel, const std::string& userField, bool append);

        virtual ~SetCdrUserFieldAction();


        /**
         * Returns the name of the channel to set the cdr user field on.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to set the cdr user field on.<p>
         * This property is mandatory.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the value of the cdr user field to set or append.
         */
        const std::string& getUserField() const;

        /**
         * Sets the value of the cdr user field to set or append.<p>
         * This property is mandatory.
         */
        void setUserField(const std::string& userField);

        /**
         * Returns if the value of the cdr user field is appended or overwritten.
         */
        bool getAppend() const;


        void setAppend(bool append);
    };

} //NAMESPACE

#endif /*SETCDRUSERFIELDACTION_H_*/
