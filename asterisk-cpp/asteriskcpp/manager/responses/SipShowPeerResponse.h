/* 
 * File:   SipShowPeerResponse.h
 * Author: augcampos
 *
 * Created on July 16, 2013, 5:05 AM
 */

#ifndef SIPSHOWPEERRESPONSE_H
#define	SIPSHOWPEERRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Response to a {@link org.asteriskjava.manager.action.SipShowPeerAction}.
     *
     * @author srt
     * @version $Id$
     * @since 1.0.0
     * @see org.asteriskjava.manager.action.SipShowPeerAction
     */
    class SipShowPeerResponse : public ManagerResponse {
    public:
        SipShowPeerResponse(const std::string& responseStr);
        virtual ~SipShowPeerResponse();

        const std::string& getChannelType() const;
        const std::string& getObjectName() const;
        const std::string& getChanObjectType() const;
        bool getSecretExist() const;
        bool getMd5SecretExist() const;
        bool getRemoteSecretExist() const;
        const std::string& getContext() const;
        const std::string& getLanguage() const;
        const std::string& getAccountCode() const;
        const std::string& getAmaFlags() const;
        const std::string& getCidCallingPres() const;
        const std::string& getSipFromUser() const;
        const std::string& getSipFromDomain() const;
        const std::string& getCallGroup() const;
        const std::string& getPickupGroup() const;
        const std::string& getVoiceMailbox() const;
        const std::string& getTransferMode() const;
        int getLastMsgsSent() const;
        int getCallLimit() const;
        int getBusyLevel() const;
        int getMaxCallBr() const;
        bool getDynamic() const;
        const std::string& getCallerId() const;
        long getRegExpire() const;
        bool getSipAuthInsecure() const;
        bool getSipNatSupport() const;
        bool getAcl() const;
        bool getSipT38support() const;
        const std::string& getSipT38ec() const;
        int getSipT38MaxDtgrm() const;
        bool getSipDirectMedia() const;
        bool getSipCanReinvite() const;
        bool getSipPromiscRedir() const;
        bool getSipUserPhone() const;
        bool getSipVideoSupport() const;
        bool getSipTextSupport() const;
        const std::string& getSipSessTimers() const;
        const std::string& getSipSessRefresh() const;
        int getSipSessExpires() const;
        int getSipSessMin() const;
        const std::string& getSipDtmfMode() const;
        const std::string& getToHost() const;
        const std::string& getAddressIp() const;
        int getAddressPort() const;
        const std::string& getDefaultAddrIp() const;
        int getDefaultAddrPort() const;
        const std::string& getDefaultUsername() const;
        const std::string& getRegExtension() const;
        const std::string& getCodecs() const;
        const std::string& getCodecOrder() const;
        const std::string& getStatus() const;
        const std::string& getSipUserAgent() const;
        const std::string& getParkingLot() const;
        const std::string& getRegContact() const;
        int getQualifyFreq() const;
        //std::map<const std::string, const std::string>
        const std::string getChanVariable() const;
    private:

    };

}
#endif	/* SIPSHOWPEERRESPONSE_H */

