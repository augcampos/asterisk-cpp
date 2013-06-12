/*
 * DtmfEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef DTMFEVENT_H_
#define DTMFEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A DtmfEvent is triggered each time a DTMF digit is sent or received on a
     * channel.<p>
     * To support variable-length DTMF Asterisk (since 1.4.0) interally uses two different frames
     * for DTMF releated events (<code>AST_FRAME_DTMF_BEGIN</code> and <code>AST_FRAME_DTMF_END</code>).
     * Before 1.4.0 Asterisk only used one frame (<code>AST_FRAME_DTMF</code>) which is now an alias for
     * <code>AST_FRAME_DTMF_END</code>.<br>
     * Many other systems and devices (like mobile phone providers) do not support variable-length DTMF.
     * In these cases you will only see <code>AST_FRAME_DTMF_END</code> frames in Asterisk.<br>
     * When building DTMF aware applications you should not rely on <code>AST_FRAME_DTMF_BEGIN</code>.
     * Generally it is safe to just ignore them and only react on <code>AST_FRAME_DTMF_END</code> frames.<br>
     * To check whether an DtmfEvent represents an <code>AST_FRAME_DTMF_BEGIN</code> or
     * <code>AST_FRAME_DTMF_END</code> frame use the {@link #isBegin()} and {@link #isEnd()} methods.
     * <p/>
     * You can find more information on how Asterisk handles DTMF in the
     * <a href="http://www.voip-info.org/wiki/view/Asterisk+DTMF">DTMF article at voip-info.org</a><p>
     * It is implemented in <code>main/channel.c</code>.<p>
     * Available since Asterisk 1.6
     *
     * @since 1.0.0
     */
    class DtmfEvent : public ManagerEvent {
    public:

        DtmfEvent(const std::string & values) :
        ManagerEvent(values) {
        }

        virtual ~DtmfEvent() {
        }

        /**
         * Returns the name of the channel the DTMF digit was sent or received on.
         * The channel name is of the form "Zap/&lt;channel number&gt;".
         *
         * @return the channel name.
         */
        const std::string& getChannel() const {
            return (getProperty("Channel"));
        }

        /**
         * Returns the DTMF digit that was sent or received.
         *
         * @return the DTMF digit that was sent or received.
         */
        const std::string& getDigit() const {
            return (getProperty("Digit"));
        }

        /**
         * Returns whether the DTMF digit was sent or received.<p>
         * Possible values are:
         * <ul>
         * <li>Received</li>
         * <li>Sent</li>
         * </ul>
         *
         * @return "Reveived" if the DTMF was received (sent from the device to Asterisk) or "Sent" if the DTMF
         *         digit was sent (sent from Asterisk to the device).
         * @see #DIRECTION_RECEIVED
         * @see #DIRECTION_SENT
         */
        const std::string& getDirection() const {
            return (getProperty("Direction"));
        }

        /**
         * Returns whether this event represents an <code>AST_FRAME_DTMF_BEGIN</code> frame.<p>
         * Gerally your application will want to ignore begin events. You will only need
         * them if you want to make use of the duration a DTMF key was pressed.<p>
         * Note that there will be DTMF end events without a corresponding begin event
         * as not all systems (including Asterisk prior to 1.4.0) support variable-length
         * DTMF.
         *
         * @return <code>true</code> if this is a DTMF begin event (key pressed),
         *         <code>false</code> otherwise.
         */
        bool isBegin() const {
            //TODO: Implement
            return (false);
        }

        /**
         * Returns whether this event represents an <code>AST_FRAME_DTMF_END</code> frame.<p>
         * DTMF information received from systems that do not support variable-length
         * DTMF you will only see DTMF end events.
         *
         * @return <code>true</code> if this is a DTMF end event (key released),
         *         <code>false</code> otherwise.
         */
        bool isEnd() const {
            //TODO: Implement
            return (false);
        }

        /**
         * Returns whether the DTMF digit was received by Asterisk (sent from the device to Asterisk).
         *
         * @return <code>true</code> if the DTMF digit was received by Asterisk,
         *         <code>false</code> otherwise.
         * @see #getDirection()
         */
        bool isReceived() const {
            return (getDirection().compare("Received") == 0);
        }

        /**
         * Returns whether the DTMF digit was sent from Asterisk to the device.
         *
         * @return <code>true</code> if the DTMF digit was sent from Asterisk to the device,
         *         <code>false</code> otherwise.
         * @see #getDirection()
         */
        bool isSent() const {
            return (getDirection().compare("Sent") == 0);
        }

    };

}

#endif /* DTMFEVENT_H_ */
