/* 
 * File:   SipShowPeerResponse.cpp
 * Author: augcampos
 * 
 * Created on July 16, 2013, 5:05 AM
 */

#include "asteriskcpp/manager/responses/SipShowPeerResponse.h"

namespace asteriskcpp {

    SipShowPeerResponse::SipShowPeerResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    SipShowPeerResponse::~SipShowPeerResponse() {
    }

    const std::string& SipShowPeerResponse::getChannelType() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getObjectName() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getChanObjectType() const {
        return (getGetterValue(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSecretExist() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getMd5SecretExist() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getRemoteSecretExist() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getContext() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getLanguage() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getAccountCode() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getAmaFlags() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getCidCallingPres() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getSipFromUser() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getSipFromDomain() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getCallGroup() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getPickupGroup() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getVoiceMailbox() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getTransferMode() const {
        return (getGetterValue(__FUNCTION__));
    }

    int SipShowPeerResponse::getLastMsgsSent() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int SipShowPeerResponse::getCallLimit() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int SipShowPeerResponse::getBusyLevel() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int SipShowPeerResponse::getMaxCallBr() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getDynamic() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getCallerId() const {
        return (getGetterValue(__FUNCTION__));
    }

    long SipShowPeerResponse::getRegExpire() const {
        return (getGetterValue<long>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipAuthInsecure() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipNatSupport() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getAcl() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipT38support() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getSipT38ec() const {
        return (getGetterValue(__FUNCTION__));
    }

    int SipShowPeerResponse::getSipT38MaxDtgrm() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipDirectMedia() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipCanReinvite() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipPromiscRedir() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipUserPhone() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipVideoSupport() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    bool SipShowPeerResponse::getSipTextSupport() const {
        return (getGetterValue<bool>(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getSipSessTimers() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getSipSessRefresh() const {
        return (getGetterValue(__FUNCTION__));
    }

    int SipShowPeerResponse::getSipSessExpires() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    int SipShowPeerResponse::getSipSessMin() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getSipDtmfMode() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getToHost() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getAddressIp() const {
        return (getGetterValue(__FUNCTION__));
    }

    int SipShowPeerResponse::getAddressPort() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getDefaultAddrIp() const {
        return (getGetterValue(__FUNCTION__));
    }

    int SipShowPeerResponse::getDefaultAddrPort() const {
        return (getGetterValue<int>(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getDefaultUsername() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getRegExtension() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getCodecs() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getCodecOrder() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getStatus() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getSipUserAgent() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getParkingLot() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& SipShowPeerResponse::getRegContact() const {
        return (getGetterValue(__FUNCTION__));
    }

    int SipShowPeerResponse::getQualifyFreq() const {
        return (getGetterValue<int>(__FUNCTION__));
    }
    
    //std::map<const std::string, const std::string>
    const std::string SipShowPeerResponse::getChanVariable() const {
        return (getGetterValue(__FUNCTION__));
    }
}