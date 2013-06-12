/*
 * EventBuilder.cpp
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/EventBuilder.h"
#include <stdlib.h>
#include <map>
#include "asteriskcpp/utils/StringUtils.h"

#include "asteriskcpp/manager/Events.hpp"

namespace asteriskcpp {

    EventBuilder::EventBuilder() {
        RegisterClass<AgentCallbackLoginEvent>();
        RegisterClass<AgentCallbackLogoffEvent>();
        RegisterClass<AgentCalledEvent>();
        RegisterClass<AgentCompleteEvent>();
        RegisterClass<AgentConnectEvent>();
        RegisterClass<AgentDumpEvent>();
        RegisterClass<AgentLoginEvent>();
        RegisterClass<AgentLogoffEvent>();
        RegisterClass<AgentRingNoAnswer>();
        RegisterClass<AgentsCompleteEvent>();
        RegisterClass<AgentsEvent>();
        RegisterClass<AgiExecEvent>();
        RegisterClass<AlarmClearEvent>();
        RegisterClass<AlarmEvent>();
        RegisterClass<AsyncAgiEvent>();
        RegisterClass<BridgeEvent>();
        RegisterClass<BridgeExecEvent>();
        RegisterClass<CdrEvent>();
        RegisterClass<ChannelReloadEvent>();
        RegisterClass<ChannelUpdateEvent>();
        RegisterClass<ConfbridgeEndEvent>();
        RegisterClass<ConfbridgeJoinEvent>();
        RegisterClass<ConfbridgeLeaveEvent>();
        RegisterClass<ConfbridgeListCompleteEvent>();
        RegisterClass<ConfbridgeListEvent>();
        RegisterClass<ConfbridgeListRoomsCompleteEvent>();
        RegisterClass<ConfbridgeListRoomsEvent>();
        RegisterClass<ConfbridgeStartEvent>();
        RegisterClass<ConfbridgeTalkingEvent>();
        RegisterClass<ConnectEvent>();
        RegisterClass<CoreShowChannelEvent>();
        RegisterClass<CoreShowChannelsCompleteEvent>();
        RegisterClass<DahdiShowChannelsCompleteEvent>();
        RegisterClass<DahdiShowChannelsEvent>();
        RegisterClass<DbGetResponseEvent>();
        RegisterClass<DialEvent>();
        RegisterClass<DisconnectEvent>();
        RegisterClass<DndStateEvent>();
        RegisterClass<DtmfEvent>();
        RegisterClass<ExtensionStatusEvent>();
        RegisterClass<FaxDocumentStatusEvent>();
        RegisterClass<FaxReceivedEvent>();
        RegisterClass<FaxStatusEvent>();
        RegisterClass<FullyBootedEvent>();
        RegisterClass<HangupEvent>();
        RegisterClass<HoldEvent>();
        RegisterClass<HoldedCallEvent>();
        RegisterClass<JabberEventEvent>();
        RegisterClass<JitterBufStatsEvent>();
        RegisterClass<JoinEvent>();
        RegisterClass<LeaveEvent>();
        RegisterClass<LinkEvent>();
        RegisterClass<ListDialplanEvent>();
        RegisterClass<LogChannelEvent>();
        RegisterClass<MasqueradeEvent>();
        RegisterClass<MeetMeEndEvent>();
        RegisterClass<MeetMeJoinEvent>();
        RegisterClass<MeetMeLeaveEvent>();
        RegisterClass<MeetMeMuteEvent>();
        RegisterClass<MeetMeTalkingEvent>();
        RegisterClass<MeetMeStopTalkingEvent>();
        RegisterClass<MeetMeTalkingRequestEvent>();
        RegisterClass<MessageWaitingEvent>();
        RegisterClass<ModuleLoadReportEvent>();
        RegisterClass<MonitorStartEvent>();
        RegisterClass<MonitorStopEvent>();
        RegisterClass<MusicOnHoldEvent>();
        RegisterClass<NewAccountCodeEvent>();
        RegisterClass<NewCallerIdEvent>();
        RegisterClass<NewChannelEvent>();
        RegisterClass<NewExtenEvent>();
        RegisterClass<NewStateEvent>();
        RegisterClass<OriginateFailureEvent>();
        RegisterClass<OriginateResponseEvent>();
        RegisterClass<OriginateSuccessEvent>();
        RegisterClass<ParkedCallEvent>();
        RegisterClass<ParkedCallGiveUpEvent>();
        RegisterClass<ParkedCallTimeOutEvent>();
        RegisterClass<ParkedCallsCompleteEvent>();
        RegisterClass<PeerEntryEvent>();
        RegisterClass<PeerStatusEvent>();
        RegisterClass<PeerlistCompleteEvent>();
        RegisterClass<PriEventEvent>();
        RegisterClass<ProtocolIdentifierReceivedEvent>();
        RegisterClass<QueueCallerAbandonEvent>();
        RegisterClass<QueueEntryEvent>();
        RegisterClass<QueueEvent>();
        RegisterClass<QueueMemberAddedEvent>();
        RegisterClass<QueueMemberEvent>();
        RegisterClass<QueueMemberPausedEvent>();
        RegisterClass<QueueMemberPenaltyEvent>();
        RegisterClass<QueueMemberRemovedEvent>();
        RegisterClass<QueueMemberStatusEvent>();
        RegisterClass<QueueParamsEvent>();
        RegisterClass<QueueStatusCompleteEvent>();
        RegisterClass<QueueSummaryCompleteEvent>();
        RegisterClass<QueueSummaryEvent>();
        RegisterClass<ReceiveFaxEvent>();
        RegisterClass<RegistrationsCompleteEvent>();
        RegisterClass<RegistryEntryEvent>();
        RegisterClass<RegistryEvent>();
        RegisterClass<ReloadEvent>();
        RegisterClass<RenameEvent>();
        //RegisterClass<ResponseEvent>();
        RegisterClass<RtcpReceivedEvent>();
        RegisterClass<RtcpSentEvent>();
        RegisterClass<RtpReceiverStatEvent>();
        RegisterClass<RtpSenderStatEvent>();
        RegisterClass<SendFaxEvent>();
        RegisterClass<SendFaxStatusEvent>();
        RegisterClass<ShowDialplanCompleteEvent>();
        RegisterClass<ShutdownEvent>();
        RegisterClass<SkypeAccountStatusEvent>();
        RegisterClass<SkypeBuddyEntryEvent>();
        RegisterClass<SkypeBuddyListCompleteEvent>();
        RegisterClass<SkypeBuddyStatusEvent>();
        RegisterClass<SkypeChatMessageEvent>();
        RegisterClass<SkypeLicenseEvent>();
        RegisterClass<SkypeLicenseListCompleteEvent>();
        RegisterClass<StatusCompleteEvent>();
        RegisterClass<StatusEvent>();
        RegisterClass<T38FaxStatusEvent>();
        RegisterClass<TransferEvent>();
        RegisterClass<UnholdEvent>();
        RegisterClass<UnlinkEvent>();
        RegisterClass<UnparkedCallEvent>();
        //RegisterClass<UserEvent>();
        RegisterClass<VarSetEvent>();
        RegisterClass<VoicemailUserEntryCompleteEvent>();
        RegisterClass<VoicemailUserEntryEvent>();
        RegisterClass<ZapShowChannelsCompleteEvent>();
        RegisterClass<ZapShowChannelsEvent>();

    }

    EventBuilder::~EventBuilder() {

    }

    static std::string extractEventName(const std::string& eventStr) {
        size_t endl = eventStr.find("\r\n");
        if (endl != eventStr.npos) {
            size_t sep = eventStr.find("Event: ");
            if (sep != eventStr.npos) {
                return (eventStr.substr(sep + 7, endl - (sep + 7)));
            }
        }
        return ("");
    }

    ManagerEvent* EventBuilder::buildEvent(const std::string& eventStr) {

        std::string eventName = extractEventName(eventStr);
        if (!eventName.empty()) {

            EnventFactoryMapType::const_iterator it = eventFactoryMap.find(eventName);
            if (it != eventFactoryMap.end()) {
                return ((it->second)->create(eventStr));
            } else {
                LOG_WARN_STR("EVENT:INVALID OR NOT IMPLEMENTED \n" + str2Log(eventStr))
                return (new ManagerEvent(eventStr));
            }
        }

        return (NULL);
    }

} /* namespace asterisk_cpp */

