#pragma once

class CCitadelPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    EPlayerPlayState m_ePlayState; // offset 0x7F0, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_iGuidedBotMatchLastHits; // offset 0x7F4, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchOrbsSecured; // offset 0x7F8, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchOrbsDenied; // offset 0x7FC, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchDamageToGuardians; // offset 0x800, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchDamageToPlayers; // offset 0x804, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchDamageTaken; // offset 0x808, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchNetWorth; // offset 0x80C, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchModsPurchased; // offset 0x810, size 0x4, align 4 | MNetworkEnable
    int32 m_iGuidedBotMatchAbilityUpgrades; // offset 0x814, size 0x4, align 4 | MNetworkEnable
    float32 m_flGuideBotMatchLastTaskNagVO; // offset 0x818, size 0x4, align 4 | MNetworkEnable
    float32 m_flGuideBotLastTimeTaskCompleted; // offset 0x81C, size 0x4, align 4 | MNetworkEnable
    EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // offset 0x820, size 0x4, align 4 | MNetworkEnable
    int32 m_nCurrentRank; // offset 0x824, size 0x4, align 4 | MNetworkEnable
    int8 m_nAssignedLane; // offset 0x828, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    int8 m_nOriginalLaneAssignment; // offset 0x829, size 0x1, align 1 | MNetworkEnable
    bool m_bBotDisconnectTakeover; // offset 0x82A, size 0x1, align 1 | MNetworkEnable
    bool m_bInTeamChat; // offset 0x82B, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bInPartyChat; // offset 0x82C, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bLaneSwapLocked; // offset 0x82D, size 0x1, align 1 | MNetworkEnable
    char _pad_082E[0x2]; // offset 0x82E
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRequests; // offset 0x830, size 0x18, align 8 | MNetworkEnable
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRejects; // offset 0x848, size 0x18, align 8 | MNetworkEnable
    C_NetworkUtlVectorBase< int32 > m_vecMutedPlayers; // offset 0x860, size 0x18, align 8 | MNetworkEnable
    bool m_bCommsRestricted; // offset 0x878, size 0x1, align 1 | MNetworkEnable
    char _pad_0879[0x33]; // offset 0x879
    CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // offset 0x8AC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_08B0[0x40]; // offset 0x8B0
    PlayerDataGlobal_t m_PlayerDataGlobal; // offset 0x8F0, size 0x330, align 255 | MNetworkEnable MNotSaved
    int8 m_nDeathReplayAvailable; // offset 0xC20, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // offset 0xC21, size 0x1, align 255 | MNetworkEnable
    bool m_bHasCheckedFriendName; // offset 0xC22, size 0x1, align 1
    char _pad_0C23[0x5]; // offset 0xC23
    CUtlString m_sFriendName; // offset 0xC28, size 0x8, align 8
};
