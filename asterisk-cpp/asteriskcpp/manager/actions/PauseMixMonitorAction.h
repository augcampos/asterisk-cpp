/*
 * PauseMixMonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef PAUSEMIXMONITORACTION_H_
#define PAUSEMIXMONITORACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The PauseMixMonitorAction temporarily stop/start monitoring (recording) a/both channel(s).
     *
     * Available since Asterisk 1.4.
     *   Channel - Used to specify the channel to mute.
     *   Direction - Which part of the recording to mute: read, write or both (from channel, to channel or both channels).
     *   State - Turn mute on or off : 1 to turn on, 0 to turn off.
     *
     * @author Adrian Videanu
     * @since 0.3
     * @version $Id$
     */


    class PauseMixMonitorAction : public AbstractManagerAction {
    public:


        PauseMixMonitorAction();


        PauseMixMonitorAction(const std::string& dir, int st);

        virtual ~PauseMixMonitorAction();



        const std::string& getChannel() const;


        void setChannel(const std::string& channel);


        int getState() const;


        void setState(int state);


        const std::string& getDirection() const;


        void setDirection(const std::string& direction);
    };

} //NAMESPACE

#endif /*PAUSEMIXMONITORACTION_H_*/
