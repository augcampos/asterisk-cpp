/*
 * VoicemailUserEntryEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef VOICEMAILUSERENTRYEVENT_H_
#define VOICEMAILUSERENTRYEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A VoicemailUserEntryCompleteEvent is triggered in response to a VoicemailUsersListAction
     * and contains the details about a voicemail user.<p>
     * It is implemented in <code>apps/app_voicemail.c</code>
     * <p/>
     * Available since Asterisk 1.6
     *
     * @see org.asteriskjava.manager.event.VoicemailUserEntryCompleteEvent
     * @see org.asteriskjava.manager.action.VoicemailUsersListAction
     * @since 1.0.0
     */
    class VoicemailUserEntryEvent : public ResponseEvent {
    public:
        VoicemailUserEntryEvent(const std::string & values);
        virtual ~VoicemailUserEntryEvent();

        /**
         * Returns the voicemail context.
         *
         * @return the voicemail context.
         */
        const std::string& getVmContext() const;

        /**
         * Returns the mailbox id. The mailbox is unique within the voicemail context.
         *
         * @return the mailbox id.
         */
        const std::string& getVoicemailbox() const;

        /**
         * Returns the full name of the voicemail user that is used for the directory application.
         *
         * @return the full name of the voicemail user.
         */
        const std::string& getFullname() const;

        /**
         * Returns the email address of the voicemail user.
         *
         * @return the email address of the voicemail user.
         */
        const std::string& getEmail() const;

        /**
         * Returns the email adress of pager of the voicemail user.
         * This email will not receive attachments.
         *
         * @return the email adress of pager of the voicemail user.
         */
        const std::string& getPager() const;

        /**
         * Returns the email address used for the "from" header when sending notification emails.
         *
         * @return the email address used for the "from" header when sending notification emails.
         */
        const std::string& getServerEmail() const;

        /**
         * Returns the custom mail command used to send notifications to the voicemail user.
         *
         * @return the custom mail command used to send notifications to the voicemail user.
         */
        const std::string& getMailCommand() const;

        const std::string& getLanguage() const;

        const std::string& getTimezone() const;

        /**
         * Returns the dialplan context used by the "return phone call" feature in the advanced
         * voicemail features menu.
         *
         * @return the dialplan context used by the "return phone call" feature in the advanced
         *         voicemail features menu.
         */
        const std::string& getCallback() const;

        /**
         * Returns the dialplan context used by the "place an outgoing call" feature in the advanced
         * voicemail features menu.
         *
         * @return the dialplan context used by the "place an outgoing call" feature in the advanced
         *         voicemail features menu.
         */
        const std::string& getDialout() const;

        const std::string& getUniqueId() const;

        /**
         * Returns the dialplan context the user is dropped into after he has pressed * or 0 to exit voicemail.
         *
         * @return the dialplan context the user is dropped into after he has pressed * or 0 to exit voicemail.
         */
        const std::string& getExitContext() const;

        int getSayDurationMinimum() const;

        bool getSayEnvelope() const;

        bool getSayCid() const;

        /**
         * Returns whether Asterisk copies a voicemail message to an audio file and sends it to the user as an
         * attachment in an eemail voicemail notification message.
         *
         * @return Booelan.TRUE if message will be attached, bool.FALSE if not, <code>null</code> if unset.
         */
        bool getAttachMessage() const;

        const std::string& getAttachmentFormat() const;

        /**
         * Returns whether messages will be deleted from the voicemailbox (after having been emailed).
         *
         * @return Booelan.TRUE if messages will be deleted from the voicemailbox, bool.FALSE if not,
         *         <code>null</code> if unset.
         */
        bool getDeleteMessage() const;

        /**
         * Returns the volume gain used for voicemails sent via email.
         *
         * @return the volume gain used for voicemails sent via email.
         */
        double getVolumeGain() const;

        bool getCanReview() const;

        bool getCallOperator() const;

        /**
         * Returns the maximum number of messages per folder. 0 indicated unlimited.
         *
         * @return the maximum number of messages per folder or 0 for unlimited.
         */
        int getMaxMessageCount() const;

        /**
         * Returns the maximum duration per message for voicemails in this mailbox.
         *
         * @return the maximum duration in seconds.
         */
        int getMaxMessageLength() const;

        int getNewMessageCount() const;

        /**
         * Returns the number of old ("read" or listened to) messages for this voicemail user.<p>
         * This property is only available if the IMAP storage backend is used.
         *
         * @return the number of old messages for this voicemail user.
         */
        int getOldMessageCount() const;

        /**
         * Returns the username of the IMAP account associated with this mailbox.<p>
         * This property is only available if the IMAP storage backend is used.
         *
         * @return the username of the IMAP account associated with this mailbox.
         */
        const std::string& getImapUser() const;
    };

} /* namespace asteriskcpp */
#endif /* VOICEMAILUSERENTRYEVENT_H_ */
