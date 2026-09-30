#pragma once

class CCitadelPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xD58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    EPlayerPlayState m_ePlayState; // offset 0x7E8, size 0x4, align 4 | MNotSaved
    int32 m_iGuidedBotMatchLastHits; // offset 0x7EC, size 0x4, align 4
    int32 m_iGuidedBotMatchOrbsSecured; // offset 0x7F0, size 0x4, align 4
    int32 m_iGuidedBotMatchOrbsDenied; // offset 0x7F4, size 0x4, align 4
    int32 m_iGuidedBotMatchDamageToGuardians; // offset 0x7F8, size 0x4, align 4
    int32 m_iGuidedBotMatchDamageToPlayers; // offset 0x7FC, size 0x4, align 4
    int32 m_iGuidedBotMatchDamageTaken; // offset 0x800, size 0x4, align 4
    int32 m_iGuidedBotMatchNetWorth; // offset 0x804, size 0x4, align 4
    int32 m_iGuidedBotMatchModsPurchased; // offset 0x808, size 0x4, align 4
    int32 m_iGuidedBotMatchAbilityUpgrades; // offset 0x80C, size 0x4, align 4
    float32 m_flGuideBotMatchLastTaskNagVO; // offset 0x810, size 0x4, align 4
    float32 m_flGuideBotLastTimeTaskCompleted; // offset 0x814, size 0x4, align 4
    EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // offset 0x818, size 0x4, align 4
    int32 m_nCurrentRank; // offset 0x81C, size 0x4, align 4
    int8 m_nAssignedLane; // offset 0x820, size 0x1, align 1
    int8 m_nOriginalLaneAssignment; // offset 0x821, size 0x1, align 1
    bool m_bBotDisconnectTakeover; // offset 0x822, size 0x1, align 1
    bool m_bInTeamChat; // offset 0x823, size 0x1, align 1
    bool m_bInPartyChat; // offset 0x824, size 0x1, align 1
    bool m_bLaneSwapLocked; // offset 0x825, size 0x1, align 1
    char _pad_0826[0x2]; // offset 0x826
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRequests; // offset 0x828, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRejects; // offset 0x840, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecMutedPlayers; // offset 0x858, size 0x18, align 8
    bool m_bCommsRestricted; // offset 0x870, size 0x1, align 1
    bool m_bPriorCommsAbuse; // offset 0x871, size 0x1, align 1
    bool m_bIsNewPlayer; // offset 0x872, size 0x1, align 1
    char _pad_0873[0x1]; // offset 0x873
    uint32 m_unEconAccountID; // offset 0x874, size 0x4, align 4
    char _pad_0878[0x124]; // offset 0x878
    CHandle< CCitadelPlayerPawn > m_hHeroPawn; // offset 0x99C, size 0x4, align 4
    char _pad_09A0[0x40]; // offset 0x9A0
    PlayerDataGlobal_t m_PlayerDataGlobal; // offset 0x9E0, size 0x348, align 255 | MNotSaved
    int8 m_nDeathReplayAvailable; // offset 0xD28, size 0x1, align 1
    CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // offset 0xD29, size 0x1, align 255
    char _pad_0D2A[0x2]; // offset 0xD2A
    GameTime_t m_flLastCommsTime; // offset 0xD2C, size 0x4, align 255
    GameTime_t m_flNextAllowedCommsTime; // offset 0xD30, size 0x4, align 255
    GameTime_t m_flLastFailedCommsTime; // offset 0xD34, size 0x4, align 255
    CUtlVector< GameTime_t > m_vecRecentCommAttempts; // offset 0xD38, size 0x18, align 8
    int32 m_nTotalCommsAttempted; // offset 0xD50, size 0x4, align 4
    int32 m_nGuideBotNumTasksComplete; // offset 0xD54, size 0x4, align 4
};
