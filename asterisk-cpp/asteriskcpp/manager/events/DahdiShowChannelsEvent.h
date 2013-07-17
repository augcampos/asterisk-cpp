/*
 * DahdiShowChannelsEvent.h
 *
 *  Created on: Feb 15, 2012
 *      Author: augcampos
 */

#ifndef DAHDISHOWCHANNELSEVENT_H_
#define DAHDISHOWCHANNELSEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A DahdiShowChannelsEvent is triggered in response to a DahdiShowChannelsAction and shows the state of
     * a Dahdi channel.
     *
     * @see org.asteriskjava.manager.action.DahdiShowChannelsAction
     *
     * @author augcampos
     * @version $Id$
     */
    class DahdiShowChannelsEvent : public ResponseEvent {
    public:
        DahdiShowChannelsEvent(const std::string& values);
        virtual ~DahdiShowChannelsEvent();

        const std::string& getAccountcode() const;
        const std::string& getChannel() const;
        int getDahdichannel() const;
        const std::string& getSignallingcode() const;
        const std::string& getUniqueid() const;

        /**
         * Returns the signalling of this Dahdi channel.<p>
         * Possible values are:
         * <ul>
         * <li>E & M Immediate</li>
         * <li>E & M Wink</li>
         * <li>E & M E1</li>
         * <li>Feature Group D (DTMF)</li>
         * <li>Feature Group D (MF)</li>
         * <li>Feature Group B (MF)</li>
         * <li>E911 (MF)</li>
         * <li>FXS Loopstart</li>
         * <li>FXS Groundstart</li>
         * <li>FXS Kewlstart</li>
         * <li>FXO Loopstart</li>
         * <li>FXO Groundstart</li>
         * <li>FXO Kewlstart</li>
         * <li>PRI Signalling</li>
         * <li>R2 Signalling</li>
         * <li>SF (Tone) Signalling Immediate</li>
         * <li>SF (Tone) Signalling Wink</li>
         * <li>SF (Tone) Signalling with Feature Group D (DTMF)</li>
         * <li>SF (Tone) Signalling with Feature Group D (MF)</li>
         * <li>SF (Tone) Signalling with Feature Group B (MF)</li>
         * <li>GR-303 Signalling with FXOKS</li>
         * <li>GR-303 Signalling with FXSKS</li>
         * <li>Pseudo Signalling</li>
         * </ul>
         */
        const std::string& getSignalling() const;

        /**
         * Returns the context of this Dahdi channel as defined in <code>chan_Dahdi.conf</code>.
         */
        const std::string& getContext() const;

        /**
         * Returns whether dnd (do not disturb) is enabled for this Dahdi channel.
         *
         * @return bool.TRUE if dnd is enabled, bool.FALSE if it is disabled,
         *         <code>null</code> if not set.
         * @since 0.3
         */
        bool getDnd() const;

        /**
         * Returns the alarm state of this Dahdi channel.<p>
         * This may be one of
         * <ul>
         * <li>Red Alarm</li>
         * <li>Yellow Alarm</li>
         * <li>Blue Alarm</li>
         * <li>Recovering</li>
         * <li>Loopback</li>
         * <li>Not Open</li>
         * <li>No Alarm</li>
         * </ul>
         */
        const std::string& getAlarm() const;
    };

} /* namespace asteriskcpp */
#endif /* DAHDISHOWCHANNELSEVENT_H_ */
