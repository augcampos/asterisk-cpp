/*
 * ZapShowChannelsEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef ZAPSHOWCHANNELSEVENT_H_
#define ZAPSHOWCHANNELSEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A ZapShowChannelsEvent is triggered in response to a ZapShowChannelsAction and shows the state of
     * a zap channel.
     *
     * @see org.asteriskjava.manager.action.ZapShowChannelsAction
     *
     */
    class ZapShowChannelsEvent : public ResponseEvent {
    public:
        ZapShowChannelsEvent(const std::string & values);
        virtual ~ZapShowChannelsEvent();

        /**
         * Returns the number of this zap channel.
         */
        int getChannel() const;

        /**
         * Returns the signalling of this zap channel.<p>
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
         * Returns the context of this zap channel as defined in <code>zapata.conf</code>.
         */
        const std::string& getContext() const;

        /**
         * Returns whether dnd (do not disturb) is enabled for this zap channel.
         *
         * @return bool.TRUE if dnd is enabled, bool.FALSE if it is disabled,
         *         <code>null</code> if not set.
         * @since 0.3
         */
        bool getDnd() const;

        /**
         * Returns the alarm state of this zap channel.<p>
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
#endif /* ZAPSHOWCHANNELSEVENT_H_ */
