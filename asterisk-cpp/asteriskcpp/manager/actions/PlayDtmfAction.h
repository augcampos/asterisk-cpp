/*
 * PlayDtmfAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef PLAYDTMFACTION_H_
#define PLAYDTMFACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The PlayDTMFAction plays a DTMF digit on the specified channel.<p>
     * It is definied in <code>apps/app_senddtmf.c</code>.<p>
     * Available since Asterisk 1.2.8
     * 
     * @since 0.3
     * @author augcampos
     * @version $Id$
     */

    class PlayDtmfAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty PlayDtmfAction.
         */
        PlayDtmfAction();

        /**
         * Creates a new PlayDtmfAction that sends the given DTMF digit to the given channel.
         * 
         * @param channel the name of the channel to send the digit to.
         * @param digit the DTML digit to play.
         */
        PlayDtmfAction(const std::string& digit);

        virtual ~PlayDtmfAction();


        /**
         * Returns the name of the channel to send the digit to.
         * 
         * @return the name of the channel to send the digit to.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to send the digit to.
         * 
         * @param channel the name of the channel to send the digit to.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the DTMF digit to play.
         * 
         * @return the DTMF digit to play.
         */
        const std::string& getDigit() const;


        void setDigit(const std::string& digit);
    };

} //NAMESPACE

#endif /*PLAYDTMFACTION_H_*/
