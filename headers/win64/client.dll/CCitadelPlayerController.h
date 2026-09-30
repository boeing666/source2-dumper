#pragma once

class CCitadelPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xC60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    EPlayerPlayState m_ePlayState; // offset 0x800, size 0x4, align 4 | MNotSaved
    int32 m_iGuidedBotMatchLastHits; // offset 0x804, size 0x4, align 4
    int32 m_iGuidedBotMatchOrbsSecured; // offset 0x808, size 0x4, align 4
    int32 m_iGuidedBotMatchOrbsDenied; // offset 0x80C, size 0x4, align 4
    int32 m_iGuidedBotMatchDamageToGuardians; // offset 0x810, size 0x4, align 4
    int32 m_iGuidedBotMatchDamageToPlayers; // offset 0x814, size 0x4, align 4
    int32 m_iGuidedBotMatchDamageTaken; // offset 0x818, size 0x4, align 4
    int32 m_iGuidedBotMatchNetWorth; // offset 0x81C, size 0x4, align 4
    int32 m_iGuidedBotMatchModsPurchased; // offset 0x820, size 0x4, align 4
    int32 m_iGuidedBotMatchAbilityUpgrades; // offset 0x824, size 0x4, align 4
    float32 m_flGuideBotMatchLastTaskNagVO; // offset 0x828, size 0x4, align 4
    float32 m_flGuideBotLastTimeTaskCompleted; // offset 0x82C, size 0x4, align 4
    EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // offset 0x830, size 0x4, align 4
    int32 m_nCurrentRank; // offset 0x834, size 0x4, align 4
    int8 m_nAssignedLane; // offset 0x838, size 0x1, align 1
    int8 m_nOriginalLaneAssignment; // offset 0x839, size 0x1, align 1
    bool m_bBotDisconnectTakeover; // offset 0x83A, size 0x1, align 1
    bool m_bInTeamChat; // offset 0x83B, size 0x1, align 1
    bool m_bInPartyChat; // offset 0x83C, size 0x1, align 1
    bool m_bLaneSwapLocked; // offset 0x83D, size 0x1, align 1
    char _pad_083E[0x2]; // offset 0x83E
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRequests; // offset 0x840, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRejects; // offset 0x858, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecMutedPlayers; // offset 0x870, size 0x18, align 8
    bool m_bCommsRestricted; // offset 0x888, size 0x1, align 1
    bool m_bPriorCommsAbuse; // offset 0x889, size 0x1, align 1
    bool m_bIsNewPlayer; // offset 0x88A, size 0x1, align 1
    char _pad_088B[0x1]; // offset 0x88B
    uint32 m_unEconAccountID; // offset 0x88C, size 0x4, align 4
    char _pad_0890[0x30]; // offset 0x890
    CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // offset 0x8C0, size 0x4, align 4
    char _pad_08C4[0x44]; // offset 0x8C4
    PlayerDataGlobal_t m_PlayerDataGlobal; // offset 0x908, size 0x348, align 255 | MNotSaved
    int8 m_nDeathReplayAvailable; // offset 0xC50, size 0x1, align 1
    CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // offset 0xC51, size 0x1, align 255
    bool m_bHasCheckedFriendName; // offset 0xC52, size 0x1, align 1
    char _pad_0C53[0x5]; // offset 0xC53
    CUtlString m_sFriendName; // offset 0xC58, size 0x8, align 8
};
