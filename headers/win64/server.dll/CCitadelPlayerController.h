#pragma once

class CCitadelPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x7D0]; // offset 0x0
    EPlayerPlayState m_ePlayState; // offset 0x7D0, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_iGuidedBotMatchLastHits; // offset 0x7D4, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchOrbsSecured; // offset 0x7D8, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchOrbsDenied; // offset 0x7DC, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchDamageToGuardians; // offset 0x7E0, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchDamageToPlayers; // offset 0x7E4, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchDamageTaken; // offset 0x7E8, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchNetWorth; // offset 0x7EC, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchModsPurchased; // offset 0x7F0, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchAbilityUpgrades; // offset 0x7F4, size 0x4, align 4 | MNetworkEnable
    float32 m_flGuideBotMatchLastTaskNagVO; // offset 0x7F8, size 0x4, align 4 | MNetworkEnable
    float32 m_flGuideBotLastTimeTaskCompleted; // offset 0x7FC, size 0x4, align 4 | MNetworkEnable
    EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // offset 0x800, size 0x4, align 4 | MNetworkEnable
    int32 m_nCurrentRank; // offset 0x804, size 0x4, align 4 | MNetworkEnable
    int8 m_nAssignedLane; // offset 0x808, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    int8 m_nOriginalLaneAssignment; // offset 0x809, size 0x1, align 1 | MNetworkEnable
    bool m_bBotDisconnectTakeover; // offset 0x80A, size 0x1, align 1 | MNetworkEnable
    bool m_bInTeamChat; // offset 0x80B, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bInPartyChat; // offset 0x80C, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bLaneSwapLocked; // offset 0x80D, size 0x1, align 1 | MNetworkEnable
    char _pad_080E[0x2]; // offset 0x80E
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRequests; // offset 0x810, size 0x18, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRejects; // offset 0x828, size 0x18, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< int32 > m_vecMutedPlayers; // offset 0x840, size 0x18, align 8 | MNetworkEnable
    bool m_bCommsRestricted; // offset 0x858, size 0x1, align 1 | MNetworkEnable
    char _pad_0859[0x12B]; // offset 0x859
    CHandle< CCitadelPlayerPawn > m_hHeroPawn; // offset 0x984, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_0988[0x40]; // offset 0x988
    PlayerDataGlobal_t m_PlayerDataGlobal; // offset 0x9C8, size 0x340, align 255 | MNetworkEnable MNotSaved
    int8 m_nDeathReplayAvailable; // offset 0xD08, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // offset 0xD09, size 0x1, align 255 | MNetworkEnable
    char _pad_0D0A[0x2]; // offset 0xD0A
    GameTime_t m_flLastCommsTime; // offset 0xD0C, size 0x4, align 255
    GameTime_t m_flNextAllowedCommsTime; // offset 0xD10, size 0x4, align 255
    GameTime_t m_flLastFailedCommsTime; // offset 0xD14, size 0x4, align 255
    CUtlVector< GameTime_t > m_vecRecentCommAttempts; // offset 0xD18, size 0x18, align 8
    int32 m_nTotalCommsAttempted; // offset 0xD30, size 0x4, align 4
    int32 m_nGuideBotNumTasksComplete; // offset 0xD34, size 0x4, align 4
};
