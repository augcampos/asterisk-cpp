/*
 * ZapDialOffhookAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ZAPDIALOFFHOOKACTION_H_
#define ZAPDIALOFFHOOKACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ZapDialOffhookAction dials a number on a zap channel while offhook.
     * 
     * @author augcampos
     * @version $Id$
     */

    class ZapDialOffhookAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty ZapDialOffhookAction.
         */
        ZapDialOffhookAction();

        /**
         * Creates a new ZapDialOffhookAction that dials the given number on the
         * given zap channel.
         * 
         * @param zapChannel the number of the zap channel
         * @param number the number to dial
         * @since 0.2
         */
        ZapDialOffhookAction(const std::string& number, int zapChannel);

        virtual ~ZapDialOffhookAction();


        /**
         * Returns the number of the zap channel.
         */
        int getZapChannel() const;

        /**
         * Sets the number of the zap channel.<p>
         * This property is mandatory.
         */
        void setZapChannel(int channel);

        /**
         * Returns the number to dial.
         */
        const std::string& getNumber() const;


        void setNumber(const std::string& number);
    };

} //NAMESPACE

#endif /*ZAPDIALOFFHOOKACTION_H_*/
