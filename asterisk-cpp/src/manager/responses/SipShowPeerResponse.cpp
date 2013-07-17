/* 
 * File:   SipShowPeerResponse.cpp
 * Author: augcampos
 * 
 * Created on July 16, 2013, 5:05 AM
 */

#include "SipShowPeerResponse.h"

namespace asteriskcpp {

    SipShowPeerResponse::SipShowPeerResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    SipShowPeerResponse::~SipShowPeerResponse() {
    }

    const std::string& getChannelType() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getObjectName() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getChanObjectType() const {
        return (getGetterValue(__FUNCTION__));
    }

    bool getSecretExist() const {
        return (getGetterValue(__FUNCTION__));
    }

    bool getMd5SecretExist() const {
        return (getGetterValue(__FUNCTION__));
    }

    bool getRemoteSecretExist() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getLanguage() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getAccountCode() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getAmaFlags() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getCidCallingPres() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getSipFromUser() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getSipFromDomain() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getCallGroup() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getPickupGroup() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getVoiceMailbox() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getTransferMode() const {
        return (getGetterValue(__FUNCTION__));
    }

    int getLastMsgsSent() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int getCallLimit() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int getBusyLevel() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int getMaxCallBr() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    bool getDynamic() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    const std::string& getCallerId() const {
        return (getGetterValue(__FUNCTION__));
    }

    long getRegExpire() const {
        return (getGetterValue<long>(__FUNCTION__));
    }

    bool getSipAuthInsecure() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getSipNatSupport() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getAcl() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getSipT38support() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    const std::string& getSipT38ec() const {
        return (getGetterValue(__FUNCTION__));
    }

    int getSipT38MaxDtgrm() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    bool getSipDirectMedia() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getSipCanReinvite() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getSipPromiscRedir() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getSipUserPhone() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getSipVideoSupport() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool getSipTextSupport() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    const std::string& getSipSessTimers() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getSipSessRefresh() const {
        return (getGetterValue(__FUNCTION__));
    }

    int getSipSessExpires() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int getSipSessMin() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& getSipDtmfMode() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getToHost() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getAddressIp() const {
        return (getGetterValue(__FUNCTION__));
    }

    int getAddressPort() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& getDefaultAddrIp() const {
        return (getGetterValue(__FUNCTION__));
    }

    int getDefaultAddrPort() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getDefaultUsername() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getRegExtension() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getCodecs() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getCodecOrder() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getStatus() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getSipUserAgent() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getParkingLot() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& getRegContact() const {
        return (getGetterValue(__FUNCTION__));
    }

    int getQualifyFreq() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    std::map<const std::string, const std::string> getChanVariable() const {
        return (getGetterValue(__FUNCTION__));
    }
}