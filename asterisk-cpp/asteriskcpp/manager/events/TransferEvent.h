/*
 * TransferEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef TRANSFEREVENT_H_
#define TRANSFEREVENT_H_

#include "ManagerEvent.h"

namespace asteriskcpp {

    /**
     * A TransferEvent is triggered when a SIP channel is transfered.<p>
     * It is implemented in <code>channels/chan_sip.c</code>.<p>
     * Available since Asterisk 1.6 for SIP channels.
     *
     * @since 1.0.0
     */
    class TransferEvent : public ManagerEvent {
    public:
        TransferEvent(const std::string & values);
        virtual ~TransferEvent();

        /**
         * Returns the name of the transfering channel.
         *
         * @return channel the name of the transfering channel.
         */
        const std::string& getChannel() const;

        /**
         * Returns the unique id of the transfering channel.
         *
         * @return the unique id of the transfering channel.
         */
        const std::string& getUniqueId() const;

        /**
         * Returns the transfer method. Currently this is always "SIP".
         *
         * @return the transfer method ("SIP").
         */
        const std::string& getTransferMethod() const;

        /**
         * Returns whether this is an attended or a blind transfer. Possible values are
         * "Attended" and "Blind".
         *
         * @return "Attended" if this an attended transfer, "Blind" if it is a blind transfer.
         * @see #TRANSFER_TYPE_ATTENDED
         * @see #TRANSFER_TYPE_BLIND
         */
        const std::string& getTransferType() const;

        /**
         * Checks whether this is an attended transfer or not.
         *
         * @return <code>true</code> if this is an attended transfer, <code>false</code> if not.
         */
        bool isAttended() const;

        /**
         * Checks whether this is a blind transfer or not.
         *
         * @return <code>true</code> if this is an blind transfer, <code>false</code> if not.
         */
        bool isBlind() const;

        /**
         * Returns the SIP call id.
         *
         * @return the SIP call id.
         */
        const std::string& getSipCallId() const;

        /**
         * Returns the name of the target channel.
         *
         * @return the name of the target channel.
         */
        const std::string& getTargetChannel() const;

        /**
         * Returns the unique id of the target channel.
         *
         * @return the unique id of the target channel.
         */
        const std::string& getTargetUniqueId() const;

        /**
         * Returns the target extension the call is transfered to. This is only available for
         * blind transfers. If the call is transfered to a parking extension, the parking extension
         * is returned.
         *
         * @return the target extension the call is transfered to or <code>null</code> for attended
         *         transfers.
         */
        const std::string& getTransferExten() const;

        /**
         * Returns the target context (in the dialplan) the call is transfered to. This is only available for
         * blind transfers. If the call is transfered to a parking extension <code>null</code> is returned.
         *
         * @return the target context the call is transfered to or <code>null</code> for attended
         *         transfers and transfers to a parking extension.
         */
        const std::string& getTransferContext() const;

        /**
         * Returns whether this is a transfer to a parking extension.
         *
         * @return bool.TRUE if this is a transfer to a parking extension, <code>null</code> otherwise.
         */
        bool getTransfer2Parking() const;

        /**
         * Convenience method to check if this is a transfer to a parking extension.
         *
         * @return <code>true</code> if this is a transfer to a parking extension, <code>false</code> otherwise.
         */
        bool isParking() const;
    };

} /* namespace asteriskcpp */
#endif /* TRANSFEREVENT_H_ */
